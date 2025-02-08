#pragma once

enum EChannelType
{
	CHTYPE_None = 0,
	CHTYPE_Control = 1,
	CHTYPE_Actor = 2,
	CHTYPE_File = 3,
	CHTYPE_Voice = 4,
	CHTYPE_MAX = 8,
};

namespace Replication
{
	inline void (*SendClientAdjustment)(APlayerController* PlayerController);
	inline UChannel* (*CreateChannel)(UNetConnection* Connection, EChannelType ChType, bool bOpenedLocally, int32 ChannelIndex);
	inline void (*SetChannelActor)(UActorChannel* ActorChannel, AActor* InActor);
	inline void (*CallPreReplication)(AActor* Actor, UNetDriver* NetDriver);
	inline int64(*ReplicateActor)(UActorChannel* ActorChannel);
	inline void (*RemoveNetworkActor)(UWorld* World, AActor* Actor);
	inline void (*AddNetworkActor)(UWorld* World, AActor* Actor);
	inline static void (*ActorChannelClose)(UActorChannel* Channel);
	inline bool (*ClientHasInitializedLevelFor)(UNetConnection* NetConnection, const AActor* TestActor);

	inline bool bFirstBuildConsiderList = false;
	inline std::vector<AActor*> NetworkActors;

	UActorChannel* FindChannel(AActor* Actor, UNetConnection* Connection)
	{
		if (!Actor || !Connection) return nullptr;

		for (int i = 0; i < Connection->OpenChannels.Num(); i++)
		{
			auto Channel = Connection->OpenChannels[i];

			if (Channel && Channel->Class)
			{
				if (Channel->Class == UActorChannel::StaticClass())
				{
					if (((UActorChannel*)Channel)->Actor == Actor)
						return ((UActorChannel*)Channel);
				}
			}
		}

		return nullptr;
	}

	void AddNetworkActorHook(UWorld* World, AActor* Actor)
	{
		if (Actor == nullptr || World == nullptr)
			return AddNetworkActor(World, Actor);

		if (!World->NetDriver)
			return AddNetworkActor(World, Actor);

		if (World->NetDriver->ClientConnections.Num() == 0)
			return AddNetworkActor(World, Actor);

		if (Actor->bActorIsBeingDestroyed)
			return AddNetworkActor(World, Actor);

		for (auto it = NetworkActors.begin(); it != NetworkActors.end(); )
		{
			if (*it == Actor)
			{
				it = NetworkActors.erase(it);
			}
			else ++it;
		}

		NetworkActors.push_back(Actor);

		return AddNetworkActor(World, Actor);
	}

	void RemoveNetworkActorHook(UWorld* World, AActor* Actor, bool bDestroyActor = false)
	{
		if (Actor == nullptr || World == nullptr)
			return RemoveNetworkActor(World, Actor);

		if (!World->NetDriver)
			return RemoveNetworkActor(World, Actor);

		if (World->NetDriver->ClientConnections.Num() == 0)
			return RemoveNetworkActor(World, Actor);

		if (bDestroyActor)
		{
			Actor->bActorIsBeingDestroyed = true;
			Actor->bAutoDestroyWhenFinished = true;
			Actor->K2_DestroyActor();
			Actor->ReceiveDestroyed();
			Actor->ForceNetUpdate();

			for (int i = 0; i < World->NetDriver->ClientConnections.Num(); i++)
			{
				UNetConnection* Connection = World->NetDriver->ClientConnections[i];
				if (!Connection) continue;

				auto Channel = FindChannel(Actor, Connection);
				if (Channel) ActorChannelClose(Channel);
			}
		}

		for (auto it = NetworkActors.begin(); it != NetworkActors.end(); )
		{
			if (*it == Actor)
			{
				it = NetworkActors.erase(it);
			}
			else ++it;
		}

		return RemoveNetworkActor(World, Actor);
	}

	UActorChannel* ReplicateToClient(AActor* InActor, UNetConnection* InConnection)
	{
		if (!InActor || !InConnection) return nullptr;

		if (InActor->IsA(APlayerController::StaticClass()) && InActor != InConnection->PlayerController)
			return nullptr;

		auto Channel = (UActorChannel*)(CreateChannel(InConnection, EChannelType::CHTYPE_Actor, true, -1));

		if (Channel) {
			SetChannelActor(Channel, InActor);
			Channel->Connection = InConnection;

			return Channel;
		}

		return nullptr;
	}

	bool IsLevelInitializedForActor(UNetDriver* NetDriver, AActor* InActor, UNetConnection* InConnection)
	{
		const bool bCorrectWorld = true && ClientHasInitializedLevelFor(InConnection, InActor);
		const bool bIsConnectionPC = (InActor == InConnection->PlayerController);

		return bCorrectWorld || bIsConnectionPC;
	}

	int32 ServerReplicateActors_PrepConnections(UNetDriver* NetDriver)
	{
		int32 NumClientsToTick = NetDriver->ClientConnections.Num();
		bool bFoundReadyConnection = false;

		for (int32 ConnIdx = 0; ConnIdx < NetDriver->ClientConnections.Num(); ConnIdx++)
		{
			UNetConnection* Connection = NetDriver->ClientConnections[ConnIdx];
			if (!Connection) continue;

			AActor* OwningActor = Connection->OwningActor;
			if (OwningActor != NULL && (Connection->Driver->Time - Connection->LastReceiveTime < 1.5f))
			{
				bFoundReadyConnection = true;

				AActor* DesiredViewTarget = OwningActor;
				if (Connection->PlayerController)
				{
					if (AActor* ViewTarget = Connection->PlayerController->GetViewTarget())
					{
						DesiredViewTarget = ViewTarget;
					}
				}

				Connection->ViewTarget = DesiredViewTarget;

				for (int32 ChildIdx = 0; ChildIdx < Connection->Children.Num(); ChildIdx++)
				{
					UNetConnection* Child = Connection->Children[ChildIdx];
					APlayerController* ChildPlayerController = Child->PlayerController;

					if (ChildPlayerController != NULL)
					{
						Child->ViewTarget = ChildPlayerController->GetViewTarget();
					}
					else
					{
						Child->ViewTarget = NULL;
					}
				}
			}
			else
			{
				Connection->ViewTarget = NULL;
				for (int32 ChildIdx = 0; ChildIdx < Connection->Children.Num(); ChildIdx++)
					Connection->Children[ChildIdx]->ViewTarget = NULL;
			}
		}

		return bFoundReadyConnection ? NumClientsToTick : 0;
	}

	void ServerReplicateActors_BuildConsiderList(UNetDriver* NetDriver)
	{
		int32 NumInitiallyDormant = 0;

		UGameplayStatics* GameplayStatics = Globals::GetGameplayStatics();

		TArray<AActor*> Actors;
		GameplayStatics->GetAllActorsOfClass(NetDriver->World, AActor::StaticClass(), &Actors);

		for (int i = 0; i < Actors.Num(); i++)
		{
			AActor* Actor = Actors[i];
			if (!Actor) continue;

			if (Actor->NetDriverName != NetDriver->NetDriverName)
				continue;

			if (Actor->bActorIsBeingDestroyed)
				continue;

			if (Actor->RemoteRole == ENetRole::ROLE_None)
				continue;

			if (Actor->NetDormancy == ENetDormancy::DORM_Initial && Actor->bNetStartup)
				continue;

			NetworkActors.push_back(Actor);
			CallPreReplication(Actor, NetDriver);
		}

		bFirstBuildConsiderList = true;
	}

	int32 ServerReplicateActors(UNetDriver* NetDriver)
	{
		if (NetDriver->ClientConnections.Num() == 0)
			return 0;

		if (!NetDriver->World)
			return 0;

		++(*(int*)(__int64(NetDriver) + 0x328));

		int32 Updated = 0;

		const int32 NumClientsToTick = ServerReplicateActors_PrepConnections(NetDriver);

		if (NumClientsToTick == 0)
			return 0;

		/*if (!bFirstBuildConsiderList)
			ServerReplicateActors_BuildConsiderList(NetDriver);*/

		for (int32 i = 0; i < NetDriver->ClientConnections.Num(); i++)
		{
			UNetConnection* Connection = NetDriver->ClientConnections[i];
			if (!Connection) continue;

			if (Connection->ViewTarget)
			{
				if (Connection->PlayerController)
					SendClientAdjustment(Connection->PlayerController);

				UGameplayStatics* GameplayStatics = Globals::GetGameplayStatics();

				TArray<AActor*> Actors;
				GameplayStatics->GetAllActorsOfClass(NetDriver->World, AActor::StaticClass(), &Actors);

				for (int32 i = 0; i < Actors.Num(); i++)
				{
					AActor* Actor = Actors[i];
					if (!Actor) continue;

					if (Actor->bActorIsBeingDestroyed)
					{
						//RemoveNetworkActor(NetDriver->World, Actor);
						continue;
					}

					if (Actor->RemoteRole == ENetRole::ROLE_None)
					{
						//RemoveNetworkActor(NetDriver->World, Actor);
						continue;
					}

					if (Actor->NetDormancy == ENetDormancy::DORM_Initial && Actor->bNetStartup)
					{
						//RemoveNetworkActor(NetDriver->World, Actor);
						continue;
					}

					CallPreReplication(Actor, NetDriver);

					UActorChannel* Channel = FindChannel(Actor, Connection);

					if (!Channel)
					{
						if (!IsLevelInitializedForActor(NetDriver, Actor, Connection))
							continue;
					}

					if (!Channel) Channel = ReplicateToClient(Actor, Connection);
					if (Channel) ReplicateActor(Channel);
				}
			}
		}

		return Updated;
	}

	void InitReplication()
	{
		START_DETOUR;
		DetourAttach(AddNetworkActor, AddNetworkActorHook);
		DetourAttach(RemoveNetworkActor, RemoveNetworkActorHook);
		END_DETOUR;

		HLog("InitReplication Success!");
	}
}
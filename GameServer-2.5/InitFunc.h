#pragma once

namespace Init
{
	
	bool InitializeAll()
	{
		auto FMemory_FreePattern = Util::FindPattern("48 85 C9 74 1D 4C 8B 05 ? ? ? ? 4D 85 C0");
		CheckPattern(FMemory_FreePattern, "Failed to find FMemory_FreePattern");

		auto FMemory_MallocPattern = Util::FindPattern("4C 8B C9 48 8B 0D ? ? ? ? 48 85 C9 75 08 49");
		CheckPattern(FMemory_MallocPattern, "Failed to find FMemory_MallocPattern");

		auto FMemory_ReallocPattern = Util::FindPattern("4C 8B D1 48 8B 0D ? ? ? ? 48 85 C9 75 08 49");
		CheckPattern(FMemory_ReallocPattern, "Failed to find FMemory_ReallocPattern");

		auto PatternInitHost = Util::FindPattern("48 8B C4 48 81 EC ? ? ? ? 48 89 58 18 4C 8D 05 ? ? ? ? 48 8B D9");
		CheckPattern(PatternInitHost, "Failed To Find PatternInitHost");

		auto PatternInitListen = Util::FindPattern("48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 50 48 8B BC 24 ? ? ? ? 49 8B F0 48 8B 01 48 8B D9");
		CheckPattern(PatternInitListen, "Failed To Find PatternInitListen");

		auto PatternSetWorld = Util::FindPattern("48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 20 48 8B B1 ? ? ? ? 48 8B FA 48 8B D9 48 85 F6 74 5C");
		CheckPattern(PatternSetWorld, "Failed To Find PatternSetWorld");

		auto PatternTickFlush = Util::FindPattern("4C 8B DC 55 49 8D AB ? ? ? ? 48 81 EC ? ? ? ? 45 0F 29 43 ? 45 0F 29 4B ? 48 8B 05 ? ? ? ? 48 33 C4"); // 7FF718BF8B40
		CheckPattern(PatternTickFlush, "Failed To Find PatternTickFlush");

		auto PatternSendClientAdjustment = Util::FindPattern("40 53 48 83 EC 20 48 8B 99 ? ? ? ? 48 39 99 ? ? ? ? 74 0A 48 83 B9 ? ? ? ? ? 74 78");
		CheckPattern(PatternSendClientAdjustment, "Failed To Find PatternSendClientAdjustment");

		auto PatternCreateChannel = Util::FindPattern("40 56 57 41 54 41 55 41 57 48 83 EC 60 48 8B 01 41 8B F9 45 0F B6 E0 4C 63 FA 48 8B F1");
		CheckPattern(PatternCreateChannel, "Failed To Find PatternCreateChannel");

		auto PatternSetChannelActor = Util::FindPattern("48 8B C4 55 53 48 8D A8 ? ? ? ? 48 81 EC ? ? ? ? 48 89 70 E8 48 8B D9");
		CheckPattern(PatternSetChannelActor, "Failed To Find PatternSetChannelActor");

		auto PatternCallPreReplication = Util::FindPattern("48 85 D2 0F 84 ? ? ? ? 56 41 56 48 83 EC 38 4C 8B F2");
		CheckPattern(PatternCallPreReplication, "Failed To Find PatternCallPreReplication");

		auto PatternReplicateActor = Util::FindPattern("40 55 56 41 54 41 55 41 56 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ? 4C 8B E9");
		CheckPattern(PatternReplicateActor, "Failed To Find PatternReplicateActor");

		auto PatternClientHasInitializedLevelFor = Util::FindPattern("48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 20 48 8B 5A 20 48 8B F1 4C 8B C3");
		CheckPattern(PatternClientHasInitializedLevelFor, "Failed To Find PatternClientHasInitializedLevelFor");

		auto PatternGetNetMode = Util::FindPattern("48 83 79 ? ? 74 06 B8 ? ? ? ? C3 48 8B 81 ? ? ? ? 48 85 C0");
		CheckPattern(PatternGetNetMode, "Failed To Find PatternGetNetMode");

		auto PatternKickPlayer = Util::FindPattern("48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 20 49 8B F0 48 8B DA 48 85 D2 74 78");
		CheckPattern(PatternKickPlayer, "Failed To Find PatternKickPlayer");

		auto PatternDispatchRequest = Util::FindPattern("48 89 5C 24 ? 55 56 57 41 56 41 57 48 8B EC 48 81 EC ? ? ? ? 48 8B F1");
		CheckPattern(PatternDispatchRequest, "Failed To Find PatternDispatchRequest");

		auto PatternApplyCharacterCustomization = Util::FindPattern("48 8B C4 48 89 50 10 55 57 48 8D 68 A1 48 81 EC ? ? ? ? 80 B9 ? ? ? ? ? 48 8B F9");
		CheckPattern(PatternApplyCharacterCustomization, "Failed To Find PatternApplyCharacterCustomization");

		auto PatternLocalSpawnPlayActor = Util::FindPattern("40 55 53 56 57 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 45 40 48 8B D9");
		CheckPattern(PatternLocalSpawnPlayActor, "Failed To Find PatternLocalSpawnPlayActor");

		auto PatternInternalTryActivateAbility = Util::FindPattern("4C 89 4C 24 ? 4C 89 44 24 ? 89 54 24 10 55 53 56 41 54 41 55 41 56");
		CheckPattern(PatternInternalTryActivateAbility, "Failed To Find PatternInternalTryActivateAbility");

		auto PatternGiveAbility = Util::FindPattern("48 89 5C 24 ? 56 57 41 56 48 83 EC 20 83 B9 ? ? ? ? ? 49 8B F0");
		CheckPattern(PatternGiveAbility, "Failed To Find PatternGiveAbility"); // GiveAbilityAndActivateOnce 40 55 56 57 48 8B EC 48 83 EC 70 49 8B 40 10 48 8B FA 48 8B F1

		auto PatternCreateDefaultObject = Util::FindPattern("4C 8B DC 57 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 84 24 ? ? ? ? 48 83 B9 ? ? ? ? ? 48 8B F9");
		CheckPattern(PatternCreateDefaultObject, "Failed To Find PatternCreateDefaultObject");

		auto PatternPickupDelay = Util::FindPattern("4C 8B DC 53 55 56 48 83 EC 60 48 8B F1 48 8B 89 ? ? ? ? 48 85 C9");
		CheckPattern(PatternPickupDelay, "Failed To Find PatternPickupDelay");

		auto PatternPickupInitialize = Util::FindPattern("48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC 20 80 B9 ? ? ? ? ? 41 0F B6 E9 49 8B F8");
		CheckPattern(PatternPickupInitialize, "Failed To Find PatternPickupInitialize");

		auto PatternCantBuild = Util::FindPattern("48 89 54 24 ? 55 56 41 56 48 83 EC 50 49 8B E9");
		CheckPattern(PatternCantBuild, "Failed To Find PatternCantBuild");

		auto PatternReplaceBuildingActor = Util::FindPattern("4C 89 44 24 ? 55 56 57 41 55 41 56 41 57 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ? 45 33 ED");
		CheckPattern(PatternReplaceBuildingActor, "Failed To Find PatternReplaceBuildingActor");

		auto PatternFreeEntry = Util::FindPattern("48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 20 48 8B F1 48 8B 89 ? ? ? ? 48 85 C9 74 05 E8 ? ? ? ? 48 8B 8E ? ? ? ? 48 85 C9 74 05 E8 ? ? ? ? 48 8B 9E ? ? ? ? 48 85 DB 74 22");
		CheckPattern(PatternFreeEntry, "Failed To Find PatternFreeEntry");

		auto PatternGetDataTableRowFromName = Util::FindPattern("48 89 5C 24 ? 57 48 83 EC 20 49 8B F8 48 8B D9 4D 85 C0 74 39 48 85 C9 74 34");
		CheckPattern(PatternGetDataTableRowFromName, "Failed To Find PatternGetDataTableRowFromName");

		//48 89 5C 24 ? 48 89 74 24 ? 55 57 41 54 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 83 7A ? ? 4C 8B F1

		if (CheckAllPattern())
		{
			auto ImageBase = InSDKUtils::GetImageBase();

			// Base
			ProcessEvent = decltype(ProcessEvent)(ImageBase + Offsets::ProcessEvent);
			FMemory_Free = decltype(FMemory_Free)(FMemory_FreePattern);
			FMemory_Malloc = decltype(FMemory_Malloc)(FMemory_MallocPattern);
			FMemory_Realloc = decltype(FMemory_Realloc)(FMemory_ReallocPattern);

			// Beacon
			Beacon::InitHost = decltype(Beacon::InitHost)(PatternInitHost);
			Beacon::InitListen = decltype(Beacon::InitListen)(PatternInitListen);
			Beacon::SetWorld = decltype(Beacon::SetWorld)(PatternSetWorld);

			// Abilities
			Abilities::InternalTryActivateAbility = decltype(Abilities::InternalTryActivateAbility)(PatternInternalTryActivateAbility);
			Abilities::CreateDefaultObject = decltype(Abilities::CreateDefaultObject)(PatternCreateDefaultObject);
			Abilities::GiveAbility = decltype(Abilities::GiveAbility)(PatternGiveAbility);

			// Replication
			Beacon::TickFlush = decltype(Beacon::TickFlush)(PatternTickFlush);
			Replication::SendClientAdjustment = decltype(Replication::SendClientAdjustment)(PatternSendClientAdjustment);
			Replication::CreateChannel = decltype(Replication::CreateChannel)(PatternCreateChannel);
			Replication::SetChannelActor = decltype(Replication::SetChannelActor)(PatternSetChannelActor);
			Replication::CallPreReplication = decltype(Replication::CallPreReplication)(PatternCallPreReplication);
			Replication::ReplicateActor = decltype(Replication::ReplicateActor)(PatternReplicateActor); 
			Replication::ClientHasInitializedLevelFor = decltype(Replication::ClientHasInitializedLevelFor)(PatternClientHasInitializedLevelFor);

			// Others
			ToHooks::FindRow = decltype(ToHooks::FindRow)(ImageBase + 0x1B7AC90);

			ToHooks::ApplyCharacterCustomization = decltype(ToHooks::ApplyCharacterCustomization)(PatternApplyCharacterCustomization);
			ToHooks::ReplaceBuildingActor = decltype(ToHooks::ReplaceBuildingActor)(PatternReplaceBuildingActor);
			ToHooks::LocalSpawnPlayActor = decltype(ToHooks::LocalSpawnPlayActor)(PatternLocalSpawnPlayActor);
			ToHooks::DispatchRequest = decltype(ToHooks::DispatchRequest)(PatternDispatchRequest);
			ToHooks::GetNetMode = decltype(ToHooks::GetNetMode)(PatternGetNetMode);
			ToHooks::KickPlayer = decltype(ToHooks::KickPlayer)(PatternKickPlayer);
			ToHooks::CantBuild = decltype(ToHooks::CantBuild)(PatternCantBuild);
			
			// Inventory
			ToHooks::PickupDelay = decltype(ToHooks::PickupDelay)(PatternPickupDelay);
			Inventory::PickupInitialize = decltype(Inventory::PickupInitialize)(PatternPickupInitialize);
			Inventory::FreeEntry = decltype(Inventory::FreeEntry)(PatternFreeEntry);

			return true;
		}

		return false;
	}
}

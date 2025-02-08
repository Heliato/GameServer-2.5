#pragma once

#include <algorithm>
#include <time.h>
#include <vector>
#include <unordered_map>
#include <functional>
#include <string>
#include <sstream>

enum ENetMode
{
	NM_Standalone,
	NM_DedicatedServer,
	NM_ListenServer,
	NM_Client,
	NM_MAX,
};

std::vector<std::string> split(const std::string& s, char delimiter) {
	std::vector<std::string> tokens;
	std::string token;
	std::istringstream tokenStream(s);
	while (std::getline(tokenStream, token, delimiter)) {
		tokens.push_back(token);
	}
	return tokens;
}

namespace ToHooks
{ 
	bool (*CantBuild)(UWorld* World, TSubclassOf<ABuildingActor> BuildingClassData, const FVector_NetQuantize10& BuildLoc, const FRotator& BuildRot, bool bMirrored, TArray<ABuildingSMActor*>* ExistingBuildings);
	ABuildingSMActor* (*ReplaceBuildingActor)(ABuildingSMActor* BuildingActor, unsigned int a2, TSubclassOf<ABuildingSMActor> NewBuildingClass, int32 CurrentBuildingLevel, int32 RotationIterations, bool bMirrored, AFortPlayerController* PlayerController);
	__int64 (*DispatchRequest)(__int64 a1, __int64* a2, int a3);
	void (*ApplyCharacterCustomization)(AFortPlayerState* PlayerState, AFortPawn* Pawn);
	ENetMode (*GetNetMode)(ENetMode NetMode);
	void (*PickupDelay)(AFortPickup* Pickup);
	void (*KickPlayer)();
	bool (*LocalSpawnPlayActor)();

	void* (*FindRow)(UDataTable* DataTable, FName RowName, const TCHAR* ContextString, bool bWarnIfRowMissing);
}

namespace Hooks
{
	bool bPreReadyToStartMatch = false;
	bool bStartListen = false;
	bool bStartMatch = false;
	bool bWorldReady = false;

	void PickupDelayHook(AFortPickup* Pickup)
	{
		if (!Pickup)
			return ToHooks::PickupDelay(Pickup);

		FFortPickupLocationData PickupLocationData = Pickup->PickupLocationData;
		AFortPawn* Pawn = PickupLocationData.ItemOwner;

		if (!Pawn)
			return ToHooks::PickupDelay(Pickup);

		AFortPlayerController* PlayerController = (AFortPlayerController*)Pawn->Controller;

		if (PlayerController)
		{
			AFortInventory* WorldInventory = PlayerController->WorldInventory;
			AFortQuickBars* QuickBars = PlayerController->QuickBars;
			FFortItemEntry ItemEntry = Pickup->PrimaryPickupItemEntry;
			UFortItemDefinition* ItemDefinition = ItemEntry.ItemDefinition;

			if (!QuickBars || !ItemDefinition)
				return ToHooks::PickupDelay(Pickup);

			bool bSuccessfullyAdded = false;
			int CountToRemove = 0;

			if (ItemDefinition->IsA(UFortWeaponRangedItemDefinition::StaticClass()))
			{
				UFortWorldItem* StackableItemInstance = Inventory::GetItemStackable(PlayerController, ItemDefinition);

				if (!StackableItemInstance)
				{
					int AvailableSlot = Inventory::GetAvailableSlotQuickbar(PlayerController, EFortQuickBars::Primary);

					if (AvailableSlot == -1)
					{
						int CurrentSlot = QuickBars->PrimaryQuickBar.CurrentFocusedSlot;

						if (CurrentSlot > 0 && CurrentSlot < 6)
						{
							UFortWorldItem* ItemSlotInstance = Inventory::GetItemSlot(PlayerController, CurrentSlot, EFortQuickBars::Primary);

							if (ItemSlotInstance)
							{
								PlayerController->ServerSpawnInventoryDrop(ItemSlotInstance->GetItemGuid(), ItemSlotInstance->ItemEntry.Count);

								UFortWorldItem* NewPickupWorldItem = Inventory::AddInventoryItem(PlayerController, ItemDefinition, ItemEntry.Count, true, ItemEntry);

								if (NewPickupWorldItem)
								{
									Inventory::AddQuickBarItem(PlayerController, NewPickupWorldItem->GetItemGuid(), CurrentSlot, EFortQuickBars::Primary);
									PlayerController->ServerExecuteInventoryItem(NewPickupWorldItem->GetItemGuid());

									bSuccessfullyAdded = true;
								}
							}
						}
					}
					else
					{
						UFortWorldItem* NewPickupWorldItem = Inventory::AddInventoryItem(PlayerController, ItemDefinition, ItemEntry.Count, true, ItemEntry);

						if (NewPickupWorldItem)
						{
							Inventory::AddQuickBarItem(PlayerController, NewPickupWorldItem->GetItemGuid(), AvailableSlot, EFortQuickBars::Primary);
							bSuccessfullyAdded = true;
						}
					}
				}
				else
				{
					int NewCount = StackableItemInstance->ItemEntry.Count + ItemEntry.Count;

					if (NewCount > ItemDefinition->MaxStackSize)
					{
						CountToRemove = NewCount - ItemDefinition->MaxStackSize;
						NewCount = ItemDefinition->MaxStackSize;
					}

					bSuccessfullyAdded = true;
					Inventory::ModifyCountItem(PlayerController, StackableItemInstance->GetItemGuid(), NewCount);
				}
			}
			else if (ItemDefinition->IsA(UFortAmmoItemDefinition::StaticClass()) ||
				ItemDefinition->IsA(UFortResourceItemDefinition::StaticClass()))
			{
				FGuid ItemGuid = Inventory::GetItemGuid(PlayerController, ItemDefinition);
				UFortWorldItem* ItemInstance = Inventory::GetItemInstance(PlayerController, ItemGuid);

				if (ItemInstance)
				{
					Inventory::RemoveItemFromInventory(PlayerController, ItemInstance->GetItemGuid());

					ItemEntry.Count = ItemInstance->ItemEntry.Count + ItemEntry.Count;

					if (ItemEntry.Count > ItemDefinition->MaxStackSize)
					{
						CountToRemove = ItemEntry.Count - ItemDefinition->MaxStackSize;
						ItemEntry.Count = ItemDefinition->MaxStackSize;
					}

					Inventory::AddInventoryItem(PlayerController, ItemDefinition, ItemEntry.Count, true, ItemEntry);
					bSuccessfullyAdded = true;
				}
				else
				{
					Inventory::AddInventoryItem(PlayerController, ItemDefinition, ItemEntry.Count, true, ItemEntry);
					bSuccessfullyAdded = true;
				}
			}

			if (bSuccessfullyAdded && CountToRemove > 0)
			{
				ItemEntry.Count = CountToRemove;
				Inventory::SpawnItem(ItemDefinition, ItemEntry, Pawn, Pawn->K2_GetActorLocation());
			}

			if (!bSuccessfullyAdded)
			{
				Pickup->bPickedUp = false;
				Pickup->OnRep_bPickedUp();

				Inventory::SpawnItem(ItemDefinition, ItemEntry, Pawn, Pawn->K2_GetActorLocation());
			}

			Inventory::UpdateInventory(PlayerController);
		}

		return ToHooks::PickupDelay(Pickup);
	}

	static __int64 DispatchRequestHook(__int64 a1, __int64* a2, int a3)
	{
		*(int*)(__int64(a2) + 0x60) = 3;

		return ToHooks::DispatchRequest(a1, a2, 3);
	}

	static bool LocalSpawnPlayActorHook()
	{
		return true;
	}

	static void KickPlayerHook()
	{
		return;
	}

	static ENetMode GetNetModeHook() {
		return ENetMode::NM_DedicatedServer;
	}

	static inline int64_t GIsServer()
	{
		return __int64(GetModuleHandleW(0)) + 0x46AD735;
	}

	static inline int64_t GIsClient()
	{
		return __int64(GetModuleHandleW(0)) + 0x46AD734;
	}

	void ProcessEventHook(UObject* Object, UFunction* Function, void* Parms)
	{
		std::string FuncName = Function->GetName();
		
		if (FuncName.contains("Tick"))
		{
			if (GetAsyncKeyState(VK_F5) & 0x1)
			{
				AFortPlayerController* PlayerController = (AFortPlayerController*)Globals::GetGameplayStatics()->GetPlayerController(Globals::GetWorld(), 0);

				if (PlayerController && PlayerController->PlayerState)
				{
					AFortPlayerState* PlayerState = (AFortPlayerState*)PlayerController->PlayerState;
					FFortPlayerAttributeSets AttributeSets = PlayerState->AttributeSets;

					UFortRegenHealthSet* HealthSet = AttributeSets.HealthSet;
					UFortConstructionSet* ConstructionSet = AttributeSets.ConstructionSet;

					if (HealthSet)
					{
						HLog("HealthSet");

						HLog("Health");
						HLog("Health.BaseValue: " << HealthSet->Health.BaseValue);
						HLog("Health.CurrentValue: " << HealthSet->Health.CurrentValue);
						HLog("Health.Minimum: " << HealthSet->Health.Minimum);
						HLog("Health.Maximum: " << HealthSet->Health.Maximum);

						HLog("MaxHealth");
						HLog("MaxHealth.BaseValue: " << HealthSet->MaxHealth.BaseValue);
						HLog("MaxHealth.CurrentValue: " << HealthSet->MaxHealth.CurrentValue);
						HLog("MaxHealth.Minimum: " << HealthSet->MaxHealth.Minimum);
						HLog("MaxHealth.Maximum: " << HealthSet->MaxHealth.Maximum);

						HLog("CurrentShield");
						HLog("CurrentShield.BaseValue: " << HealthSet->CurrentShield.BaseValue);
						HLog("CurrentShield.CurrentValue: " << HealthSet->CurrentShield.CurrentValue);
						HLog("CurrentShield.Minimum: " << HealthSet->CurrentShield.Minimum);
						HLog("CurrentShield.Maximum: " << HealthSet->CurrentShield.Maximum);

						HLog("Shield");
						HLog("Shield.BaseValue: " << HealthSet->Shield.BaseValue);
						HLog("Shield.CurrentValue: " << HealthSet->Shield.CurrentValue);
						HLog("Shield.Minimum: " << HealthSet->Shield.Minimum);
						HLog("Shield.Maximum: " << HealthSet->Shield.Maximum);

						HLog("Armour");
						HLog("Armour.BaseValue: " << HealthSet->Armour.BaseValue);
						HLog("Armour.CurrentValue: " << HealthSet->Armour.CurrentValue);
						HLog("Armour.Minimum: " << HealthSet->Armour.Minimum);
						HLog("Armour.Maximum: " << HealthSet->Armour.Maximum);
					}

					if (ConstructionSet)
					{
						HLog("ConstructionSet");

						HLog("BuildCost");
						HLog("BuildCost.BaseValue: " << ConstructionSet->BuildCost.BaseValue);
						HLog("BuildCost.CurrentValue: " << ConstructionSet->BuildCost.CurrentValue);
						HLog("BuildCost.Minimum: " << ConstructionSet->BuildCost.Minimum);
						HLog("BuildCost.Maximum: " << ConstructionSet->BuildCost.Maximum);

						HLog("RepairCost");
						HLog("RepairCost.BaseValue: " << ConstructionSet->RepairCost.BaseValue);
						HLog("RepairCost.CurrentValue: " << ConstructionSet->RepairCost.CurrentValue);
						HLog("RepairCost.Minimum: " << ConstructionSet->RepairCost.Minimum);
						HLog("RepairCost.Maximum: " << ConstructionSet->RepairCost.Maximum);
					}
				}
			}

			if (GetAsyncKeyState(VK_F4) & 0x1)
			{
				HLog("GetAvailableSlotQuickbar: " << Inventory::GetAvailableSlotQuickbar((AFortPlayerController*)Globals::GetGameplayStatics()->GetPlayerController(Globals::GetWorld(), 0), EFortQuickBars::Primary));
			}

			if (GetAsyncKeyState(VK_F3) & 0x1)
			{
				AFortPlayerController* PlayerController = (AFortPlayerController*)Globals::GetGameplayStatics()->GetPlayerController(Globals::GetWorld(), 0);

				if (PlayerController && PlayerController->Pawn)
				{
					FFortItemEntry ItemEntry;
					ItemEntry.Count = 1;

					static auto ItemDefinition = FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_SemiAuto_Athena_VR_Ore_T03.WID_Pistol_SemiAuto_Athena_VR_Ore_T03");

					int AvailableSlot = Inventory::GetAvailableSlotQuickbar(PlayerController, EFortQuickBars::Primary);

					if (AvailableSlot == -1)
					{
						int CurrentSlot = PlayerController->QuickBars->PrimaryQuickBar.CurrentFocusedSlot;

						if (CurrentSlot > 0 && CurrentSlot < 6)
						{
							UFortWorldItem* ItemSlotInstance = Inventory::GetItemSlot(PlayerController, CurrentSlot, EFortQuickBars::Primary);

							if (ItemSlotInstance)
							{
								PlayerController->ServerSpawnInventoryDrop(ItemSlotInstance->GetItemGuid(), ItemSlotInstance->ItemEntry.Count);

								UFortWorldItem* NewPickupWorldItem = Inventory::AddInventoryItem(PlayerController, ItemDefinition, ItemEntry.Count);

								if (NewPickupWorldItem)
								{
									Inventory::AddQuickBarItem(PlayerController, NewPickupWorldItem->GetItemGuid(), CurrentSlot, EFortQuickBars::Primary);
									PlayerController->ServerExecuteInventoryItem(NewPickupWorldItem->GetItemGuid());
								}
							}
						}
					}
					else
					{
						UFortWorldItem* NewPickupWorldItem = Inventory::AddInventoryItem(PlayerController, ItemDefinition, ItemEntry.Count);

						if (NewPickupWorldItem)
							Inventory::AddQuickBarItem(PlayerController, NewPickupWorldItem->GetItemGuid(), AvailableSlot, EFortQuickBars::Primary);
					}

					Inventory::UpdateInventory(PlayerController);
				}
			}
		}

		if (FuncName.contains("ReadyToStartMatch"))
		{
			if (!bPreReadyToStartMatch)
			{
				Globals::GetFortEngine(true);
				Globals::GetWorld(true);
				Globals::GetMathLibrary(true);
				Globals::GetSystemLibrary(true);
				Globals::GetStringLibrary(true);
				Globals::GetGameplayStatics(true);

				HLog("bPreReadyToStartMatch called!");

				bStartListen = true;
				bPreReadyToStartMatch = true;
			}
			else if (bPreReadyToStartMatch && bWorldReady)
			{
				UWorld* World = Globals::GetWorld();

				if (World)
				{
					AGameMode* GameMode = (AGameMode*)World->AuthorityGameMode;

					if (GameMode)
					{
						FName MatchState = GameMode->GetMatchState();

						if (GameMode->NumPlayers + GameMode->NumBots > 0 &&
							MatchState.ToString() == "WaitingToStart")
						{
							Match::ReadyToStartMatch();
							bStartMatch = true;
						}
					}
				}
			}
		}

		if (FuncName.contains("OnWorldReady"))
		{
			if (bStartListen)
			{
				/**(bool*)GIsClient() = false; // Full Bug
				*(bool*)GIsServer() = true;*/

				Beacon::Listen();
				Replication::InitReplication();

				bWorldReady = true;
				bStartListen = false;
			}
		}

		if (FuncName.contains("HandleStartingNewPlayer"))
		{
			auto Params = (SDK::Params::GameModeBase_HandleStartingNewPlayer*)Parms;
			UWorld* World = Globals::GetWorld();

			if (World)
			{
				AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Params->NewPlayer;

				if (PlayerController)
				{
					AGameModeBase* GameMode = World->AuthorityGameMode;
					AController* Player = Params->NewPlayer;

					if (GameMode && Player)
					{
						AActor* PlayerStart = GameMode->ChoosePlayerStart(Player);

						if (PlayerStart)
						{
							FVector PlayerStartLocation = PlayerStart->K2_GetActorLocation();
							FRotator PlayerStartRotation = PlayerStart->K2_GetActorRotation();

							Match::SpawnPlayer(PlayerController, PlayerStartLocation, PlayerStartRotation);
						}
					}
				}
			}
		}

		if (FuncName.contains("ServerAttemptAircraftJump"))
		{
			auto Params = (SDK::Params::FortPlayerControllerAthena_ServerAttemptAircraftJump*)Parms;

			AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Object;
			UWorld* World = Globals::GetWorld();

			if (PlayerController && World)
			{
				AFortGameModeAthena* GameMode = (AFortGameModeAthena*)World->AuthorityGameMode;
				AFortGameStateAthena* GameState = (AFortGameStateAthena*)World->GameState;

				if (GameMode && GameState)
				{
					if (PlayerController->IsInAircraft() && !PlayerController->Pawn)
					{
						AFortAthenaAircraft* Aircraft = GameState->GetAircraft();

						if (Aircraft)
						{
							FVector AircraftLocation = Aircraft->K2_GetActorLocation();
							FRotator ClientRotation = Params->ClientRotation;

							Match::SpawnPlayer(PlayerController, AircraftLocation, {}, false);
							PlayerController->SetControlRotation(ClientRotation);
							Inventory::RemoveAllItemsFromInventory(PlayerController);
						}
					}
				}
			}
		}

		if (FuncName.contains("AircraftExitedDropZone"))
		{
			UWorld* World = Globals::GetWorld();

			if (World && World->NetDriver)
			{
				for (int i = 0; i < World->NetDriver->ClientConnections.Num(); i++)
				{
					auto ClientConnection = World->NetDriver->ClientConnections[i];

					if (ClientConnection)
					{
						auto PlayerController = (AFortPlayerControllerAthena*)ClientConnection->PlayerController;
						if (!PlayerController) continue;
						if (PlayerController->Pawn) continue;
						if (!PlayerController->IsInAircraft()) continue;

						PlayerController->ServerAttemptAircraftJump({});
					}
				}
			}
		}

		if (FuncName.contains("ServerLoadingScreenDropped"))
		{
			AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Object;
			
			if (PlayerController)
			{
				AFortPlayerState* PlayerState = (AFortPlayerState*)PlayerController->PlayerState;
				AFortPlayerPawnAthena* Pawn = (AFortPlayerPawnAthena*)PlayerController->Pawn;

				if (PlayerState && Pawn)
				{
					ToHooks::ApplyCharacterCustomization(PlayerState, Pawn);

					UFortWeaponMeleeItemDefinition* PickaxeDefinition = PlayerController->CustomizationLoadout.Pickaxe->WeaponDefinition;

					if (!PickaxeDefinition)
						PickaxeDefinition = FindObjectFast<UFortWeaponMeleeItemDefinition>("/Game/Athena/Items/Weapons/WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");

					Inventory::SetupInventory(PlayerController, PickaxeDefinition);
				}
			}
		}

		if (FuncName.contains("ServerTryActivateAbility"))
		{
			auto Params = (Params::AbilitySystemComponent_ServerTryActivateAbility*)Parms;
			auto AbilitySystemComponent = (UAbilitySystemComponent*)Object;

			if (AbilitySystemComponent)
			{
				FGameplayAbilitySpecHandle& AbilityToActivate = Params->AbilityToActivate;
				FPredictionKey& PredictionKey = Params->PredictionKey;

				Abilities::InternalServerTryActiveAbility(AbilitySystemComponent, AbilityToActivate, Params->InputPressed, PredictionKey, nullptr);
			}
		}

		if (FuncName.contains("ServerAbilityRPCBatch"))
		{
			auto Params = (Params::AbilitySystemComponent_ServerAbilityRPCBatch*)Parms;
			auto AbilitySystemComponent = (UAbilitySystemComponent*)Object;

			if (AbilitySystemComponent)
			{
				auto BatchInfo = Params->BatchInfo;

				FGameplayAbilitySpecHandle& AbilityToActivate = BatchInfo.AbilitySpecHandle;
				FPredictionKey& PredictionKey = BatchInfo.PredictionKey;

				Abilities::InternalServerTryActiveAbility(AbilitySystemComponent, AbilityToActivate, BatchInfo.InputPressed, PredictionKey, nullptr);
			}
		}

		if (FuncName.contains("ServerExecuteInventoryItem"))
		{
			auto Params = (Params::FortPlayerController_ServerExecuteInventoryItem*)Parms;
			auto PlayerController = (AFortPlayerControllerAthena*)Object;

			if (PlayerController)
			{
				UFortWorldItem* ItemInstance = Inventory::GetItemInstance(PlayerController, Params->ItemGuid);
				AFortPawn* Pawn = (AFortPawn*)PlayerController->Pawn;

				if (ItemInstance && Pawn)
				{
					UFortItemDefinition* ItemDefinition = ItemInstance->GetItemDefinitionBP();

					if (!ItemDefinition)
						return ProcessEvent(Object, Function, Parms);

					AFortWeapon* Weapon = Pawn->EquipWeaponDefinition((UFortWeaponItemDefinition*)ItemDefinition, ItemInstance->GetItemGuid());

					if (Weapon && Weapon->IsA(AFortWeap_BuildingTool::StaticClass()))
					{
						AFortWeap_BuildingTool* BuildingTool = (AFortWeap_BuildingTool*)Weapon;

						if (BuildingTool)
						{
							static auto RoofPiece = FindObjectFast<UFortBuildingItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_RoofS.BuildingItemData_RoofS");
							static auto FloorPiece = FindObjectFast<UFortBuildingItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Floor.BuildingItemData_Floor");
							static auto WallPiece = FindObjectFast<UFortBuildingItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Wall.BuildingItemData_Wall");
							static auto StairPiece = FindObjectFast<UFortBuildingItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Stair_W.BuildingItemData_Stair_W");

							if (ItemDefinition == RoofPiece)
							{
								static auto RoofMetadata = FindObjectFast<UBuildingEditModeMetadata>("/Game/Building/EditModePatterns/Roof/EMP_Roof_RoofC.EMP_Roof_RoofC");
								BuildingTool->DefaultMetadata = RoofMetadata;
							}
							else if (ItemDefinition == StairPiece)
							{
								static auto StairMetadata = FindObjectFast<UBuildingEditModeMetadata>("/Game/Building/EditModePatterns/Stair/EMP_Stair_StairW.EMP_Stair_StairW");
								BuildingTool->DefaultMetadata = StairMetadata;
							}
							else if (ItemDefinition == WallPiece)
							{
								static auto WallMetadata = FindObjectFast<UBuildingEditModeMetadata>("/Game/Building/EditModePatterns/Wall/EMP_Wall_Solid.EMP_Wall_Solid");
								BuildingTool->DefaultMetadata = WallMetadata;
							}
							else if (ItemDefinition == FloorPiece)
							{
								static auto FloorMetadata = FindObjectFast<UBuildingEditModeMetadata>("/Game/Building/EditModePatterns/Floor/EMP_Floor_Floor.EMP_Floor_Floor");
								BuildingTool->DefaultMetadata = FloorMetadata;
							}

							BuildingTool->OnRep_DefaultMetadata();
						}
					}
					else if (ItemDefinition->IsA(UFortDecoItemDefinition::StaticClass()))
					{
						UFortDecoItemDefinition* DecoItemDefinition = (UFortDecoItemDefinition*)ItemDefinition;

						Pawn->PickUpActor(nullptr, DecoItemDefinition);
						Pawn->CurrentWeapon->ItemEntryGuid = ItemInstance->GetItemGuid();
					}
				}
			}
		}

		if (FuncName.contains("ServerSpawnInventoryDrop"))
		{
			auto Params = (Params::FortPlayerController_ServerSpawnInventoryDrop*)Parms;
			auto PlayerController = (AFortPlayerControllerAthena*)Object;

			if (PlayerController)
			{
				if (PlayerController->IsInAircraft() || !PlayerController->Pawn)
					return;

				AFortInventory* WorldInventory = PlayerController->WorldInventory;

				if (WorldInventory)
				{
					UFortWorldItem* ItemInstance = Inventory::GetItemInstance(PlayerController, Params->ItemGuid);

					if (ItemInstance)
					{
						UFortWorldItemDefinition* ItemDefinition = (UFortWorldItemDefinition*)ItemInstance->GetItemDefinitionBP();
						FFortItemEntry ItemEntry = ItemInstance->ItemEntry;

						if (ItemDefinition && ItemDefinition->bCanBeDropped)
						{
							FGuid ItemGuid = ItemInstance->GetItemGuid();

							if (ItemEntry.Count <= 0)
							{
								Inventory::RemoveItemFromQuickbar(PlayerController, ItemGuid);
								Inventory::RemoveItemFromInventory(PlayerController, ItemGuid);
							}
							else if (ItemEntry.Count == Params->Count)
							{
								Inventory::DropItemFromInventory(PlayerController, ItemGuid);
								Inventory::RemoveItemFromQuickbar(PlayerController, ItemGuid);
								Inventory::RemoveItemFromInventory(PlayerController, ItemGuid);
							}
							else if (Params->Count < ItemEntry.Count)
							{
								int Count = ItemEntry.Count - Params->Count;

								if (Count > 0)
								{
									Inventory::ModifyCountItem(PlayerController, ItemGuid, Count);

									ItemEntry.Count = Params->Count;
									Inventory::SpawnItem(ItemDefinition, ItemEntry, (AFortPawn*)PlayerController->Pawn, PlayerController->Pawn->K2_GetActorLocation());
								}
							}
						}
					}

					Inventory::UpdateInventory(PlayerController);
				}
			}
		}

		if (FuncName.contains("OnDamageServer"))
		{
			auto Params = (Params::BuildingActor_OnDamageServer*)Parms;
			auto Building = (ABuildingActor*)Object;

			if (Building && Params->DamageCauser && Params->InstigatedBy && Building->IsA(ABuildingSMActor::StaticClass()))
			{
				AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Params->InstigatedBy;
				ABuildingSMActor* BuildingActor = (ABuildingSMActor*)Building;
				AFortWeapon* Weapon = (AFortWeapon*)Params->DamageCauser;

				if (BuildingActor && Weapon && Weapon->WeaponData)
				{
					if (PlayerController && PlayerController->Pawn && !BuildingActor->bDestroyed && Weapon->WeaponData->IsA(UFortWeaponMeleeItemDefinition::StaticClass()))
					{
						UFortResourceItemDefinition* ItemDefinition = nullptr;

						if (BuildingActor->ResourceType == EFortResourceType::Wood)
						{
							static auto WoodItemData = FindObjectFast<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/WoodItemData.WoodItemData");
							ItemDefinition = WoodItemData;
						}
						else if (BuildingActor->ResourceType == EFortResourceType::Stone)
						{
							static auto StoneItemData = FindObjectFast<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/StoneItemData.StoneItemData");
							ItemDefinition = StoneItemData;
						}
						else if (BuildingActor->ResourceType == EFortResourceType::Metal)
						{
							static auto MetalItemData = FindObjectFast<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/MetalItemData.MetalItemData");
							ItemDefinition = MetalItemData;
						}

						if (ItemDefinition && BuildingActor->BuildingResourceAmountOverride.RowName.IsValid())
						{
							UCurveTable* CurveTable = FindObjectFast<UCurveTable>("/Game/Athena/Balance/DataTables/AthenaResourceRates.AthenaResourceRates");

							if (!CurveTable)
							{
								CurveTable = StaticLoadObject<UCurveTable>(L"/Game/Athena/Balance/DataTables/AthenaResourceRates.AthenaResourceRates");
							}

							if (CurveTable)
							{
								EEvaluateCurveTableResult OutResult;
								FString ContextString;
								float InXY = 0.f;
								float OutXY;

								Globals::GetFunctionLibrary()->EvaluateCurveTableRow(CurveTable, BuildingActor->BuildingResourceAmountOverride.RowName, InXY, &OutResult, &OutXY, ContextString);

								int PotentialResourceCount = OutXY / (BuildingActor->GetMaxHealth() / Params->Damage);
								int ResourceCount = round(PotentialResourceCount);

								if (ResourceCount > 0)
								{
									PlayerController->ClientReportDamagedResourceBuilding(BuildingActor, BuildingActor->ResourceType, PotentialResourceCount, false, (Params->Damage == 100.f));

									FGuid ItemGuid = Inventory::GetItemGuid(PlayerController, ItemDefinition);
									UFortWorldItem* ItemInstance = Inventory::GetItemInstance(PlayerController, ItemGuid);
									int CountToRemove = 0;

									if (ItemInstance)
									{
										int NewCount = ItemInstance->ItemEntry.Count + ResourceCount;

										if (NewCount > ItemDefinition->MaxStackSize)
										{
											CountToRemove = NewCount - ItemDefinition->MaxStackSize;
											NewCount = ItemDefinition->MaxStackSize;
										}

										Inventory::ModifyCountItem(PlayerController, ItemGuid, NewCount);
									}
									else
									{
										Inventory::AddInventoryItem(PlayerController, ItemDefinition, ResourceCount);
									}

									if (CountToRemove > 0)
									{
										FFortItemEntry ItemEntry;
										ItemEntry.Count = CountToRemove;
										Inventory::SpawnItem(ItemDefinition, ItemEntry, (AFortPawn*)PlayerController->Pawn, PlayerController->Pawn->K2_GetActorLocation());
									}
								}
							}

							Inventory::UpdateInventory(PlayerController);
						}
					}
				}
			}
		}

		if (FuncName.contains("ServerCheat"))
		{
			auto Params = (Params::FortPlayerController_ServerCheat*)Parms;
			auto PlayerController = (AFortPlayerControllerAthena*)Object;

			if (PlayerController && Params->Msg.IsValid())
			{
				std::string Command = Params->Msg.ToString();
				std::vector<std::string> ParsedCommand = split(Command, ' ');
				AFortPawn* Pawn = (AFortPawn*)PlayerController->Pawn;

				if (!ParsedCommand.empty())
				{
					std::string Action = ParsedCommand[0];
					std::transform(Action.begin(), Action.end(), Action.begin(),
						[](unsigned char c) { return std::tolower(c); });

					FString Message = L"Unknown Command";

					if (Action == "giveweapon" && ParsedCommand.size() >= 3 && Pawn)
					{
						std::string WeaponName = ParsedCommand[1];

						bool bIsQuantityInt = std::all_of(ParsedCommand[2].begin(), ParsedCommand[2].end(), ::isdigit);

						if (bIsQuantityInt)
						{
							int Quantity = std::stoi(ParsedCommand[2]);

							UFortWorldItemDefinition* ItemDefinition = FindObjectFast<UFortWorldItemDefinition>("/Game/Athena/Items/Weapons/" + WeaponName + "." + WeaponName);

							if (ItemDefinition)
							{
								FFortBaseWeaponStats WeaponStats = Inventory::GetWeaponStats((UFortWeaponItemDefinition*)ItemDefinition);

								FFortItemEntry ItemEntry;
								ItemEntry.Count = Quantity;
								ItemEntry.LoadedAmmo = WeaponStats.ClipSize;

								HLog("ClipSize: " << WeaponStats.ClipSize);

								Inventory::SpawnItem(ItemDefinition, ItemEntry, Pawn, Pawn->K2_GetActorLocation());

								Message = L"Weapon Give!";
							}
							else
							{
								Message = L"The weapon does not exist";
							}
						}
					}
					else if (Action == "givetrap" && ParsedCommand.size() >= 3 && Pawn)
					{
						std::string TrapName = ParsedCommand[1];

						bool bIsQuantityInt = std::all_of(ParsedCommand[2].begin(), ParsedCommand[2].end(), ::isdigit);

						if (bIsQuantityInt)
						{
							int Quantity = std::stoi(ParsedCommand[2]);

							UFortWorldItemDefinition* ItemDefinition = FindObjectFast<UFortWorldItemDefinition>("/Game/Athena/Items/Traps/" + TrapName + "." + TrapName);

							if (ItemDefinition)
							{
								FFortItemEntry ItemEntry;
								ItemEntry.Count = Quantity;

								Inventory::SpawnItem(ItemDefinition, ItemEntry, Pawn, Pawn->K2_GetActorLocation());

								Message = L"Trap Give!";
							}
							else
							{
								Message = L"The trap does not exist";
							}
						}
					}
					else if (Action == "giveitem" && ParsedCommand.size() >= 3 && Pawn)
					{
						std::string Item = ParsedCommand[1];

						bool bIsQuantityInt = std::all_of(ParsedCommand[2].begin(), ParsedCommand[2].end(), ::isdigit);

						if (bIsQuantityInt)
						{
							int Quantity = std::stoi(ParsedCommand[2]);

							UFortWorldItemDefinition* ItemDefinition = FindObjectFast<UFortWorldItemDefinition>("/Game/" + Item);

							if (ItemDefinition)
							{
								FFortBaseWeaponStats WeaponStats = Inventory::GetWeaponStats((UFortWeaponItemDefinition*)ItemDefinition);

								FFortItemEntry ItemEntry;
								ItemEntry.Count = Quantity;
								ItemEntry.LoadedAmmo = WeaponStats.ClipSize;

								HLog("ClipSize: " << WeaponStats.ClipSize);

								Inventory::SpawnItem(ItemDefinition, ItemEntry, Pawn, Pawn->K2_GetActorLocation());

								Message = L"Item Give!";
							}
							else
							{
								Message = L"The item does not exist";
							}
						}
					}
					else if (Action == "spawnloot" && ParsedCommand.size() >= 2 && Pawn)
					{
						std::string TypeLoot = ParsedCommand[1];


					}

					PlayerController->ClientMessage(Message, FName(), 1);
				}
			}
		}

		if (FuncName.contains("ServerHandlePickup"))
		{
			auto Params = (Params::FortPlayerPawn_ServerHandlePickup*)Parms;
			AFortPlayerPawn* Pawn = (AFortPlayerPawn*)Object;
			AFortPickup* Pickup = Params->Pickup;

			if (Pickup)
			{
				if (!Pawn || Pickup->bPickedUp)
					return ProcessEvent(Object, Function, Parms);

				Pawn->IncomingPickups.Add(Pickup);

				FFortPickupLocationData* PickupLocationData = &Pickup->PickupLocationData;

				PickupLocationData->ItemOwner = Pawn;
				PickupLocationData->PickupTarget = Pawn;
				PickupLocationData->FlyTime = Globals::GetMathLibrary()->RandomFloatInRange(0.40f, 0.47f);
				PickupLocationData->PickupGuid = Pickup->PrimaryPickupItemEntry.ItemGuid;
				Pickup->OnRep_PickupLocationData();

				Pickup->bPickedUp = true;
				Pickup->OnRep_bPickedUp();
			}
		}

		if (FuncName.contains("ServerCreateBuildingActor"))
		{
			auto Params = (Params::FortPlayerController_ServerCreateBuildingActor*)Parms;
			auto PlayerController = (AFortPlayerController*)Object;

			if (PlayerController && PlayerController->Pawn)
			{
				AFortPawn* Pawn = (AFortPawn*)PlayerController->Pawn;

				if (Pawn)
				{
					AFortInventory* WorldInventory = PlayerController->WorldInventory;
					TSubclassOf<ABuildingActor> BuildingClass = Params->BuildingClassData.BuildingClass;

					const FVector_NetQuantize10& BuildLocation = Params->BuildLoc;
					const FRotator& BuildRotation = Params->BuildRot;

					if (WorldInventory)
					{
						TArray<ABuildingSMActor*> BuildingsToBeDestroyed;
						bool bCantBuild = ToHooks::CantBuild(Globals::GetWorld(), BuildingClass, BuildLocation, BuildRotation, Params->bMirrored, &BuildingsToBeDestroyed);

						if (bCantBuild)
							return ProcessEvent(Object, Function, Parms);

						ABuildingSMActor* BuildingActor = Util::SpawnActor<ABuildingSMActor>(BuildingClass, BuildLocation, BuildRotation);

						if (BuildingActor)
						{
							UFortResourceItemDefinition* ItemDefinition = nullptr;

							if (BuildingActor->ResourceType == EFortResourceType::Wood)
							{
								static auto WoodItemData = FindObjectFast<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/WoodItemData.WoodItemData");
								ItemDefinition = WoodItemData;
							}
							else if (BuildingActor->ResourceType == EFortResourceType::Stone)
							{
								static auto StoneItemData = FindObjectFast<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/StoneItemData.StoneItemData");
								ItemDefinition = StoneItemData;
							}
							else if (BuildingActor->ResourceType == EFortResourceType::Metal)
							{
								static auto MetalItemData = FindObjectFast<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/MetalItemData.MetalItemData");
								ItemDefinition = MetalItemData;
							}

							FGuid ItemGuid = Inventory::GetItemGuid(PlayerController, ItemDefinition);
							UFortWorldItem* ItemInstance = Inventory::GetItemInstance(PlayerController, ItemGuid);

							if (ItemInstance)
							{
								if (ItemInstance->ItemEntry.Count <= 0)
								{
									BuildingActor->K2_DestroyActor();
									BuildingActor->ReceiveDestroyed();
									return;
								}

								int NewCount = ItemInstance->ItemEntry.Count - 10;

								if (NewCount > 0)
								{
									Inventory::ModifyCountItem(PlayerController, ItemInstance->GetItemGuid(), NewCount);
								}
								else
								{
									Inventory::RemoveItemFromInventory(PlayerController, ItemInstance->GetItemGuid());
								}

								Inventory::UpdateInventory(PlayerController);
							}

							for (int i = 0; i < BuildingsToBeDestroyed.Num(); i++)
							{
								ABuildingSMActor* BuildingToBeDestroyed = BuildingsToBeDestroyed[i];
								if (!BuildingToBeDestroyed) continue;

								BuildingToBeDestroyed->K2_DestroyActor();
								BuildingToBeDestroyed->ReceiveDestroyed();
							}

							BuildingActor->InitializeKismetSpawnedBuildingActor(BuildingActor, PlayerController);
						}
					}
				}
			}
		}

		if (FuncName.contains("ServerBeginEditingBuildingActor"))
		{
			auto Params = (Params::FortPlayerController_ServerBeginEditingBuildingActor*)Parms;
			auto PlayerController = (AFortPlayerController*)Object;

			static auto EditToolDefinition = FindObjectFast<UFortWeaponItemDefinition>("/Game/Items/Weapons/BuildingTools/EditTool.EditTool");

			if (!EditToolDefinition || !PlayerController || !PlayerController->Pawn)
				return ProcessEvent(Object, Function, Parms);

			AFortPawn* Pawn = (AFortPawn*)PlayerController->Pawn;
			FGuid ItemGuid = Inventory::GetItemGuid(PlayerController, EditToolDefinition);

			Pawn->EquipWeaponDefinition(EditToolDefinition, ItemGuid);

			AFortWeap_EditingTool* EditTool = (AFortWeap_EditingTool*)Pawn->CurrentWeapon;

			if (EditTool && Params->BuildingActorToEdit)
			{
				EditTool->EditActor = Params->BuildingActorToEdit;
				EditTool->OnRep_EditActor();
			}
		}

		if (FuncName.contains("ServerEditBuildingActor"))
		{
			auto Params = (Params::FortPlayerController_ServerEditBuildingActor*)Parms;
			auto PlayerController = (AFortPlayerController*)Object;

			ABuildingSMActor* BuildingActorToEdit = Params->BuildingActorToEdit;
			TSubclassOf<ABuildingSMActor> NewBuildingClass = Params->NewBuildingClass;

			if (!BuildingActorToEdit || !NewBuildingClass)
				return ProcessEvent(Object, Function, Parms);

			ToHooks::ReplaceBuildingActor(BuildingActorToEdit, 1, NewBuildingClass, BuildingActorToEdit->CurrentBuildingLevel, Params->RotationIterations, Params->bMirrored, PlayerController);
		}

		if (FuncName.contains("ServerEndEditingBuildingActor"))
		{
			auto Params = (Params::FortPlayerController_ServerEndEditingBuildingActor*)Parms;
			auto PlayerController = (AFortPlayerController*)Object;

			static auto EditToolDefinition = FindObjectFast<UFortWeaponItemDefinition>("/Game/Items/Weapons/BuildingTools/EditTool.EditTool");

			if (!EditToolDefinition || !PlayerController || !PlayerController->Pawn)
				return ProcessEvent(Object, Function, Parms);

			AFortPawn* Pawn = (AFortPawn*)PlayerController->Pawn;
			AFortWeap_EditingTool* EditTool = (AFortWeap_EditingTool*)Pawn->CurrentWeapon;

			if (EditTool && Params->BuildingActorToStopEditing)
			{
				EditTool->EditActor = nullptr;
				EditTool->OnRep_EditActor();
			}
		}

		if (FuncName.contains("OnBuildingActorInitialized"))
		{
			auto Params = (Params::BuildingActor_OnBuildingActorInitialized*)Parms;
			auto Building = (ABuildingActor*)Object;

			if (Building && Building->IsA(ABuildingSMActor::StaticClass()))
			{
				ABuildingSMActor* BuildingActor = (ABuildingSMActor*)Building;
				AFortPlayerController* PlayerController = (AFortPlayerController*)BuildingActor->GetOwningController();

				if (PlayerController)
				{
					AFortPlayerStateAthena* PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;

					if (PlayerState)
					{
						BuildingActor->bPlayerPlaced = true;
						BuildingActor->Team = PlayerState->TeamIndex;
					}
				}
			}
		}

		if (FuncName.contains("ServerReturnToMainMenu"))
		{
			AFortPlayerController* PlayerController = (AFortPlayerController*)Object;

			if (PlayerController)
				PlayerController->ClientTravel(L"/Game/Maps/Frontend", ETravelType::TRAVEL_Absolute, false, FGuid());
		}

		if (FuncName.contains("ServerAttemptInteract"))
		{
			auto Params = (Params::FortPlayerController_ServerAttemptInteract*)Parms;
			AFortPlayerController* PlayerController = (AFortPlayerController*)Object;

			if (PlayerController && Params->ReceivingActor && Params->ReceivingActor->IsA(ABuildingContainer::StaticClass()))
			{
				ABuildingContainer* BuildingActor = (ABuildingContainer*)Params->ReceivingActor;

				if (!BuildingActor)
					return ProcessEvent(Object, Function, Parms);

				if (!BuildingActor->bAlreadySearched)
				{
					UDataTable* AthenaLootPackages_Client = FindObjectFast<UDataTable>("/Game/Items/Datatables/AthenaLootPackages_Client.AthenaLootPackages_Client");
					UDataTable* AthenaLootTierData_Client = FindObjectFast<UDataTable>("/Game/Items/Datatables/AthenaLootTierData_Client.AthenaLootTierData_Client");

					if (!AthenaLootPackages_Client || !AthenaLootTierData_Client)
					{
						AthenaLootPackages_Client = StaticLoadObject<UDataTable>(L"/Game/Items/Datatables/AthenaLootPackages_Client.AthenaLootPackages_Client");
						AthenaLootTierData_Client = StaticLoadObject<UDataTable>(L"/Game/Items/Datatables/AthenaLootTierData_Client.AthenaLootTierData_Client");
					}

					TArray<FFortItemEntry> OutLootToDrop;

					Globals::GetKismetLibrary()->PickLootDrops(&OutLootToDrop, Globals::GetStringLibrary()->Conv_StringToName(L"Loot_Treasure"), Globals::GetGameState()->WorldLevel, BuildingActor->GetLootTier());

					HLog("OutLootToDrop.Num(): " << OutLootToDrop.Num());

					/*for (int i = 0; i < OutLootToDrop.Num(); i++)
					{
						FFortItemEntry ItemEntry = OutLootToDrop[i];

						if (ItemEntry.ItemDefinition)
							HLog("ItemDefinition: " << ItemEntry.ItemDefinition->GetName());

						HLog("Count: " << ItemEntry.Count);
					}*/

					BuildingActor->bAlreadySearched = true;
					BuildingActor->OnRep_bAlreadySearched();
					BuildingActor->ForceNetUpdate();
				}
				else
				{
					BuildingActor->BounceContainer();
					BuildingActor->ForceNetUpdate();
				}
			}
		}

		return ProcessEvent(Object, Function, Parms);
	}

	void InitHooks()
	{
		START_DETOUR;
		DetourAttach(ProcessEvent, ProcessEventHook);
		DetourAttach(ToHooks::GetNetMode, GetNetModeHook);
		DetourAttach(ToHooks::KickPlayer, KickPlayerHook);
		DetourAttach(ToHooks::PickupDelay, PickupDelayHook);
		DetourAttach(ToHooks::DispatchRequest, DispatchRequestHook);
		DetourAttach(ToHooks::LocalSpawnPlayActor, LocalSpawnPlayActorHook);
		END_DETOUR;

		HLog("InitDetour Success !");
	}
}
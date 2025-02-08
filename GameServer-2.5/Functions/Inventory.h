#pragma once

#include "../util.h"

namespace Inventory
{
	void (*PickupInitialize)(AFortPickup* Pickup, FFortItemEntry ItemEntry, TArray<FFortItemEntry> MultiItemPickupEntries, bool bSplitOnPickup);
	__int64 (*FreeEntry)(FFortItemEntry* ItemEntry);

	void UpdateInventory(AFortPlayerController* PlayerController)
	{
		AFortInventory* WorldInventory = PlayerController->WorldInventory;

		if (WorldInventory)
		{
			WorldInventory->HandleInventoryLocalUpdate();
			WorldInventory->Inventory.MarkArrayDirty();
		}
	}

	FFortBaseWeaponStats GetWeaponStats(UFortWeaponItemDefinition* ItemDefinition)
	{
		FFortBaseWeaponStats WeaponStats;
		Globals::GetKismetLibrary()->GetWeaponStatsRow(ItemDefinition->WeaponStatHandle, &WeaponStats);

		return WeaponStats;
	}

	AFortPickupAthena* SpawnItem(UFortItemDefinition* ItemDefinition, FFortItemEntry ItemEntry, AFortPawn* Pawn, FVector Location)
	{
		AFortPickupAthena* FortPickup = Util::SpawnActor<AFortPickupAthena>(AFortPickupAthena::StaticClass(), Location, FRotator());

		if (Pawn)
			FortPickup->PawnWhoDroppedPickup = Pawn;

		FFortItemEntry* PrimaryPickupItemEntry = &FortPickup->PrimaryPickupItemEntry;
		PrimaryPickupItemEntry->ItemDefinition = ItemDefinition;
		PrimaryPickupItemEntry->Count = ItemEntry.Count;

		FortPickup->TossPickup(Location, Pawn, 0, true);

		return FortPickup;
	}

	UFortWorldItem* GetItemStackable(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDefinition)
	{
		AFortInventory* WorldInventory = PlayerController->WorldInventory;

		for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			UFortWorldItem* ItemInstance = WorldInventory->Inventory.ItemInstances[i];
			if (!ItemInstance) continue;

			if (ItemInstance->GetItemDefinitionBP() == ItemDefinition)
			{
				if (ItemInstance->ItemEntry.Count >= ItemDefinition->MaxStackSize)
					continue;

				return ItemInstance;
			}
		}

		return nullptr;
	}

	static int GetSlotForBuildingTools(UFortItemDefinition* ItemDefinition)
	{
		if (UFortBuildingItemDefinition::StaticClass())
		{
			static auto WallBuildDefinition = FindObjectFast<UFortBuildingItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Wall.BuildingItemData_Wall");
			static auto FloorBuildDefinition = FindObjectFast<UFortBuildingItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Floor.BuildingItemData_Floor");
			static auto StairBuildDefinition = FindObjectFast<UFortBuildingItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Stair_W.BuildingItemData_Stair_W");
			static auto RoofBuildDefinition = FindObjectFast<UFortBuildingItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_RoofS.BuildingItemData_RoofS");

			if (WallBuildDefinition == ItemDefinition)
				return 0;
			else if (FloorBuildDefinition == ItemDefinition)
				return 1;
			else if (StairBuildDefinition == ItemDefinition)
				return 2;
			else if (RoofBuildDefinition == ItemDefinition)
				return 3;
		}

		return -1;
	}

	static bool IsNeedToAddQuickbar(UFortItemDefinition* ItemDefinition)
	{
		static const std::vector<UClass*> DontNeedToAddItemClasses = {
			UFortEditToolItemDefinition::StaticClass(), // Edit Tool
			UFortAmmoItemDefinition::StaticClass(), // Ammo
			UFortResourceItemDefinition::StaticClass(), // Resource
		};

		for (auto& DontNeedToAddItemClasse : DontNeedToAddItemClasses)
		{
			if (ItemDefinition->IsA(DontNeedToAddItemClasse))
				return false;
		}

		return true;
	}

	static EFortQuickBars GetFortQuickBars(UFortItemDefinition* ItemDefinition)
	{
		static const std::vector<UClass*> NonPrimaryItemClasses = {
			UFortEditToolItemDefinition::StaticClass(), // Edit Tool
			UFortBuildingItemDefinition::StaticClass(), // Building Tool
			UFortAmmoItemDefinition::StaticClass(), // Ammo
			UFortResourceItemDefinition::StaticClass(), // Resource 
			UFortTrapItemDefinition::StaticClass(), // Trap
		};

		for (auto& NonPrimaryClass : NonPrimaryItemClasses) 
		{
			if (ItemDefinition->IsA(NonPrimaryClass))
				return EFortQuickBars::Secondary;
		}

		return EFortQuickBars::Primary;
	}

	int GetAvailableSlotQuickbar(AFortPlayerController* PlayerController, EFortQuickBars FortQuickBars, int MaxSlots = 6)
	{
		AFortQuickBars* QuickBars = PlayerController->QuickBars;
		int Slot = -1;

		if (QuickBars)
		{
			auto QuickBar = (FortQuickBars == EFortQuickBars::Primary) ? QuickBars->PrimaryQuickBar : QuickBars->SecondaryQuickBar;

			for (int i = 0; i < QuickBar.Slots.Num(); i++)
			{
				FQuickBarSlot Slots = QuickBar.Slots[i];
				if (i >= MaxSlots) break;
				if (Slots.Items.IsValidIndex(0)) continue;

				Slot = i;
				break;
			}
		}

		return Slot;
	}

	UFortWorldItem* GetItemInstance(AFortPlayerController* PlayerController, FGuid Guid, bool bVerifMaxStackSize = false)
	{
		AFortInventory* WorldInventory = PlayerController->WorldInventory;

		for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			UFortWorldItem* ItemInstance = WorldInventory->Inventory.ItemInstances[i];
			if (!ItemInstance) continue;

			if (ItemInstance->GetItemGuid() == Guid)
			{
				UFortItemDefinition* ItemDefinition = ItemInstance->GetItemDefinitionBP();

				if (ItemDefinition && ItemInstance->ItemEntry.Count >= ItemDefinition->MaxStackSize && bVerifMaxStackSize)
					continue;

				return ItemInstance;
			}
		}

		return nullptr;
	}

	FGuid GetItemGuid(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDefinition, bool bVerifMaxStackSize = false)
	{
		AFortInventory* WorldInventory = PlayerController->WorldInventory;

		for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			UFortWorldItem* ItemInstance = WorldInventory->Inventory.ItemInstances[i];
			if (!ItemInstance) continue;

			if (ItemInstance->GetItemDefinitionBP() == ItemDefinition)
			{
				if (ItemInstance->ItemEntry.Count >= ItemDefinition->MaxStackSize && bVerifMaxStackSize)
					continue;

				return ItemInstance->GetItemGuid();
			}
		}

		return FGuid();
	}

	UFortWorldItem* GetItemSlot(AFortPlayerController* PlayerController, int Slot, EFortQuickBars FortQuickBars)
	{
		AFortQuickBars* QuickBars = PlayerController->QuickBars;

		if (QuickBars)
		{
			auto QuickBar = (FortQuickBars == EFortQuickBars::Primary) ? QuickBars->PrimaryQuickBar : QuickBars->SecondaryQuickBar;
			FQuickBarSlot Slots = QuickBar.Slots[Slot];

			if (Slot < 6 && Slots.Items.IsValidIndex(0))
				return GetItemInstance(PlayerController, Slots.Items[0]);
		}

		return nullptr;
	}

	UFortWorldItem* AddInventoryItem(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDefinition, int Count, bool bUseItemEntry = false, FFortItemEntry ItemEntry = FFortItemEntry())
	{
		AFortInventory* WorldInventory = PlayerController->WorldInventory;
		AFortQuickBars* QuickBars = PlayerController->QuickBars;

		if (WorldInventory && QuickBars && Count > 0)
		{
			UFortWorldItem* WorldItem = (UFortWorldItem*)ItemDefinition->CreateTemporaryItemInstanceBP(Count, 0);

			if (WorldItem)
			{
				if (bUseItemEntry)
					WorldItem->ItemEntry = ItemEntry;

				WorldItem->ItemEntry.Count = Count;
				WorldInventory->Inventory.ReplicatedEntries.Add(WorldItem->ItemEntry);
				WorldInventory->Inventory.ItemInstances.Add(WorldItem);

				WorldInventory->Inventory.MarkItemDirty(WorldItem->ItemEntry);

				EFortQuickBars FortQuickBars = GetFortQuickBars(ItemDefinition);
				int AvailableSlot = GetAvailableSlotQuickbar(PlayerController, FortQuickBars);

				if (ItemDefinition->IsA(UFortWeaponMeleeItemDefinition::StaticClass())) // Pickaxe
				{
					QuickBars->ServerAddItemInternal(WorldItem->GetItemGuid(), EFortQuickBars::Primary, 0);
					return WorldItem;
				}

				if (ItemDefinition->IsA(UFortBuildingItemDefinition::StaticClass())) // Building Tool
				{
					QuickBars->ServerAddItemInternal(WorldItem->GetItemGuid(), FortQuickBars, GetSlotForBuildingTools(ItemDefinition));
					return WorldItem;
				}

				return WorldItem;
			}
		}

		return nullptr;
	}

	bool AddQuickBarItem(AFortPlayerController* PlayerController, FGuid Guid, int Slot, EFortQuickBars FortQuickBars)
	{
		UFortWorldItem* ItemInstance = GetItemInstance(PlayerController, Guid);
		AFortQuickBars* QuickBars = PlayerController->QuickBars;

		if (ItemInstance && QuickBars)
		{
			QuickBars->ServerAddItemInternal(ItemInstance->GetItemGuid(), FortQuickBars, Slot);

			return true;
		}

		return false;
	}

	void SetupInventory(AFortPlayerController* PlayerController, UFortWeaponMeleeItemDefinition* PickaxeDefinition)
	{
		AFortInventory* WorldInventory = PlayerController->WorldInventory;
		AFortGameModeAthena* GameMode = Globals::GetGameMode();

		if (WorldInventory && GameMode)
		{
			TArray<FItemAndCount> StartingItems = GameMode->StartingItems;

			for (int i = 0; i < StartingItems.Num(); i++)
			{
				FItemAndCount StartingItem = StartingItems[i];

				AddInventoryItem(PlayerController, StartingItem.Item, StartingItem.Count);
			}

			if (PickaxeDefinition)
				AddInventoryItem(PlayerController, PickaxeDefinition, 1);

			UpdateInventory(PlayerController);
		}
	}

	void RemoveItemFromInventory(AFortPlayerController* PlayerController, FGuid Guid)
	{
		AFortInventory* WorldInventory = PlayerController->WorldInventory;

		for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			UFortWorldItem* ItemInstance = WorldInventory->Inventory.ItemInstances[i];
			if (!ItemInstance) continue;

			if (ItemInstance->GetItemGuid() != Guid)
				continue;

			WorldInventory->Inventory.ItemInstances.Remove(i);

			for (int j = 0; j < WorldInventory->Inventory.ReplicatedEntries.Num(); j++)
			{
				FFortItemEntry* ReplicatedEntry = &WorldInventory->Inventory.ReplicatedEntries[j];

				if (ReplicatedEntry->ItemGuid != Guid)
					continue;

				WorldInventory->Inventory.ReplicatedEntries.Remove(j);
			}
		}
	}

	bool RemoveItemFromQuickbar(AFortPlayerController* PlayerController, FGuid Guid, EFortQuickBars FortQuickBars = EFortQuickBars::Primary)
	{
		AFortQuickBars* QuickBars = PlayerController->QuickBars;

		if (QuickBars)
		{
			FQuickBar QuickBar = (FortQuickBars == EFortQuickBars::Primary) ? QuickBars->PrimaryQuickBar : QuickBars->SecondaryQuickBar;

			for (int i = 0; i < QuickBar.Slots.Num(); i++)
			{
				FQuickBarSlot Slots = QuickBar.Slots[i];
				if (i >= 6) break;

				if (Slots.Items.IsValidIndex(0))
				{
					if (Slots.Items[0] == Guid)
					{
						if (i >= 0)
							QuickBars->EmptySlot(FortQuickBars, i);

						return true;
					}
				}
			}
		}

		return false;
	}

	AFortPickupAthena* DropItemFromInventory(AFortPlayerController* PlayerController, FGuid Guid)
	{
		UFortWorldItem* ItemInstance = GetItemInstance(PlayerController, Guid);
		APawn* Pawn = PlayerController->Pawn;

		if (ItemInstance && Pawn)
		{
			UFortItemDefinition* ItemDefinition = ItemInstance->GetItemDefinitionBP();

			if (ItemDefinition)
			{
				AFortPickupAthena* FortPickup = SpawnItem(ItemDefinition, ItemInstance->ItemEntry, (AFortPawn*)Pawn, Pawn->K2_GetActorLocation());

				return FortPickup;
			}
		}

		return nullptr;
	}

	void RemoveAllItemsFromInventory(AFortPlayerController* PlayerController, bool bRemoveCantBeDropped = false)
	{
		AFortInventory* WorldInventory = PlayerController->WorldInventory;

		if (WorldInventory)
		{
			std::vector<FGuid> GuidToRemove;

			for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++)
			{
				UFortWorldItem* ItemInstance = WorldInventory->Inventory.ItemInstances[i];
				if (!ItemInstance) continue;

				FFortItemEntry ItemEntry = ItemInstance->ItemEntry;

				UFortWorldItemDefinition* ItemDefinition = (UFortWorldItemDefinition*)ItemInstance->GetItemDefinitionBP();
				if (!ItemDefinition) continue;

				if (!ItemDefinition->bCanBeDropped && !bRemoveCantBeDropped)
					continue;

				GuidToRemove.push_back(ItemEntry.ItemGuid);
			}

			for (FGuid& Guid : GuidToRemove)
			{
				RemoveItemFromQuickbar(PlayerController, Guid);
				RemoveItemFromInventory(PlayerController, Guid);
			}

			UpdateInventory(PlayerController);
		}
	}

	void ModifyCountItem(AFortPlayerController* PlayerController, FGuid Guid, int Count)
	{
		AFortInventory* WorldInventory = PlayerController->WorldInventory;

		for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			UFortWorldItem* ItemInstance = WorldInventory->Inventory.ItemInstances[i];
			if (!ItemInstance) continue;

			if (ItemInstance->GetItemGuid() != Guid)
				continue;

			FFortItemEntry* ItemEntry = &WorldInventory->Inventory.ItemInstances[i]->ItemEntry;

			ItemEntry->Count = Count;
			WorldInventory->Inventory.MarkItemDirty(*ItemEntry);

			for (int j = 0; j < WorldInventory->Inventory.ReplicatedEntries.Num(); j++)
			{
				FFortItemEntry* ReplicatedEntry = &WorldInventory->Inventory.ReplicatedEntries[j];
				if (ReplicatedEntry->ItemGuid != Guid) continue;

				ReplicatedEntry->Count = Count;
				WorldInventory->Inventory.MarkItemDirty(*ReplicatedEntry);
				break;
			}

			break;
		}
	}
}
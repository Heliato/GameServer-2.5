#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemManagementDetailsModeBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C
// 0x0028 (0x0428 - 0x0400)
class UItemManagementDetailsModeBox_C final  : public UFortItemDetailsModeActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(Transient, DuplicateTransient)
	class UHorizontalTabList_C*                   DetailPanelTabList;                                // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ItemSelected;                                      // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           NoSelectionDetailsBox;                             // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDateTime                              LastDesiredReadOnlyModeWIFE;                       // 0x0420(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemManagementDetailsModeBox(int32 EntryPoint, class FText Temp_text_Variable, TDelegate<void(EFortDialogResult Result, class FName ResultName)> K2Node_CreateDelegate_OutputDelegate, class FText Temp_text_Variable1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TDelegate<void(EFortCraftFailCause FailureCause)> K2Node_CreateDelegate_OutputDelegate1, TDelegate<void(EFortDialogResult Result, class FName ResultName)> K2Node_CreateDelegate_OutputDelegate12, EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable, EFortDialogResult Temp_byte_Variable, EFortCraftFailCause Temp_byte_Variable1, class FText Temp_text_Variable12, class FText Temp_text_Variable123, class FText Temp_text_Variable1234, class FText Temp_text_Variable12345, class FText Temp_text_Variable123456, class FText Temp_text_Variable1234567, class FText Temp_text_Variable12345678, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UFortItemDetailsHostPanel* K2Node_DynamicCast_AsFort_Item_Details_Host_Panel, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortItemDetailsHostPanel* K2Node_DynamicCast_AsFort_Item_Details_Host_Panel1, bool K2Node_DynamicCast_bSuccess1, bool Temp_bool_Variable, class FName K2Node_ComponentBoundEvent_TabId123, class UCommonButton* K2Node_ComponentBoundEvent_TabButton123, class FName K2Node_ComponentBoundEvent_TabId12, class UCommonButton* K2Node_ComponentBoundEvent_TabButton12, class FName K2Node_ComponentBoundEvent_TabId1, class UCommonButton* K2Node_ComponentBoundEvent_TabButton1, bool K2Node_SwitchEnum_CmpSuccess, class UMulchConfirmationItem_C* CallFunc_Create_ReturnValue, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, bool K2Node_Event_bUsingGamepad, class UFortItem* K2Node_CustomEvent_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, class FText K2Node_Select_Default, EFortDialogResult Temp_byte_Variable12, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class FName Temp_name_Variable1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName1, bool CallFunc_IsScreenWIFE_ReturnValue, EFortCraftFailCause K2Node_CustomEvent_FailureCause, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess12, class FText K2Node_Select1_Default, bool CallFunc_GuardActionForReadOnlyWIFE_Proceed, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1, bool CallFunc_IsValid_ReturnValue12);
	void HandleCraftItemFailed(EFortCraftFailCause FailureCause);
	void OnDestroyItem(class UFortItem* Item);
	void OnInputModeChanged(bool bUsingGamepad);
	void Construct();
	void OnDeactivated();
	void BndEvt__DetailPanelTabListMinusMSB_K2Node_ComponentBoundEvent_18_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void HandleConsumeItemProgressChangedBP();
	void BndEvt__DetailPanelTabListMinusOI_K2Node_ComponentBoundEvent_27_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void BndEvt__DetailPanelTabListMinusOP_K2Node_ComponentBoundEvent_15_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void BndEvt__DetailPanelTabListMinusOPI_K2Node_ComponentBoundEvent_4_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void OnActivated();
	void HandleDifferentItemToDetailSetBP();
	void BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void DialogResult_4190138B4388B0E2F8396BBD395808D5(EFortDialogResult Result, class FName ResultName);
	void DialogResult_475B18A9452A639A04116D83A8B1CC22(EFortDialogResult Result, class FName ResultName);
	void HandleBack(bool* Passthrough, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess);
	void HandleInspect(bool* Passthrough);
	void HandleCompare(bool* Passthrough, bool CallFunc_IsValid_ReturnValue);
	void HandleMulch(bool* Passthrough);
	void HandleSort(bool* Passthrough);
	void TrySetupInputHandling(bool CallFunc_IsSchematic_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FCommonInputActionHandlerData>& CallFunc_GetInputActions_InputActionDataRows, bool CallFunc_GetInputActions_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum1_CmpSuccess);
	void HandleConsumeItem(bool* Passthrough, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, class UBoostsRoot_C* CallFunc_Create_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123, class UFortConsumableAccountItem* K2Node_DynamicCast_AsFort_Consumable_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanActivateOnOthers_ReturnValue, bool CallFunc_CanActivateOnSelf_ReturnValue);
	void HandleCraft(bool* Passthrough, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess);
	void ShowSelection(bool CallFunc_IsValid_ReturnValue);
	void HandleDrop(bool* Passthrough);
	void RegisterDropOrDestroy(TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1);
	void RegisterCraft(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsFrontendCraftingEnabled_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue12, TDelegate<void(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved)> K2Node_CreateDelegate_OutputDelegate12, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate123, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterMulch(TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterRetire(TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterInspect(TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterBack(TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterSort(bool InGame, bool Temp_bool_Variable, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1, const struct FDataTableRowHandle& K2Node_Select_Default);
	void RegisterConsumeItem(TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterCompare(TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterTrack(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsInZone_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void HandleTrack(bool* Passthrough, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetSchematicPinned_ReturnValue, bool CallFunc_SetSchematicPinned_ReturnValue1, bool CallFunc_IsSchematicPinned_ReturnValue);
	void RegisterEquip(bool Temp_bool_Variable, EInputActionState Temp_byte_Variable, EInputActionState Temp_byte_Variable1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEquipAvailable_EquipAvailable, EInputActionState Temp_byte_Variable12, bool CallFunc_BooleanAND_ReturnValue, TDelegate<void(EFortQuickBars QuickbarIndex)> K2Node_CreateDelegate_OutputDelegate, EInputActionState K2Node_Select_Default, EInputActionState Temp_byte_Variable123, EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_IsSlotted_ReturnValue, bool Temp_bool_Variable1, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate12, EInputActionState K2Node_Select1_Default, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1);
	void HandleEquip(bool* Passthrough);
	void SetupDetailPanels(class FName CallFunc_GetActiveTab_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsSchematic_ReturnValue, bool CallFunc_SelectTabByID_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void RefreshConsumeAction(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortConsumableAccountItem* K2Node_DynamicCast_AsFort_Consumable_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanActivateOnSelf_ReturnValue, bool CallFunc_CanActivateOnOthers_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetItemVisualization();
	void SetTabStyling(class UObject* Object, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess);
	void RegisterInventoryInspect(bool Temp_bool_Variable, EInputActionState Temp_byte_Variable, EInputActionState Temp_byte_Variable1, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, EFortItemType CallFunc_GetType_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, bool CallFunc_EqualEqual_ByteByte_ReturnValue123, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue12, EInputActionState K2Node_Select_Default);
	void HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved);
	void HandleWorldItemsChanged();
	void RefreshCraftActions(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, EInputActionState Temp_byte_Variable, EInputActionState Temp_byte_Variable1, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, EInputActionState Temp_byte_Variable12, EInputActionState Temp_byte_Variable123, bool Temp_bool_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess1, EFortCraftFailCause CallFunc_CanCraftSchematic_FailCause, bool CallFunc_CanCraftSchematic_ReturnValue, EFortItemType CallFunc_GetSchematicResultType_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, EInputActionState K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue12, EInputActionState K2Node_Select1_Default);
	void RegisterCraftAndSlot(TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void HandleCraftAndSlot(bool* Passthrough, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess1);
	void RefreshMulchAction(bool Temp_bool_Variable, EInputActionState Temp_byte_Variable, EInputActionState Temp_byte_Variable1, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_CanItemBeMulched_OutRestrictionReason, bool CallFunc_CanItemBeMulched_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, EInputActionState K2Node_Select_Default);
	void RegisterLeaveInventory(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsInZone_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void HandleQuickbarContentsChanged(EFortQuickBars QuickbarIndex, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void RegisterInspectUpgrade(TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void RegisterTransferActions(TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate12, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate123, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate1234, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle12, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerDeployableBase* K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base, bool K2Node_DynamicCast_bSuccess, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12345, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue12, TDelegate<void(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved)> K2Node_CreateDelegate_OutputDelegate123456);
	void HandleTransfer(bool* Passthrough);
	void RefreshTransferActions(EInputActionState TransferState, class UFortWorldItem* Item, bool IsDeposit, EInputActionState Temp_byte_Variable, EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable, EInputActionState Temp_byte_Variable12, EInputActionState Temp_byte_Variable123, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable1, int32 CallFunc_GetNumItems_ReturnValue, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetMaxTransferCount_Count, EInputActionState K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, EInputActionState K2Node_Select1_Default);
	void UnbindEvents(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(EFortQuickBars QuickbarIndex)> K2Node_CreateDelegate_OutputDelegate1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12, class UFortInventoryContext* CallFunc_GetContext_ReturnValue12, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate123, class UFortInventoryContext* CallFunc_GetContext_ReturnValue123, TDelegate<void(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved)> K2Node_CreateDelegate_OutputDelegate1234);
	void HandleSwitchPanel(bool* Passthrough);
	void RefreshSwitchPanelAction(class UFortWorldItem* Item, bool IsDeposit, bool Temp_bool_Variable, EInputActionState Temp_byte_Variable, EInputActionState Temp_byte_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsSwitchPanelAvailable_ReturnValue, EInputActionState K2Node_Select_Default);
	void HandleWithdrawAll(bool* Passthrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerDeployableBase* K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base, bool K2Node_DynamicCast_bSuccess);
	void HandleDestroy(bool* Passthrough);
	void RegisterMore(TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_CanRequestPopupMenuForSelectedItem_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void HandleMore(bool* Pass_Through);
	void PreferReadOnlyWIFE(bool* ReadOnly, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsMatchmakingLocal_ReturnValue, bool CallFunc_AreProfilesAvailableToWIFE_ReturnValue, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsScreenWIFE_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, class UFortPartyContext* CallFunc_GetContext_ReturnValue12, EFortPartyMemberLocation CallFunc_GetLocalPartyMemberLocation_Location, bool CallFunc_GetLocalPartyMemberLocation_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue12);
	void UpdateReadOnlyWIFE(const struct FDateTime& CallFunc_UtcNow_ReturnValue, bool CallFunc_PreferReadOnlyWIFE_ReadOnly, const struct FDateTime& CallFunc_UtcNow_ReturnValue1, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, const struct FDateTime& CallFunc_Add_DateTimeTimespan_ReturnValue, bool CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsScreenWIFE_ReturnValue);
	void RefreshDestroyAction(class UFortWorldItem* Item, bool IsDeposit, bool Temp_bool_Variable, EInputActionState Temp_byte_Variable, EInputActionState Temp_byte_Variable1, EInputActionState K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemManagementDetailsModeBox_C">();
	}
	static class UItemManagementDetailsModeBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemManagementDetailsModeBox_C>();
	}
};

}


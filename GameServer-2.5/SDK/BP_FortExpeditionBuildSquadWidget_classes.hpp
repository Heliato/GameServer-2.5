#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortExpeditionBuildSquadWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C
// 0x02A8 (0x06C8 - 0x0420)
class UBP_FortExpeditionBuildSquadWidget_C final  : public UFortExpeditionBuildSquadWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(Transient, DuplicateTransient)
	class UBasicRatingWidget_C*                   BasicRatingWidget;                                 // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           BonusSet;                                          // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_FortExpeditionExpiresWidget_C*      BP_FortExpeditionExpiresWidget;                    // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    ChangeVehicleActionDisplay;                        // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_5;                                    // 0x0448(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_18;                                   // 0x0450(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_0;                            // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CostSlots;                                         // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ExpeditionDescription;                             // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ExpeditionDuration;                                // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ExpeditionName;                                    // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    InfoAction;                                        // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PreviewBuffArrow_Chance;                           // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PreviewBuffArrow_Rating;                           // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          RarityBorder;                                      // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           RequirementsSlots;                                 // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           RewardsSet;                                        // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasicRatingWidget_C*                   SquadRating;                                       // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                SuccessChance;                                     // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBoxBonuses;                                       // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VehicleImage;                                      // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       VehicleName;                                       // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UViewInfoButton_NoText_C*               ViewInfoButton_NoText;                             // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    BackInputAction;                                   // 0x04E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ChangeVehicleActon;                                // 0x04F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    SlotItemAction;                                    // 0x0508(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    CloseAction;                                       // 0x0518(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    StartExpeditionAction;                             // 0x0528(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FHomebaseSquad                         Current_Squad_Info;                                // 0x0538(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            NoVehicleBrush;                                    // 0x05C0(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 Expedition_Pick_Vehicle_Class;                     // 0x0638(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CancelInputActionName;                             // 0x0640(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectedSlot;                                      // 0x0648(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4093[0x4];                                     // 0x064C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInfoWindow_C*                          RewardInfoWindow;                                  // 0x0650(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDialogExternalLatentActionHandle  WaitingForDialogHandle;                            // 0x0658(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FLinearColor                           BuffColor;                                         // 0x065C(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DebuffColor;                                       // 0x066C(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4094[0x4];                                     // 0x067C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    PurchaseSlotAction;                                // 0x0680(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    InspectAction;                                     // 0x0690(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFortItem*                              InspectItem;                                       // 0x06A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ExpeditionSquadSlotsView_C*         CachedExpeditionSquadSlotsView;                    // 0x06A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USquadSlotItemPicker_C*                 CachedExpeditionSquadSlotPicker;                   // 0x06B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    SortPickerAction;                                  // 0x06B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_BP_FortExpeditionBuildSquadWidget(int32 EntryPoint, bool CallFunc_Handle_Close_Picker_Action_PassThrough, EFortDialogResult Temp_byte_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FName K2Node_CustomEvent_SquadId, bool CallFunc_StartExpedition_ReturnValue, class UFortItem* K2Node_ComponentBoundEvent_SelectedItem1, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction, TArray<struct FConfirmationDialogAction>& K2Node_MakeArray_Array, class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsExpeditionValidToStart_ReturnValue, class UFortItemTileView* CallFunc_Get_Picker_List_View_PickerTileView, class UFortItemTileView* CallFunc_Get_Picker_List_View_PickerTileView1, class UObject* CallFunc_Get_Selected_Item_ReturnValue, class FName Temp_name_Variable, bool CallFunc_SetSelectedItem_ReturnValue, bool Temp_bool_Variable, const struct FFortDialogExternalLatentActionHandle& Temp_struct_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UInfoWindow_C* CallFunc_Create_ReturnValue, EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, bool K2Node_CustomEvent_bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& K2Node_CustomEvent_WaitingDialogHandle, class FText CallFunc_GetText_ReturnValue, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_ItemDef, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<class UFortCardPackItemDefinition*>& CallFunc_GetAllRewards_OutRewards, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class UFortItem* K2Node_ComponentBoundEvent_SelectedItem, class FText CallFunc_Format_ReturnValue, int32 K2Node_ComponentBoundEvent_SquadSlotIndex, bool CallFunc_NotEqual_IntInt_ReturnValue, TDelegate<void(EFortDialogResult Result, class FName ResultName, bool bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle)> K2Node_CreateDelegate_OutputDelegate, EInputActionState CallFunc_Get_Slot_Item_State_ReturnValue, bool K2Node_CustomEvent_bUsingGamepad, EInputActionState CallFunc_Get_Slot_Item_State_ReturnValue1, TDelegate<void(bool bUsingGamepad)> K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_Handle_Back_PassThrough, EInputActionState CallFunc_Get_Purchase_Slot_State_ReturnValue, EInputActionState CallFunc_Get_Purchase_Slot_State_ReturnValue1, EInputActionState CallFunc_Get_Purchase_Slot_State_ReturnValue12, class UFortExpeditionItem* K2Node_Event_InItem, class UCommonUIContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortItem* CallFunc_GetSelectedItem_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_NotEqual_IntInt_ReturnValue1, class UBP_ExpeditionSquadSlotsView_C* K2Node_DynamicCast_AsBP_Expedition_Squad_Slots_View, bool K2Node_DynamicCast_bSuccess, class USquadSlotItemPicker_C* K2Node_DynamicCast_AsSquad_Slot_Item_Picker, bool K2Node_DynamicCast_bSuccess1);
	void OnRequestClosePicker();
	void BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_20_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void SetData(class UFortExpeditionItem* InItem);
	void Construct();
	void OnStartExpeditionCompleted();
	void OnGamepadStateChanged(bool bUsingGamepad);
	void BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_77_OnSquadSlotSelected__DelegateSignature(int32 SquadSlotIndex);
	void BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_45_OnSquadSlotOpened__DelegateSignature();
	void OnStartExpedition();
	void BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_20_OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem);
	void BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnRefreshBuildSquadWidget();
	void HACK_Select_Item_in_Picker();
	void OnActivated();
	void Destruct();
	void BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_9_OnSelectionCommitted__DelegateSignature(class UFortItem* SelectedItem);
	void HandleVechicleSelected(class FName SquadId);
	void DialogResult_B738291040F33B805332A7B633B3ACBD(EFortDialogResult Result, class FName ResultName, bool bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle);
	void Handle_Back(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Setup_Input_Action_Handlers(TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate1, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate12, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate123, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate1234, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate12345, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate123456);
	void Set_Name(class UFortItem* Param_Item, class FText CallFunc_GetDisplayName_ReturnValue);
	void Set_Description(class UFortItem* Param_Item, class FText CallFunc_GetDescription_ReturnValue);
	void Set_Rating(class UFortExpeditionItem* Param_Item, float CallFunc_GetTargetPowerLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void Refresh_Item_Data(class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsInSquad_ReturnValue, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_ItemDef);
	void Get_Expedition_Item_Definition(class UFortExpeditionItem* Param_Item, class UFortExpeditionItemDefinition** ItemDef, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortExpeditionItemDefinition* K2Node_DynamicCast_AsFort_Expedition_Item_Definition, bool K2Node_DynamicCast_bSuccess);
	void Set_Duration(class UFortExpeditionItemDefinition* ItemDef, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FTimespan& CallFunc_FromMinutes_ReturnValue, class FText CallFunc_GetTimespanAsText_ReturnValue, class FText CallFunc_Format_ReturnValue);
	void Set_Rarity(class UFortItem* Param_Item, EFortRarity CallFunc_GetRarity_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue);
	void Set_Rewards(class UFortExpeditionItemDefinition* ItemDef, TArray<class UFortCardPackItemDefinition*>& CallFunc_GetAllRewards_OutRewards, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UFortCardPackItemDefinition* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class URewardsListEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void Handle_Change_Vehicle(bool* Passthrough, TDelegate<void(class FName SquadId)> K2Node_CreateDelegate_OutputDelegate, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UBP_FortExpeditionPickVehicleWidget_C* K2Node_DynamicCast_AsBP_Fort_Expedition_Pick_Vehicle_Widget, bool K2Node_DynamicCast_bSuccess);
	void Refresh_Squad_Widgets(bool NewLocalVar_0, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, const struct FHomebaseSquad& CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad, bool CallFunc_TryGetHomebaseSquadData_ReturnValue, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue1, const struct FFortMultiSizeBrush& CallFunc_GetSquadIcon_ReturnValue);
	void Set_Vehicle_Name(struct FHomebaseSquad& HomebaseSquad);
	void Clear_Vehicle_Widgets();
	void Set_Remaining_Expiration_Time(class UFortExpeditionItem* Param_Item);
	void Set_Requirements(class UFortExpeditionItemDefinition* ItemDef, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetRequiredTags_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, const struct FFortTagUIData& CallFunc_GetUIDataForTag_OutData, bool CallFunc_GetUIDataForTag_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UIconAndNameWidget_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin);
	void Set_Expedition_Costs(class UFortExpeditionItemDefinition* ItemDef, int32 Temp_int_Array_Index_Variable, TArray<struct FItemAndCount>& CallFunc_GetExpeditionCosts_OutExpeditionCosts, const struct FItemAndCount& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UItemCountOverCost_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void Update_Squad_Slot_Pickers(int32 SelectedSquadIndex, bool CallFunc_IsSquadSlotLocked_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Update_Expedition_Power(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsInSquad_ReturnValue, float CallFunc_CalculateTotalPower_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue);
	void Set_Bonus_Criteria(class UFortExpeditionItem* Param_Item, TArray<class UFortItem*>& SlottedItems, const struct FGameplayTag& LoopCriteriaTag, int32 FoundIndex, const TArray<struct FGameplayTag>& MatchedCriteriaTags, int32 Temp_int_Array_Index_Variable, TArray<struct FGameplayTag>& CallFunc_GetMatchedCriteriaTags_OutMatchedCriteria, TArray<struct FFortCriteriaRequirementData>& CallFunc_GetBonusCriteriaBP_OutBonusCriteria, const struct FFortCriteriaRequirementData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UIconAndNameWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, int32 CallFunc_Array_Find_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, const struct FMargin& K2Node_MakeStruct_Margin, ESlateVisibility Temp_byte_Variable, const struct FSlateBrush& CallFunc_Get_Bonus_Display_Name_and_Brush_OutBrush_Brush_M, class FText CallFunc_Get_Bonus_Display_Name_and_Brush_OutDisplayName, const struct FLinearColor& CallFunc_Get_Bonus_Display_Name_and_Brush_OutRarityColor, ESlateVisibility Temp_byte_Variable1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
	void HACK_SetCursorToSquadSlotSlotted(int32 CallFunc_Get_Selected_Slot__SAFE__ReturnValue, int32 CallFunc_Get_Selected_Slot__SAFE__ReturnValue1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UExpeditionSquadSlotButton_C* K2Node_DynamicCast_AsExpedition_Squad_Slot_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_NameName_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Get_Picker_List_View(class UFortItemTileView** PickerTileView);
	class UObject* Get_Selected_Item(class UObject* SelectedItem, class UFortItem* CallFunc_Get_Item_In_Selected_Squad_Slot_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue);
	void Try_to_Auto_Select_First_Vehicle(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_ItemDef, const struct FGameplayTagContainer& CallFunc_GetRequiredTags_ReturnValue, TArray<class FName>& CallFunc_GetExpeditionSquadsThatMatchRequirements_OutExpeditionSquadIds, bool CallFunc_GetExpeditionSquadsThatMatchRequirements_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsSquadOnExpedition_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void Handle_Expedition_Expired(const struct FDateTime& CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow, bool CallFunc_Handle_Back_with_Squad_Clear_PassThrough, bool CallFunc_HasExpeditionExpired_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Update_Start_Expedition_Widget_State(bool Temp_bool_Variable, EInputActionState Temp_byte_Variable, EInputActionState Temp_byte_Variable1, bool CallFunc_IsExpeditionValidToStart_ReturnValue, EInputActionState K2Node_Select_Default);
	void Handle_Slot_Item_Action(bool* Passthrough, bool CallFunc_TryCommitSelectedItem_ReturnValue);
	void Handle_Close_Picker_Action(bool* Passthrough, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsInSquad_ReturnValue);
	void Handle_Selected_Item_Committed(class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsInSquad_ReturnValue);
	void Handle_Squad_Slot_Selected(const struct FSquadSlotSortTypes& CallFunc_TryGetSelectedSquadSlotSortTypes_OutSlotSortTypes, bool CallFunc_TryGetSelectedSquadSlotSortTypes_ReturnValue, EInputActionState CallFunc_Get_Slot_Item_State_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void Handle_Squad_Picker_Closed(bool Temp_bool_Variable, EInputActionState Temp_byte_Variable, EInputActionState Temp_byte_Variable1, EInputActionState CallFunc_Get_Purchase_Slot_State_ReturnValue, bool CallFunc_IsExpeditionValidToStart_ReturnValue, EInputActionState K2Node_Select_Default);
	void Handle_Start_Expedition(bool* Passthrough);
	void Handle_Open_Picker(bool* Passthrough);
	void Update_Vehicle_Selected(class FName Param_CurrentSquadId, int32 CallFunc_Get_Selected_Slot__SAFE__ReturnValue, int32 CallFunc_Get_Selected_Slot__SAFE__ReturnValue1, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Handle_Close_Picker_Action_PassThrough, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	EInputActionState Get_Slot_Item_State(bool Temp_bool_Variable, EInputActionState Temp_byte_Variable, EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable1, EInputActionState Temp_byte_Variable12, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UFortItem* CallFunc_GetSelectedItem_ReturnValue, bool CallFunc_CanItemBeComitted_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, EInputActionState K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, EInputActionState K2Node_Select1_Default);
	void Handle_Back_with_Squad_Clear(bool* Passthrough, bool CallFunc_Handle_Back_PassThrough);
	void Update_For_Preview(class UFortItem* Param_Item, TArray<class UFortItem*>& CallFunc_Update_Power_and_Rating_for_Preview_SlottedItems1);
	void Determine_Preview_State(float Preview, float Current, EFortBuffState* State, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void Update_Power_and_Rating_for_Preview(class UFortItem* Param_Item, TArray<class UFortItem*>* SlottedItems1, class UFortItem* NullItem, const TArray<class UFortItem*>& SlottedItems, float PreviewRating, float PreviewChance, float CurrentRating, float CurrentChance, class UFortItem* CurrentItem, EFortBuffState CallFunc_Determine_Preview_State_State, class UClass* CallFunc_Determine_Text_Style_from_Preview_State_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_FFloor_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, EFortBuffState CallFunc_Determine_Preview_State_State1, class UClass* CallFunc_Determine_Text_Style_from_Preview_State_ReturnValue1, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_CalculateTotalPower_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsInSquad_ReturnValue, float CallFunc_Get_Current_Rating_CurrentNumericValue);
	class UClass* Determine_Text_Style_from_Preview_State(EFortBuffState Param_Index, EFortBuffState Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UClass* Temp_class_Variable12, class UClass* K2Node_Select_Default);
	ESlateVisibility Determine_Buff_Arrow_Visiblity_From_Preview_State(EFortBuffState Param_Index, EFortBuffState Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, ESlateVisibility Temp_byte_Variable12, ESlateVisibility Temp_byte_Variable123, ESlateVisibility K2Node_Select_Default);
	void Update_Rating_Buff_Arrow_for_Preview(EFortBuffState Param_Index, float CallFunc_Determine_Buff_Arrow_Angle_for_Preview_State_ReturnValue, const struct FLinearColor& CallFunc_Determine_Buff_Arrow_Color_for_Preview_State_ReturnValue, ESlateVisibility CallFunc_Determine_Buff_Arrow_Visiblity_From_Preview_State_ReturnValue);
	void Update_Chance_Buff_Arrow_for_Preview(EFortBuffState Param_Index, float CallFunc_Determine_Buff_Arrow_Angle_for_Preview_State_ReturnValue, const struct FLinearColor& CallFunc_Determine_Buff_Arrow_Color_for_Preview_State_ReturnValue, ESlateVisibility CallFunc_Determine_Buff_Arrow_Visiblity_From_Preview_State_ReturnValue);
	struct FLinearColor Determine_Buff_Arrow_Color_for_Preview_State(EFortBuffState Param_Index, EFortBuffState Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& K2Node_Select_Default);
	float Determine_Buff_Arrow_Angle_for_Preview_State(EFortBuffState Param_Index, EFortBuffState Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable1, float Temp_float_Variable12, float K2Node_Select_Default);
	void Handle_Purchase_Slot(bool* Passthrough, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsSquadSlotLocked_ReturnValue, class FName CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	EInputActionState Get_Purchase_Slot_State(bool Temp_bool_Variable, EInputActionState Temp_byte_Variable, EInputActionState Temp_byte_Variable1, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsSquadSlotLocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue12, EInputActionState K2Node_Select_Default);
	int32 Get_Selected_Slot__SAFE_(int32 CallFunc_Max_ReturnValue);
	void Handle_Inspect(bool* Passthrough, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Determine_Inspect_Item_for_Squad_Slot(class UFortItem* CallFunc_Get_Item_In_Selected_Squad_Slot_ReturnValue);
	void HACK_SetCursorToSquadPicker(bool CallFunc_NotEqual_NameName_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	class UFortItem* Get_Item_In_Selected_Squad_Slot(class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, int32 CallFunc_Get_Selected_Slot__SAFE__ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UExpeditionSquadSlotButton_C* K2Node_DynamicCast_AsExpedition_Squad_Slot_Button, bool K2Node_DynamicCast_bSuccess, class UFortItem* CallFunc_GetItemInSquadSlotBP_ReturnValue);
	void Get_Bonus_Display_Name_and_Brush(struct FGameplayTag& Tag, bool Condition, EFortRarity Rarity, struct FSlateBrush* OutBrush_Brush_M, class FText* OutDisplayName, struct FLinearColor* OutRarityColor, const struct FLinearColor& RarityColor, const struct FSlateBrush& TagBrush, class FText DisplayName, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GetDisplayNameAndMultiBrushForTag_OutDisplayName, const struct FFortMultiSizeBrush& CallFunc_GetDisplayNameAndMultiBrushForTag_OutBrush, bool CallFunc_GetDisplayNameAndMultiBrushForTag_ReturnValue);
	class UWidget* GetSquadRatingTooltipWidget(class UCommonUIContext* CallFunc_GetContext_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsUsingGamepad_ReturnValue, class FText CallFunc_Format_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	class UWidget* GetSuccessChanceTooltipWidget(class FText Temp_text_Variable, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void Get_Mcp_Relative_Utc_Now(struct FDateTime* UtcNow, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FDateTime& CallFunc_GetMcpRelativeUtcNow_ReturnValue);
	void Handle_Sort_Picker_Action(bool* bPassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FortExpeditionBuildSquadWidget_C">();
	}
	static class UBP_FortExpeditionBuildSquadWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FortExpeditionBuildSquadWidget_C>();
	}
};

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimpleSquadSlotButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SimpleSquadSlotButton.SimpleSquadSlotButton_C
// 0x00F0 (0x08F0 - 0x0800)
class USimpleSquadSlotButton_C final  : public UFortSquadSlotSelectorButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0800(0x0008)(Transient, DuplicateTransient)
	class UCommonBorder*                          CommonBorder_0;                                    // 0x0808(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSlotType;                                     // 0x0810(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSlotTypeShadow;                               // 0x0818(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        InputActionOverride;                               // 0x0820(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                   NormalBangWrapper;                                 // 0x0828(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayTypeIcon;                                   // 0x0830(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   TooltipBody;                                       // 0x0838(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   TooltipHeader;                                     // 0x0850(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          ShowSubTypeIcon;                                   // 0x0868(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2479[0x7];                                     // 0x0869(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            SubTypeIcon;                                       // 0x0870(0x0078)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bSuppressTooltip;                                  // 0x08E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	EFortItemCardSize                             SlottedItemCardSize;                               // 0x08E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_247A[0x2];                                     // 0x08EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TypeIconVerticalOffset;                            // 0x08EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SimpleSquadSlotButton(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, EFortItemCardSize Temp_byte_Variable12, class FName CallFunc_GetActiveCombatSquadId_ReturnValue, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UClass* Temp_class_Variable12, class UClass* Temp_class_Variable123, class UClass* Temp_class_Variable1234, class UClass* Temp_class_Variable12345, class UClass* Temp_class_Variable123456, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable123, ESlateVisibility Temp_byte_Variable1234, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsUsingGamepad_ReturnValue, bool K2Node_Event_IsDesignTime, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, bool Temp_bool_Variable1, bool CallFunc_EqualEqual_NameName_ReturnValue, class UClass* K2Node_Select_Default, bool K2Node_ComponentBoundEvent_bIsOpen, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_IsInZone_ReturnValue, ESlateVisibility K2Node_Select1_Default, ESlateVisibility K2Node_Select12_Default);
	void BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void OnSelected();
	void SquadSlotWidgetUpdated();
	void HandlePostDifferentSquadSlotSetBP();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	class UWidget* GetSimpleSquadButtonTooltipWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue);
	void Update_Bang_State(class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSquadSlotUnseen_ReturnValue);
	void Mark_Squad_Slot_Seen_State(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, class UFortHomebaseNodeItem* CallFunc_GetHomebaseNodeItemForSquadSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void IsSlotEmpty(bool* IsEmpty, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UFortItem* CallFunc_GetItemInSquadSlotBP_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Update_SubType_Icon_Image();
	void Update_SubType_Icon_Glow(bool GlowIcon, bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, const struct FSlateColor& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void UpdateTypeIconOffset(float VerticalOffset, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SimpleSquadSlotButton_C">();
	}
	static class USimpleSquadSlotButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleSquadSlotButton_C>();
	}
};

}


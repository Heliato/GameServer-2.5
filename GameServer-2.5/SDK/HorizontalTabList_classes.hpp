#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HorizontalTabList

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HorizontalTabList.HorizontalTabList_C
// 0x0068 (0x03B8 - 0x0350)
class UHorizontalTabList_C final  : public UFortTabListWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 ImageGamepadKeyPrompt;                             // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageHorizRule;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    NextTabAction;                                     // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               NextTabActionWrapper;                              // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    PreviousTabAction;                                 // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PreviousTabActionWrapper;                          // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TabButtonBox;                                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                                TabButtonPadding;                                  // 0x0390(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	class UClass*                                 ButtonStyle;                                       // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          UseButtonStyle;                                    // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          ShowGamePadInputPrompt;                            // 0x03A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          ShowRail;                                          // 0x03AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_3DA3[0x1];                                     // 0x03AB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MinTabWidth;                                       // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewVar_0;                                          // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForceTabLabelsCollapsed;                           // 0x03B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          ForceTabIconsCollapsed;                            // 0x03B5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_HorizontalTabList(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, TDelegate<void(class FName TabId)> K2Node_CreateDelegate_OutputDelegate, ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, bool K2Node_CustomEvent_bUsingGamepad, ESlateVisibility Temp_byte_Variable12, bool K2Node_Event_IsDesignTime, int32 CallFunc_GetTabCount_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_GetTabCount_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue1, ESlateVisibility Temp_byte_Variable123, ESlateVisibility K2Node_Select_Default, class FName K2Node_CustomEvent_TabId, class FText CallFunc_GetEmptyText_ReturnValue, bool Temp_bool_Variable1, class FName K2Node_Event_TabNameID, class UCommonButton* K2Node_Event_TabButton, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess, ESlateVisibility K2Node_Select1_Default, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button1, bool K2Node_DynamicCast_bSuccess1, ESlateVisibility Temp_byte_Variable1234, ESlateVisibility Temp_byte_Variable12345, bool Temp_bool_Variable12, ESlateVisibility K2Node_Select12_Default, class UCommonUIContext* CallFunc_GetContext_ReturnValue, TDelegate<void(bool bUsingGamepad)> K2Node_CreateDelegate_OutputDelegate1);
	void HandleTabCreated(class FName TabNameID, class UCommonButton* TabButton);
	void CustomEvent_0(class FName TabId);
	void Previous_Visibility();
	void PreConstruct(bool IsDesignTime);
	void Handle_OnInputMethodChanged(bool bUsingGamepad);
	void Construct();
	void ChangeInputBindings(const struct FDataTableRowHandle& NextBinding, const struct FDataTableRowHandle& PreviousBinding);
	class UCommonButton* Get_Tab_From_Id(class FName TabNameID, class UCommonButton* CallFunc_GetTabButtonByID_ReturnValue);
	void UpdateGamepadKeyVisibility(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, ESlateVisibility Temp_byte_Variable12, int32 CallFunc_GetChildrenCount_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select1_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HorizontalTabList_C">();
	}
	static class UHorizontalTabList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHorizontalTabList_C>();
	}
};

}


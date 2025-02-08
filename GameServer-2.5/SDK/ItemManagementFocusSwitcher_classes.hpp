#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemManagementFocusSwitcher

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemManagementFocusSwitcher.ItemManagementFocusSwitcher_C
// 0x0028 (0x0238 - 0x0210)
class UItemManagementFocusSwitcher_C final  : public UCommonUserWidget
{
public:
	class UIconTabButton_C*                       IconTabButton;                                     // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemTileView*                      TileViewA;                                         // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemTileView*                      TileViewB;                                         // 0x0220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemTileView*                      PreviousFocus;                                     // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TileViewBIndex;                                    // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void DeferFocusSwitch(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_GetSelectedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void ExecuteFocusSwitch(int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, class UObject* CallFunc_GetSelectedItem_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue12, class UObject* CallFunc_GetSelectedItem_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue12, int32 CallFunc_GetNumItems_ReturnValue123, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue123, int32 K2Node_Select_Default, class UObject* CallFunc_GetItemAt_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue1, bool CallFunc_SetSelectedIndex_ReturnValue, bool CallFunc_SetSelectedIndex_ReturnValue1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemManagementFocusSwitcher_C">();
	}
	static class UItemManagementFocusSwitcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemManagementFocusSwitcher_C>();
	}
};

}


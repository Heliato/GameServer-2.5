#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuickbarSlotCooldown

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "ItemDisplayStyle_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuickbarSlotCooldown.QuickbarSlotCooldown_C
// 0x0028 (0x02C8 - 0x02A0)
class UQuickbarSlotCooldown_C final  : public UFortItemCooldownWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 ImageRadialOpacityLayer;                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageRectangularOpacityLayer;                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  SwitcherOpacityOverlay;                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EItemDisplayStyle                             ItemDisplayStyle;                                  // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_QuickbarSlotCooldown(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, EFortItemCooldownType K2Node_Event_CooldownType, bool K2Node_SwitchEnum1_CmpSuccess, bool K2Node_SwitchEnum12_CmpSuccess, bool K2Node_SwitchEnum123_CmpSuccess, EFortItemCooldownType K2Node_Event_CooldownType1, bool K2Node_SwitchEnum1234_CmpSuccess, bool K2Node_SwitchEnum12345_CmpSuccess);
	void OnCooldownStopped(EFortItemCooldownType CooldownType);
	void OnCooldownStarted(EFortItemCooldownType CooldownType);
	void Show_Countdown(bool Show, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, ESlateVisibility K2Node_Select_Default);
	void Initialize(EItemDisplayStyle QuickbarItemDisplayStyle, TArray<EFortItemCooldownType>& DesiredCooldownTypesSupported, EItemDisplayStyle Temp_byte_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable1, class UMaterialInterface* Temp_object_Variable12, class UMaterialInterface* Temp_object_Variable123, class UMaterialInterface* Temp_object_Variable1234, class UMaterialInterface* Temp_object_Variable12345, class UMaterialInterface* Temp_object_Variable123456, class UMaterialInterface* K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuickbarSlotCooldown_C">();
	}
	static class UQuickbarSlotCooldown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuickbarSlotCooldown_C>();
	}
};

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionAlertIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MissionAlertIndicator.MissionAlertIndicator_C
// 0x0020 (0x0230 - 0x0210)
class UMissionAlertIndicator_C final  : public UCommonUserWidget
{
public:
	class UImage*                                 ImageOtherIcon;                                    // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageOtherIconShadow;                              // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  Switcher;                                          // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           CycleTimer;                                        // 0x0228(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ToggleTimer(bool IsEnabled, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void Update();
	void Config(const struct FGameplayTagContainer& AlertVisualTags, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, const struct FSlateBrush& CallFunc_Get_Mission_Alert_Visual_Icon_OutBrush, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void Get_Mission_Alert_Visual_Icon(struct FGameplayTagContainer& TagContainer, struct FSlateBrush* OutBrush, class UObject* MinibossAlertImage, class UObject* StormAlertImage, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionAlertIndicator_C">();
	}
	static class UMissionAlertIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionAlertIndicator_C>();
	}
};

}


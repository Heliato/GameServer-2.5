#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionFocusWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MissionFocusWidget.MissionFocusWidget_C
// 0x0038 (0x0248 - 0x0210)
class UMissionFocusWidget_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       HeaderText;                                        // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           KillPointsBar;                                     // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TimerText;                                         // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMissionTimerComponent*             SavedTimerComponent;                               // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortMission*                           CurrentFocusedMission;                             // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         KillBarPercentage;                                 // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MissionFocusWidget(int32 EntryPoint, TDelegate<void(class AFortMission* FocusedMission)> K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class AFortMission* CallFunc_GetFocusedMission_ReturnValue);
	void Construct();
	void UpdateTimer(bool KillBarPercentageChanged, float NewKillBarPercentage, bool HeaderTextChanged, bool TimerTextChanged, class FText NewHeaderText, class FText NewTimerText, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, class FText CallFunc_GetText_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetCurrentFocusPercentage_ReturnValue, class FText CallFunc_GetCurrentFocusDisplayText_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class FText CallFunc_GetText_ReturnValue1, bool CallFunc_NotEqual_TextText_ReturnValue1, bool CallFunc_IsMissionTimerSet_ReturnValue, bool CallFunc_IsTimerVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_GetTimeText_ReturnValue);
	void HandleTimerComponentChanged(class UFortMissionTimerComponent* TimerComponent);
	void HandleFocusedMission(class AFortMission* FocusedMission, bool CallFunc_IsValid_ReturnValue, TDelegate<void(class UFortMissionTimerComponent* TimerComponent)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class UFortMissionTimerComponent* TimerComponent)> K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue12);
	void UpdateVisibility(bool KillBarVisible, bool TimerVisible, bool HeaderVisible, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, ESlateVisibility K2Node_Select_Default, ESlateVisibility Temp_byte_Variable12, ESlateVisibility Temp_byte_Variable123, ESlateVisibility K2Node_Select1_Default, ESlateVisibility Temp_byte_Variable1234, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, ESlateVisibility Temp_byte_Variable12345, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool Temp_bool_Variable12, ESlateVisibility K2Node_Select12_Default, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_GetText_ReturnValue1, bool CallFunc_TextIsEmpty_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_IsValid_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionFocusWidget_C">();
	}
	static class UMissionFocusWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionFocusWidget_C>();
	}
};

}


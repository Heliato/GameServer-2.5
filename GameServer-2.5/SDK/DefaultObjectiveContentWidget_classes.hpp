#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultObjectiveContentWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C
// 0x0028 (0x0238 - 0x0210)
class UDefaultObjectiveContentWidget_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UMissionObjectiveProgressBarsManager_C* MissionObjectiveProgressBarsManager;               // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             RichTextSlot;                                      // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortObjectiveBase*                     TrackedObjective;                                  // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bConfigureAsHUD;                                   // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_DefaultObjectiveContentWidget(int32 EntryPoint, TDelegate<void(class AFortMissionState* MissionState)> K2Node_CreateDelegate_OutputDelegate, class AFortObjectiveBase* K2Node_Event_Objective, bool K2Node_Event_bInConfigureAsHUD, TDelegate<void(class AFortObjectiveBase* Objective, bool bNewVisibility)> K2Node_CreateDelegate_OutputDelegate1, TDelegate<void(class AFortObjectiveBase* Objective, EFortObjectiveStatus NewStatus)> K2Node_CreateDelegate_OutputDelegate12, class AFortObjectiveBase* K2Node_CustomEvent_Objective1, EFortObjectiveStatus K2Node_CustomEvent_NewStatus, class AFortObjectiveBase* K2Node_CustomEvent_Objective, bool K2Node_CustomEvent_bNewVisibility, class AFortMissionState* K2Node_CustomEvent_MissionState, class UFortMissionTimerComponent* CallFunc_GetTimerComponent_ReturnValue, TDelegate<void(class UFortMissionTimerComponent* TimerComponent)> K2Node_CreateDelegate_OutputDelegate123);
	void HandleUpdate(class AFortMissionState* MissionState);
	void HandleObjectiveVisibilityChanged(class AFortObjectiveBase* Objective, bool bNewVisibility);
	void HandleObjectiveStatusChanged(class AFortObjectiveBase* Objective, EFortObjectiveStatus NewStatus);
	void Setup(class AFortObjectiveBase* Objective, bool bInConfigureAsHUD);
	void Update(class FText TimerText, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetEmptyText_ReturnValue, class UFortMissionTimerComponent* CallFunc_GetTimerComponent_ReturnValue, class UMissionRichText_C* CallFunc_GetRichTextBlock_MissionRichTextBlock, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class FText CallFunc_GetTimeText_ReturnValue, bool CallFunc_IsTimerVisible_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, float CallFunc_GetMissionTimerTimeRemaining_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_FloatFloat_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_GetObjectiveDisplayString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData12, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue1);
	void GetRichTextBlock(class UMissionRichText_C** MissionRichTextBlock, class UMissionRichText_C* FoundTextBlock, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UMissionRichText_C* K2Node_DynamicCast_AsMission_Rich_Text, bool K2Node_DynamicCast_bSuccess);
	void CreateRichTextBlock(class FText Text, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UMissionRichText_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void HandleTimerComponentUpdated(class UFortMissionTimerComponent* InTimerComponent);
	void GetHeightEstimate(float* Height, float HeightEstimate, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetHeightEstimate_Height, float CallFunc_Add_FloatFloat_ReturnValue, class UMissionRichText_C* CallFunc_GetRichTextBlock_MissionRichTextBlock, bool CallFunc_IsValid_ReturnValue1, float CallFunc_GetMissionHUDTextLineHeightEstimate_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DefaultObjectiveContentWidget_C">();
	}
	static class UDefaultObjectiveContentWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultObjectiveContentWidget_C>();
	}
};

}


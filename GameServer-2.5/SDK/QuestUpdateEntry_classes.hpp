#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestUpdateEntry

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "DynamicQuestUpdateInfo_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestUpdateEntry.QuestUpdateEntry_C
// 0x0070 (0x0280 - 0x0210)
class UQuestUpdateEntry_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Disappear;                                         // 0x0218(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Appear;                                            // 0x0220(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ObjectivesBox;                                     // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          OuterBorder;                                       // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       QuestName;                                         // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Separator;                                         // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   AllQuestUpdatesFinished;                           // 0x0248(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FDynamicQuestUpdateInfo>        QuestUpdates;                                      // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         UpdateTweenTime;                                   // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PostUpdatesDelay;                                  // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           PostUpdatesDelayTimerHandle;                       // 0x0270(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          bIsAppearAnimationFinished;                        // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bConfigureAsAnnouncement;                          // 0x0279(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void AllQuestUpdatesFinished__DelegateSignature(class UQuestUpdateEntry_C* UpdateWidget);
	void ExecuteUbergraph_QuestUpdateEntry(int32 EntryPoint, class UPanelSlot* CallFunc_GetContentSlot_ReturnValue, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FDynamicQuestUpdateInfo& CallFunc_Array_Get_Item, bool CallFunc_IsUpdateActive_Result, float CallFunc_Subtract_FloatFloat_ReturnValue, class UQuestObjectiveEntry_C* CallFunc_GetObjectiveWidget_ObjectiveWidget, float CallFunc_FMax_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, const struct FDynamicQuestUpdateInfo& K2Node_MakeStruct_DynamicQuestUpdateInfo, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_HasUpdateFinished_Result, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Lerp_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue1);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnReceiveQuestUpdate(const struct FDynamicQuestUpdateInfo& QuestUpdateInfo, bool* Success, bool bIsFirstUpdate, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, bool CallFunc_CanAddUpdate_Result, class FText CallFunc_GetDisplayName_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void CanAddUpdate(const struct FDynamicQuestUpdateInfo& UpdateToAdd, bool* Result, bool bCanAddUpdate, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, const struct FDynamicQuestUpdateInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void OnAppearAnimationFinished();
	void TryStartUpdates(int32 Temp_int_Array_Index_Variable, bool CallFunc_CanStartUpdate_Result, int32 Temp_int_Loop_Counter_Variable, const struct FDynamicQuestUpdateInfo& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, class UQuestObjectiveEntry_C* CallFunc_GetObjectiveWidget_ObjectiveWidget, const struct FDynamicQuestUpdateInfo& K2Node_MakeStruct_DynamicQuestUpdateInfo, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CanStartUpdate(int32 UpdateIndex, bool* Result, bool bCanStart, const struct FDynamicQuestUpdateInfo& UpdateToTest, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FDynamicQuestUpdateInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsUpdateActive_Result, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, const struct FDynamicQuestUpdateInfo& CallFunc_Array_Get_Item1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_HasUpdateStarted_Result, bool CallFunc_Not_PreBool_ReturnValue1);
	void HasUpdateFinished(struct FDynamicQuestUpdateInfo& Update, bool* Result, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnUpdateFinished(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HaveAllUpdatesFinished_Result, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void HasUpdateStarted(struct FDynamicQuestUpdateInfo& Update, bool* Result);
	void GetObjectiveWidget(class UFortQuestObjectiveInfo* QuestObjective, class UQuestObjectiveEntry_C** ObjectiveWidget, class UQuestObjectiveEntry_C* FoundWidget, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UQuestObjectiveEntry_C* K2Node_DynamicCast_AsQuest_Objective_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void IsUpdateActive(struct FDynamicQuestUpdateInfo& Update, bool* Result, bool CallFunc_HasUpdateStarted_Result, bool CallFunc_HasUpdateFinished_Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HaveAllUpdatesFinished(bool* Result, bool bAllUpdatesFinished, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDynamicQuestUpdateInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasUpdateFinished_Result, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnPostUpdatesDelayFinished(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate);
	void OnDisappearAnimationFinished();
	void CreateObjectiveEntryWidget(class UFortQuestObjectiveInfo* Objective, int32 LastAchievedCount, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UQuestObjectiveEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void GetNumDisplayedObjectives(int32* NumObjectives, const TArray<class UFortQuestObjectiveInfo*>& UniqueObjectives, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDynamicQuestUpdateInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestUpdateEntry_C">();
	}
	static class UQuestUpdateEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestUpdateEntry_C>();
	}
};

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyQuestObjectiveEntry

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C
// 0x0038 (0x0248 - 0x0210)
class UDailyQuestObjectiveEntry_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Appear;                                            // 0x0218(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDailyQuestProgressWidget_C*            DailyQuestProgressWidget;                          // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDailyQuestRewardInfo_C*                DailyQuestRewardInfo;                              // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LockIcon;                                          // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TaskName;                                          // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestObjectiveInfo*                TrackedObjective;                                  // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DailyQuestObjectiveEntry(int32 EntryPoint, class UObject* K2Node_Event_InData, class UFortQuestObjectiveInfo* K2Node_DynamicCast_AsFort_Quest_Objective_Info, bool K2Node_DynamicCast_bSuccess);
	void SetData(class UObject* InData);
	void UpdateProgress(class UFortQuestObjectiveInfo* Objective, int32 AchievedCount);
	void Update(class UFortQuestObjectiveInfo* Objective, int32 AchievedCount, class UFortQuestItem* CallFunc_GetOwningQuest_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue, const struct FFortRewardInfo& CallFunc_GetRewardInfo_BP_ReturnValue, ESlateVisibility Temp_byte_Variable, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, ESlateVisibility K2Node_Select_Default);
	void PlayAppearAnimation();
	void UpdateFromObjectiveInfo(const struct FFortMcpQuestObjectiveInfo& ObjectiveInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DailyQuestObjectiveEntry_C">();
	}
	static class UDailyQuestObjectiveEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDailyQuestObjectiveEntry_C>();
	}
};

}


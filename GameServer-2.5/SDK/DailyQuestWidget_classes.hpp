#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyQuestWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DailyQuestWidget.DailyQuestWidget_C
// 0x0030 (0x0240 - 0x0210)
class UDailyQuestWidget_C final  : public UCommonUserWidget
{
public:
	class UCommonBorder*                          BattlePassBorder;                                  // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ObjectivesBox;                                     // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       QuestName;                                         // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestItem*                         Quest;                                             // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortQuestObjectiveInfo*>        VisibleObjectives;                                 // 0x0230(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void SetQuestItem(class UFortQuestItem* Param_Quest, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, EFortQuestType CallFunc_GetQuestType_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void FilterObjectives(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortQuestObjectiveInfo* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsVisibleToUser_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateObjectiveWidgets(int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UDailyQuestObjectiveEntry_C* K2Node_DynamicCast_AsDaily_Quest_Objective_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void CreateAllObjectiveWidgets(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortQuestObjectiveInfo* CallFunc_Array_Get_Item, class UDailyQuestObjectiveEntry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DailyQuestWidget_C">();
	}
	static class UDailyQuestWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDailyQuestWidget_C>();
	}
};

}


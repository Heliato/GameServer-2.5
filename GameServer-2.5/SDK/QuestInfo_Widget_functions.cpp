#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestInfo_Widget

#include "Basic.hpp"

#include "QuestInfo_Widget_classes.hpp"
#include "QuestInfo_Widget_parameters.hpp"


namespace SDK
{

// Function QuestInfo_Widget.QuestInfo_Widget_C.ExecuteUbergraph_QuestInfo_Widget
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestInfo_Widget_C::ExecuteUbergraph_QuestInfo_Widget(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestInfo_Widget_C", "ExecuteUbergraph_QuestInfo_Widget");

	Params::QuestInfo_Widget_C_ExecuteUbergraph_QuestInfo_Widget Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestInfo_Widget.QuestInfo_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestInfo_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestInfo_Widget_C", "PreConstruct");

	Params::QuestInfo_Widget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestInfo_Widget.QuestInfo_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestInfo_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestInfo_Widget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestInfo_Widget.QuestInfo_Widget_C.PopulateFromQuest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*                   InQuest                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestInfo_Widget_C::PopulateFromQuest(class UFortQuestItem*& InQuest, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestInfo_Widget_C", "PopulateFromQuest");

	Params::QuestInfo_Widget_C_PopulateFromQuest Parms{};

	Parms.InQuest = InQuest;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	InQuest = Parms.InQuest;
}


// Function QuestInfo_Widget.QuestInfo_Widget_C.InitDesignView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition*         TempQuestDefinition                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                        CallFunc_CreateTemporaryItemInstanceBP_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*                   K2Node_DynamicCast_AsFort_Quest_Item                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestInfo_Widget_C::InitDesignView(class UFortQuestItemDefinition* TempQuestDefinition, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, class UFortQuestItem* K2Node_DynamicCast_AsFort_Quest_Item, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestInfo_Widget_C", "InitDesignView");

	Params::QuestInfo_Widget_C_InitDesignView Parms{};

	Parms.TempQuestDefinition = TempQuestDefinition;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Quest_Item = K2Node_DynamicCast_AsFort_Quest_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestInfo_Widget.QuestInfo_Widget_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestInfo_Widget_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestInfo_Widget_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestInfo_Widget.QuestInfo_Widget_C.PopulateObjectives
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestObjectiveInfo*          CallFunc_Array_Get_Item                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsVisibleToUser_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestInfo_Widget_C::PopulateObjectives(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortQuestObjectiveInfo* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsVisibleToUser_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestInfo_Widget_C", "PopulateObjectives");

	Params::QuestInfo_Widget_C_PopulateObjectives Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsVisibleToUser_ReturnValue = CallFunc_IsVisibleToUser_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestInfo_Widget.QuestInfo_Widget_C.PopulateRewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemInstanceQuantityPair>CallFunc_GetPreviewRewards_ReturnValue                 (ZeroConstructor, ReferenceParm)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemInstanceQuantityPair    CallFunc_Array_Get_Item                                (NoDestructor)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                      CallFunc_GetItemSmallPreviewImageBrush_ReturnValue     ()
// class UFortQuestItem*                   K2Node_DynamicCast_AsFort_Quest_Item                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             CallFunc_GetDisplayName_ReturnValue                    ()
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestInfo_Widget_C::PopulateRewards(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FFortItemInstanceQuantityPair>& CallFunc_GetPreviewRewards_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue, class UFortQuestItem* K2Node_DynamicCast_AsFort_Quest_Item, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestInfo_Widget_C", "PopulateRewards");

	Params::QuestInfo_Widget_C_PopulateRewards Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPreviewRewards_ReturnValue = std::move(CallFunc_GetPreviewRewards_ReturnValue);
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = std::move(CallFunc_Array_Get_Item);
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetItemSmallPreviewImageBrush_ReturnValue = std::move(CallFunc_GetItemSmallPreviewImageBrush_ReturnValue);
	Parms.K2Node_DynamicCast_AsFort_Quest_Item = K2Node_DynamicCast_AsFort_Quest_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetPreviewRewards_ReturnValue = std::move(Parms.CallFunc_GetPreviewRewards_ReturnValue);
}


// Function QuestInfo_Widget.QuestInfo_Widget_C.SetQuestIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                      CallFunc_GetItemSmallPreviewImageBrush_ReturnValue     ()
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                      K2Node_SetFieldsInStruct_StructOut                     ()

void UQuestInfo_Widget_C::SetQuestIcon(const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_SetFieldsInStruct_StructOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestInfo_Widget_C", "SetQuestIcon");

	Params::QuestInfo_Widget_C_SetQuestIcon Parms{};

	Parms.CallFunc_GetItemSmallPreviewImageBrush_ReturnValue = std::move(CallFunc_GetItemSmallPreviewImageBrush_ReturnValue);
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = std::move(K2Node_SetFieldsInStruct_StructOut);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestInfo_Widget.QuestInfo_Widget_C.SetQuestText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             CallFunc_GetDescription_ReturnValue                    ()
// class FText                             CallFunc_GetDisplayName_ReturnValue                    ()

void UQuestInfo_Widget_C::SetQuestText(class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestInfo_Widget_C", "SetQuestText");

	Params::QuestInfo_Widget_C_SetQuestText Parms{};

	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}


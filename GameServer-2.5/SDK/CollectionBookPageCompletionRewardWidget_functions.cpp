#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookPageCompletionRewardWidget

#include "Basic.hpp"

#include "CollectionBookPageCompletionRewardWidget_classes.hpp"
#include "CollectionBookPageCompletionRewardWidget_parameters.hpp"


namespace SDK
{

// Function CollectionBookPageCompletionRewardWidget.CollectionBookPageCompletionRewardWidget_C.ExecuteUbergraph_CollectionBookPageCompletionRewardWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECollectionBookRewardStatus             Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECollectionBookRewardStatus             K2Node_Event_NewStatus                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          K2Node_Select_Default                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageCompletionRewardWidget_C::ExecuteUbergraph_CollectionBookPageCompletionRewardWidget(int32 EntryPoint, ECollectionBookRewardStatus Temp_byte_Variable, ECollectionBookRewardStatus K2Node_Event_NewStatus, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookPageCompletionRewardWidget_C", "ExecuteUbergraph_CollectionBookPageCompletionRewardWidget");

	Params::CollectionBookPageCompletionRewardWidget_C_ExecuteUbergraph_CollectionBookPageCompletionRewardWidget Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_NewStatus = K2Node_Event_NewStatus;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookPageCompletionRewardWidget.CollectionBookPageCompletionRewardWidget_C.OnRewardStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// ECollectionBookRewardStatus             NewStatus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageCompletionRewardWidget_C::OnRewardStatusChanged(ECollectionBookRewardStatus NewStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookPageCompletionRewardWidget_C", "OnRewardStatusChanged");

	Params::CollectionBookPageCompletionRewardWidget_C_OnRewardStatusChanged Parms{};

	Parms.NewStatus = NewStatus;

	UObject::ProcessEvent(Func, &Parms);
}

}


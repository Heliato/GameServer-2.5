#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookPageDetailsWidget

#include "Basic.hpp"

#include "CollectionBookPageDetailsWidget_classes.hpp"
#include "CollectionBookPageDetailsWidget_parameters.hpp"


namespace SDK
{

// Function CollectionBookPageDetailsWidget.CollectionBookPageDetailsWidget_C.ExecuteUbergraph_CollectionBookPageDetailsWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   K2Node_Event_TotalFilledSlots                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   K2Node_Event_TotalSlots                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortCollectionBookState                K2Node_Event_State                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_NotEqual_ByteByte_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageDetailsWidget_C::ExecuteUbergraph_CollectionBookPageDetailsWidget(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, int32 K2Node_Event_TotalFilledSlots, int32 K2Node_Event_TotalSlots, EFortCollectionBookState K2Node_Event_State, bool Temp_bool_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookPageDetailsWidget_C", "ExecuteUbergraph_CollectionBookPageDetailsWidget");

	Params::CollectionBookPageDetailsWidget_C_ExecuteUbergraph_CollectionBookPageDetailsWidget Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Event_TotalFilledSlots = K2Node_Event_TotalFilledSlots;
	Parms.K2Node_Event_TotalSlots = K2Node_Event_TotalSlots;
	Parms.K2Node_Event_State = K2Node_Event_State;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookPageDetailsWidget.CollectionBookPageDetailsWidget_C.OnPageProgressionUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   TotalFilledSlots                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TotalSlots                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortCollectionBookState                State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageDetailsWidget_C::OnPageProgressionUpdated(int32 TotalFilledSlots, int32 TotalSlots, EFortCollectionBookState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookPageDetailsWidget_C", "OnPageProgressionUpdated");

	Params::CollectionBookPageDetailsWidget_C_OnPageProgressionUpdated Parms{};

	Parms.TotalFilledSlots = TotalFilledSlots;
	Parms.TotalSlots = TotalSlots;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}

}


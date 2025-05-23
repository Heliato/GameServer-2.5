#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MonolithicItemDetailsHostPanel

#include "Basic.hpp"

#include "MonolithicItemDetailsHostPanel_classes.hpp"
#include "MonolithicItemDetailsHostPanel_parameters.hpp"


namespace SDK
{

// Function MonolithicItemDetailsHostPanel.MonolithicItemDetailsHostPanel_C.ExecuteUbergraph_MonolithicItemDetailsHostPanel
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable123                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select1_Default                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMonolithicItemDetailsHostPanel_C::ExecuteUbergraph_MonolithicItemDetailsHostPanel(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, ESlateVisibility Temp_byte_Variable12, ESlateVisibility Temp_byte_Variable123, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonolithicItemDetailsHostPanel_C", "ExecuteUbergraph_MonolithicItemDetailsHostPanel");

	Params::MonolithicItemDetailsHostPanel_C_ExecuteUbergraph_MonolithicItemDetailsHostPanel Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MonolithicItemDetailsHostPanel.MonolithicItemDetailsHostPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMonolithicItemDetailsHostPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonolithicItemDetailsHostPanel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonolithicItemDetailsHostPanel.MonolithicItemDetailsHostPanel_C.HandleHasItemMarkedForMulchingChanged
// (Event, Protected, BlueprintEvent)

void UMonolithicItemDetailsHostPanel_C::HandleHasItemMarkedForMulchingChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonolithicItemDetailsHostPanel_C", "HandleHasItemMarkedForMulchingChanged");

	UObject::ProcessEvent(Func, nullptr);
}

}


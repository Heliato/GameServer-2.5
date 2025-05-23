#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReticleStatusWidget

#include "Basic.hpp"

#include "ReticleStatusWidget_classes.hpp"
#include "ReticleStatusWidget_parameters.hpp"


namespace SDK
{

// Function ReticleStatusWidget.ReticleStatusWidget_C.ExecuteUbergraph_ReticleStatusWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            K2Node_CustomEvent_FailedReason                        ()
// class FText                             K2Node_CustomEvent_FailureText                         ()
// TDelegate<void(const struct FGameplayTagContainer& FailedReason, class FText FailureText)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// class UFortHUDContext*                  CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReticleStatusWidget_C::ExecuteUbergraph_ReticleStatusWidget(int32 EntryPoint, const struct FGameplayTagContainer& K2Node_CustomEvent_FailedReason, class FText K2Node_CustomEvent_FailureText, TDelegate<void(const struct FGameplayTagContainer& FailedReason, class FText FailureText)> K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReticleStatusWidget_C", "ExecuteUbergraph_ReticleStatusWidget");

	Params::ReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_FailedReason = std::move(K2Node_CustomEvent_FailedReason);
	Parms.K2Node_CustomEvent_FailureText = K2Node_CustomEvent_FailureText;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReticleStatusWidget.ReticleStatusWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReticleStatusWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReticleStatusWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ReticleStatusWidget.ReticleStatusWidget_C.OnUnableToPerformAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer            FailedReason                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             FailureText                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UReticleStatusWidget_C::OnUnableToPerformAction(const struct FGameplayTagContainer& FailedReason, class FText FailureText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReticleStatusWidget_C", "OnUnableToPerformAction");

	Params::ReticleStatusWidget_C_OnUnableToPerformAction Parms{};

	Parms.FailedReason = std::move(FailedReason);
	Parms.FailureText = FailureText;

	UObject::ProcessEvent(Func, &Parms);
}

}


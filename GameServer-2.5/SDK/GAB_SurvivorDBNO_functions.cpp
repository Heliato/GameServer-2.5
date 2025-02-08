#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_SurvivorDBNO

#include "Basic.hpp"

#include "GAB_SurvivorDBNO_classes.hpp"
#include "GAB_SurvivorDBNO_parameters.hpp"


namespace SDK
{

// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.ExecuteUbergraph_GAB_SurvivorDBNO
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate1                  (ZeroConstructor, NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate12                 (ZeroConstructor, NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate123                (ZeroConstructor, NoDestructor)
// bool                                    K2Node_Event_bWasCancelled                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData               K2Node_Event_EventData                                 (ConstParm)
// class UAbilityTask_PlayMontageAndWait*  CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                     CallFunc_K2_SetTimer_ReturnValue                       (NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                        CallFunc_GetActivatingPawn_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                        CallFunc_GetActivatingPawn_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIPawn*                      K2Node_DynamicCast_AsFort_AIPawn                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_SurvivorDBNO_C::ExecuteUbergraph_GAB_SurvivorDBNO(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate123, bool K2Node_Event_bWasCancelled, struct FGameplayEventData& K2Node_Event_EventData, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorDBNO_C", "ExecuteUbergraph_GAB_SurvivorDBNO");

	Params::GAB_SurvivorDBNO_C_ExecuteUbergraph_GAB_SurvivorDBNO Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_Event_EventData = std::move(K2Node_Event_EventData);
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = std::move(CallFunc_K2_SetTimer_ReturnValue);
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue1 = CallFunc_GetActivatingPawn_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_AIPawn = K2Node_DynamicCast_AsFort_AIPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.PlayDownedSpeech
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorDBNO_C::PlayDownedSpeech()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorDBNO_C", "PlayDownedSpeech");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_SurvivorDBNO_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorDBNO_C", "K2_ActivateAbilityFromEvent");

	Params::GAB_SurvivorDBNO_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_SurvivorDBNO_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorDBNO_C", "K2_OnEndAbility");

	Params::GAB_SurvivorDBNO_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnBlendOut_30185FB0432AA030CE779FBAA5AE1A56
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorDBNO_C::OnBlendOut_30185FB0432AA030CE779FBAA5AE1A56()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorDBNO_C", "OnBlendOut_30185FB0432AA030CE779FBAA5AE1A56");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnCancelled_30185FB0432AA030CE779FBAA5AE1A56
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorDBNO_C::OnCancelled_30185FB0432AA030CE779FBAA5AE1A56()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorDBNO_C", "OnCancelled_30185FB0432AA030CE779FBAA5AE1A56");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnCompleted_30185FB0432AA030CE779FBAA5AE1A56
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorDBNO_C::OnCompleted_30185FB0432AA030CE779FBAA5AE1A56()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorDBNO_C", "OnCompleted_30185FB0432AA030CE779FBAA5AE1A56");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnInterrupted_30185FB0432AA030CE779FBAA5AE1A56
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorDBNO_C::OnInterrupted_30185FB0432AA030CE779FBAA5AE1A56()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorDBNO_C", "OnInterrupted_30185FB0432AA030CE779FBAA5AE1A56");

	UObject::ProcessEvent(Func, nullptr);
}

}


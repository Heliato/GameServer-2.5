#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Commando_AmmoRecovery

#include "Basic.hpp"

#include "GA_Commando_AmmoRecovery_classes.hpp"
#include "GA_Commando_AmmoRecovery_parameters.hpp"


namespace SDK
{

// Function GA_Commando_AmmoRecovery.GA_Commando_AmmoRecovery_C.ExecuteUbergraph_GA_Commando_AmmoRecovery
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               K2Node_Event_EventData                                 (ConstParm)
// class AController*                      CallFunc_GetController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*            K2Node_DynamicCast_AsFort_Player_Controller            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*          CallFunc_GetAbilitySystemComponent_ReturnValue         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_RandomFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_LessEqual_FloatFloat_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Commando_AmmoRecovery_C::ExecuteUbergraph_GA_Commando_AmmoRecovery(int32 EntryPoint, struct FGameplayEventData& K2Node_Event_EventData, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_AmmoRecovery_C", "ExecuteUbergraph_GA_Commando_AmmoRecovery");

	Params::GA_Commando_AmmoRecovery_C_ExecuteUbergraph_GA_Commando_AmmoRecovery Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = std::move(K2Node_Event_EventData);
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Commando_AmmoRecovery.GA_Commando_AmmoRecovery_C.SetupAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*          AbilitySystem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_HasAllMatchingGameplayTags_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Commando_AmmoRecovery_C::SetupAbility(class UAbilitySystemComponent* AbilitySystem, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_AmmoRecovery_C", "SetupAbility");

	Params::GA_Commando_AmmoRecovery_C_SetupAbility Parms{};

	Parms.AbilitySystem = AbilitySystem;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Commando_AmmoRecovery.GA_Commando_AmmoRecovery_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Param_EventData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Commando_AmmoRecovery_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& Param_EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_AmmoRecovery_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Commando_AmmoRecovery_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.Param_EventData = std::move(Param_EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Commando_AmmoRecovery.GA_Commando_AmmoRecovery_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer            CallFunc_MakeLiteralGameplayTagContainer_ReturnValue   ()
// class AFortPawn*                        K2Node_DynamicCast_AsFort_Pawn                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_HasTags_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGA_Commando_AmmoRecovery_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasTags_ReturnValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_AmmoRecovery_C", "K2_ShouldAbilityRespondToEvent");

	Params::GA_Commando_AmmoRecovery_C_K2_ShouldAbilityRespondToEvent Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Payload = std::move(Payload);
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue = std::move(CallFunc_MakeLiteralGameplayTagContainer_ReturnValue);
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasTags_ReturnValue = CallFunc_HasTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


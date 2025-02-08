#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Bandage

#include "Basic.hpp"

#include "GA_Athena_Bandage_classes.hpp"
#include "GA_Athena_Bandage_parameters.hpp"


namespace SDK
{

// Function GA_Athena_Bandage.GA_Athena_Bandage_C.ExecuteUbergraph_GA_Athena_Bandage
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           K2Node_MakeStruct_GameplayCueParameters                (ContainsInstancedReference)
// TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_TargetData1                         (ConstParm)
// struct FGameplayTag                     K2Node_CustomEvent_ApplicationTag1                     (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_TargetData                          (ConstParm)
// struct FGameplayTag                     K2Node_CustomEvent_ApplicationTag                      (NoDestructor, HasGetValueTypeHash)
// TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)>K2Node_CreateDelegate_OutputDelegate1                  (ZeroConstructor, NoDestructor)
// struct FGameplayTag                     Temp_struct_Variable                                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandle Temp_struct_Variable1                                  ()
// struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_TargetData12                        (ConstParm)
// struct FGameplayTag                     K2Node_CustomEvent_ApplicationTag12                    (NoDestructor, HasGetValueTypeHash)
// TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)>K2Node_CreateDelegate_OutputDelegate12                 (ZeroConstructor, NoDestructor)
// bool                                    CallFunc_K2_CommitAbility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_K2_CommitAbility_ReturnValue1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityActorInfo        CallFunc_GetActorInfo_ReturnValue                      (ContainsInstancedReference)
// class AFortPlayerPawn*                  K2Node_DynamicCast_AsFort_Player_Pawn                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandle CallFunc_AbilityTargetDataFromActor_ReturnValue        ()
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue    (ZeroConstructor, ReferenceParm)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_GetHealth_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Subtract_FloatFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_FClamp_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_FTrunc_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle      CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue     (NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Bandage_C::ExecuteUbergraph_GA_Athena_Bandage(int32 EntryPoint, const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData12, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag12, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate12, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue1, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetHealth_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Bandage_C", "ExecuteUbergraph_GA_Athena_Bandage");

	Params::GA_Athena_Bandage_C_ExecuteUbergraph_GA_Athena_Bandage Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_GameplayCueParameters = std::move(K2Node_MakeStruct_GameplayCueParameters);
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TargetData1 = std::move(K2Node_CustomEvent_TargetData1);
	Parms.K2Node_CustomEvent_ApplicationTag1 = std::move(K2Node_CustomEvent_ApplicationTag1);
	Parms.K2Node_CustomEvent_TargetData = std::move(K2Node_CustomEvent_TargetData);
	Parms.K2Node_CustomEvent_ApplicationTag = std::move(K2Node_CustomEvent_ApplicationTag);
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.Temp_struct_Variable1 = std::move(Temp_struct_Variable1);
	Parms.K2Node_CustomEvent_TargetData12 = std::move(K2Node_CustomEvent_TargetData12);
	Parms.K2Node_CustomEvent_ApplicationTag12 = std::move(K2Node_CustomEvent_ApplicationTag12);
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue1 = CallFunc_K2_CommitAbility_ReturnValue1;
	Parms.CallFunc_GetActorInfo_ReturnValue = std::move(CallFunc_GetActorInfo_ReturnValue);
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue = CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = std::move(CallFunc_AbilityTargetDataFromActor_ReturnValue);
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = std::move(CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = std::move(CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = std::move(Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
}


// Function GA_Athena_Bandage.GA_Athena_Bandage_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Bandage_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Bandage_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Bandage.GA_Athena_Bandage_C.Triggered_BFC97FED4C67D0ACBCFD4E8BA1BBAADF
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Bandage_C::Triggered_BFC97FED4C67D0ACBCFD4E8BA1BBAADF(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Bandage_C", "Triggered_BFC97FED4C67D0ACBCFD4E8BA1BBAADF");

	Params::GA_Athena_Bandage_C_Triggered_BFC97FED4C67D0ACBCFD4E8BA1BBAADF Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Bandage.GA_Athena_Bandage_C.Cancelled_BFC97FED4C67D0ACBCFD4E8BA1BBAADF
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Bandage_C::Cancelled_BFC97FED4C67D0ACBCFD4E8BA1BBAADF(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Bandage_C", "Cancelled_BFC97FED4C67D0ACBCFD4E8BA1BBAADF");

	Params::GA_Athena_Bandage_C_Cancelled_BFC97FED4C67D0ACBCFD4E8BA1BBAADF Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Bandage.GA_Athena_Bandage_C.Completed_BFC97FED4C67D0ACBCFD4E8BA1BBAADF
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Bandage_C::Completed_BFC97FED4C67D0ACBCFD4E8BA1BBAADF(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Bandage_C", "Completed_BFC97FED4C67D0ACBCFD4E8BA1BBAADF");

	Params::GA_Athena_Bandage_C_Completed_BFC97FED4C67D0ACBCFD4E8BA1BBAADF Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Bandage.GA_Athena_Bandage_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayTagContainer            RelevantTags                                           (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AFortPlayerPawnAthena*            K2Node_DynamicCast_AsFort_Player_Pawn_Athena           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_GetHealth_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_FCeil_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Conv_IntToFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_FloatFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGA_Athena_Bandage_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetHealth_ReturnValue, int32 CallFunc_FCeil_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Bandage_C", "K2_CanActivateAbility");

	Params::GA_Athena_Bandage_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

}


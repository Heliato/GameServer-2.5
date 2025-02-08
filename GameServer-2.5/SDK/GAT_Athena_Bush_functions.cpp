#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_Athena_Bush

#include "Basic.hpp"

#include "GAT_Athena_Bush_classes.hpp"
#include "GAT_Athena_Bush_parameters.hpp"


namespace SDK
{

// Function GAT_Athena_Bush.GAT_Athena_Bush_C.ExecuteUbergraph_GAT_Athena_Bush
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo        CallFunc_GetActorInfo_ReturnValue                      (ContainsInstancedReference)
// class AFortPlayerPawn*                  K2Node_DynamicCast_AsFort_Player_Pawn                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandle CallFunc_AbilityTargetDataFromActor_ReturnValue        ()
// bool                                    CallFunc_K2_CommitAbility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue    (ZeroConstructor, ReferenceParm)

void UGAT_Athena_Bush_C::ExecuteUbergraph_GAT_Athena_Bush(int32 EntryPoint, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Athena_Bush_C", "ExecuteUbergraph_GAT_Athena_Bush");

	Params::GAT_Athena_Bush_C_ExecuteUbergraph_GAT_Athena_Bush Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActorInfo_ReturnValue = std::move(CallFunc_GetActorInfo_ReturnValue);
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = std::move(CallFunc_AbilityTargetDataFromActor_ReturnValue);
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = std::move(CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = std::move(Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
}


// Function GAT_Athena_Bush.GAT_Athena_Bush_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAT_Athena_Bush_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Athena_Bush_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}


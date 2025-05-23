#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_Melee_Generic_EventGraph

#include "Basic.hpp"

#include "GAB_Melee_Generic_EventGraph_classes.hpp"
#include "GAB_Melee_Generic_EventGraph_parameters.hpp"


namespace SDK
{

// Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.ExecuteUbergraph_GAB_Melee_Generic_EventGraph
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_TargetData1                         (ConstParm)
// struct FGameplayTag                     K2Node_CustomEvent_ApplicationTag1                     (NoDestructor, HasGetValueTypeHash)
// TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_TargetData                          (ConstParm)
// struct FGameplayTag                     K2Node_CustomEvent_ApplicationTag                      (NoDestructor, HasGetValueTypeHash)
// TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)>K2Node_CreateDelegate_OutputDelegate1                  (ZeroConstructor, NoDestructor)
// struct FGameplayTag                     Temp_struct_Variable                                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandle Temp_struct_Variable1                                  ()
// struct FGameplayAbilityActorInfo        CallFunc_GetActorInfo_ReturnValue                      (ContainsInstancedReference)
// struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_TargetData12                        (ConstParm)
// struct FGameplayTag                     K2Node_CustomEvent_ApplicationTag12                    (NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*                  K2Node_DynamicCast_AsFort_Player_Pawn                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandle CallFunc_AbilityTargetDataFromActor_ReturnValue        ()
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue    (ZeroConstructor, ReferenceParm)
// bool                                    Temp_bool_IsClosed_Variable                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)>K2Node_CreateDelegate_OutputDelegate12                 (ZeroConstructor, NoDestructor)
// bool                                    Temp_bool_Has_Been_Initd_Variable                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_K2_CommitAbility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_K2_CommitAbility_ReturnValue1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_FTrunc_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_ApplyGameplayEffectContainer_ReturnValue      (ConstParm, ZeroConstructor, ReferenceParm)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_IntInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_Melee_Generic_EventGraph_C::ExecuteUbergraph_GAB_Melee_Generic_EventGraph(int32 EntryPoint, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData12, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag12, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool Temp_bool_IsClosed_Variable, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate12, bool Temp_bool_Has_Been_Initd_Variable, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue1, float CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel, int32 CallFunc_FTrunc_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "ExecuteUbergraph_GAB_Melee_Generic_EventGraph");

	Params::GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_TargetData1 = std::move(K2Node_CustomEvent_TargetData1);
	Parms.K2Node_CustomEvent_ApplicationTag1 = std::move(K2Node_CustomEvent_ApplicationTag1);
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TargetData = std::move(K2Node_CustomEvent_TargetData);
	Parms.K2Node_CustomEvent_ApplicationTag = std::move(K2Node_CustomEvent_ApplicationTag);
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.Temp_struct_Variable1 = std::move(Temp_struct_Variable1);
	Parms.CallFunc_GetActorInfo_ReturnValue = std::move(CallFunc_GetActorInfo_ReturnValue);
	Parms.K2Node_CustomEvent_TargetData12 = std::move(K2Node_CustomEvent_TargetData12);
	Parms.K2Node_CustomEvent_ApplicationTag12 = std::move(K2Node_CustomEvent_ApplicationTag12);
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = std::move(CallFunc_AbilityTargetDataFromActor_ReturnValue);
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = std::move(CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue = CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue1 = CallFunc_K2_CommitAbility_ReturnValue1;
	Parms.CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel = CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_ApplyGameplayEffectContainer_ReturnValue = std::move(CallFunc_ApplyGameplayEffectContainer_ReturnValue);
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = std::move(Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
}


// Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_Melee_Generic_EventGraph_C::Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE");

	Params::GAB_Melee_Generic_EventGraph_C_Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.Completed_8C20D6D3411A3D7E54D6049F69DF10BE
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_Melee_Generic_EventGraph_C::Completed_8C20D6D3411A3D7E54D6049F69DF10BE(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "Completed_8C20D6D3411A3D7E54D6049F69DF10BE");

	Params::GAB_Melee_Generic_EventGraph_C_Completed_8C20D6D3411A3D7E54D6049F69DF10BE Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_Melee_Generic_EventGraph_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.Triggered_8C20D6D3411A3D7E54D6049F69DF10BE
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_Melee_Generic_EventGraph_C::Triggered_8C20D6D3411A3D7E54D6049F69DF10BE(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "Triggered_8C20D6D3411A3D7E54D6049F69DF10BE");

	Params::GAB_Melee_Generic_EventGraph_C_Triggered_8C20D6D3411A3D7E54D6049F69DF10BE Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

}


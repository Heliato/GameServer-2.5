#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNStatic_MantisStrike

#include "Basic.hpp"

#include "GCNStatic_MantisStrike_classes.hpp"
#include "GCNStatic_MantisStrike_parameters.hpp"


namespace SDK
{

// Function GCNStatic_MantisStrike.GCNStatic_MantisStrike_C.OnExecute
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class USoundBase*                       LocalMantisStrikeImpactCue                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*                  LocalP_MantisStrikeImpact                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         CallFunc_MakeRotFromZ_ReturnValue                      (IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*         CallFunc_SpawnEmitterAtLocation_ReturnValue            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGCNStatic_MantisStrike_C::OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class USoundBase* LocalMantisStrikeImpactCue, class UParticleSystem* LocalP_MantisStrikeImpact, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNStatic_MantisStrike_C", "OnExecute");

	Params::GCNStatic_MantisStrike_C_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.LocalMantisStrikeImpactCue = LocalMantisStrikeImpactCue;
	Parms.LocalP_MantisStrikeImpact = LocalP_MantisStrikeImpact;
	Parms.CallFunc_MakeRotFromZ_ReturnValue = std::move(CallFunc_MakeRotFromZ_ReturnValue);
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


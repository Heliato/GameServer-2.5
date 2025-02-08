#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_NS_OnDmgDmgPulse

#include "Basic.hpp"

#include "GC_NS_OnDmgDmgPulse_classes.hpp"
#include "GC_NS_OnDmgDmgPulse_parameters.hpp"


namespace SDK
{

// Function GC_NS_OnDmgDmgPulse.GC_NS_OnDmgDmgPulse_C.OnStartParticleSystemSpawned
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*         SpawnedParticleSysComponent                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGC_NS_OnDmgDmgPulse_C::OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_NS_OnDmgDmgPulse_C", "OnStartParticleSystemSpawned");

	Params::GC_NS_OnDmgDmgPulse_C_OnStartParticleSystemSpawned Parms{};

	Parms.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

}


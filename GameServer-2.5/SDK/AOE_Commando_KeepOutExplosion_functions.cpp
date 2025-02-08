#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AOE_Commando_KeepOutExplosion

#include "Basic.hpp"

#include "AOE_Commando_KeepOutExplosion_classes.hpp"
#include "AOE_Commando_KeepOutExplosion_parameters.hpp"


namespace SDK
{

// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ExecuteUbergraph_AOE_Commando_KeepOutExplosion
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_CustomEvent_Radius                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAOE_Commando_KeepOutExplosion_C::ExecuteUbergraph_AOE_Commando_KeepOutExplosion(int32 EntryPoint, float K2Node_CustomEvent_Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "ExecuteUbergraph_AOE_Commando_KeepOutExplosion");

	Params::AOE_Commando_KeepOutExplosion_C_ExecuteUbergraph_AOE_Commando_KeepOutExplosion Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Radius = K2Node_CustomEvent_Radius;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAOE_Commando_KeepOutExplosion_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AAOE_Commando_KeepOutExplosion_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.Send_Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Radius                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAOE_Commando_KeepOutExplosion_C::Send_Info(float Param_Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "Send_Info");

	Params::AOE_Commando_KeepOutExplosion_C_Send_Info Parms{};

	Parms.Param_Radius = Param_Radius;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAOE_Commando_KeepOutExplosion_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.OnRep_Radius
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSoundAttenuationSettings        CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings()
// bool                                    CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_MakeVector_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSoundAttenuationSettings        K2Node_MakeStruct_SoundAttenuationSettings             ()

void AAOE_Commando_KeepOutExplosion_C::OnRep_Radius(const struct FSoundAttenuationSettings& CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings, bool CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FSoundAttenuationSettings& K2Node_MakeStruct_SoundAttenuationSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "OnRep_Radius");

	Params::AOE_Commando_KeepOutExplosion_C_OnRep_Radius Parms{};

	Parms.CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings = std::move(CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings);
	Parms.CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue = CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = std::move(CallFunc_MakeVector_ReturnValue);
	Parms.K2Node_MakeStruct_SoundAttenuationSettings = std::move(K2Node_MakeStruct_SoundAttenuationSettings);

	UObject::ProcessEvent(Func, &Parms);
}

}


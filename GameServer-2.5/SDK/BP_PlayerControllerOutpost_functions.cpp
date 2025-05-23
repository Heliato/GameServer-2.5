#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerControllerOutpost

#include "Basic.hpp"

#include "BP_PlayerControllerOutpost_classes.hpp"
#include "BP_PlayerControllerOutpost_parameters.hpp"


namespace SDK
{

// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.ExecuteUbergraph_BP_PlayerControllerOutpost
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_HasAuthority_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_CustomEvent_GetHelp                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerControllerOutpost_C::ExecuteUbergraph_BP_PlayerControllerOutpost(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_CustomEvent_GetHelp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerControllerOutpost_C", "ExecuteUbergraph_BP_PlayerControllerOutpost");

	Params::BP_PlayerControllerOutpost_C_ExecuteUbergraph_BP_PlayerControllerOutpost Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_GetHelp = K2Node_CustomEvent_GetHelp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.ServerStartExpandingOutpost
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_GetHelp                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerControllerOutpost_C::ServerStartExpandingOutpost(bool Param_GetHelp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerControllerOutpost_C", "ServerStartExpandingOutpost");

	Params::BP_PlayerControllerOutpost_C_ServerStartExpandingOutpost Parms{};

	Parms.Param_GetHelp = Param_GetHelp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerControllerOutpost_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerControllerOutpost_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}


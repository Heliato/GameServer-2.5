#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSessionId

#include "Basic.hpp"

#include "AthenaSessionId_classes.hpp"
#include "AthenaSessionId_parameters.hpp"


namespace SDK
{

// Function AthenaSessionId.AthenaSessionId_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaSessionId_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSessionId_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaSessionId.AthenaSessionId_C.ExecuteUbergraph_AthenaSessionId
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSessionId_C::ExecuteUbergraph_AthenaSessionId(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSessionId_C", "ExecuteUbergraph_AthenaSessionId");

	Params::AthenaSessionId_C_ExecuteUbergraph_AthenaSessionId Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaSessionId.AthenaSessionId_C.UpdateSessionId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*             CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_GetSessionId_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()

void UAthenaSessionId_C::UpdateSessionId(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetSessionId_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSessionId_C", "UpdateSessionId");

	Params::AthenaSessionId_C_UpdateSessionId Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSessionId_ReturnValue = std::move(CallFunc_GetSessionId_ReturnValue);
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}


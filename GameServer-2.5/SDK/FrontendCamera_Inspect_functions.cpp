#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontendCamera_Inspect

#include "Basic.hpp"

#include "FrontendCamera_Inspect_classes.hpp"
#include "FrontendCamera_Inspect_parameters.hpp"


namespace SDK
{

// Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.ExecuteUbergraph_FrontendCamera_Inspect
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATVPostProcessBP_C*>       CallFunc_GetAllActorsOfClass_OutActors                 (ZeroConstructor, ReferenceParm)
// class AFortTimeOfDayManager*            CallFunc_GetTimeOfDayManagerFromContext_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATVPostProcessBP_C*               CallFunc_Array_Get_Item                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AVaultCharacterLightingBP_C*>CallFunc_GetAllActorsOfClass_OutActors1                (ZeroConstructor, ReferenceParm)
// class AVaultCharacterLightingBP_C*      CallFunc_Array_Get_Item1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AVaultCharacterLightingBP_C*>CallFunc_GetAllActorsOfClass_OutActors12               (ZeroConstructor, ReferenceParm)
// class AVaultCharacterLightingBP_C*      CallFunc_Array_Get_Item12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontendCamera_Inspect_C::ExecuteUbergraph_FrontendCamera_Inspect(int32 EntryPoint, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, TArray<class AVaultCharacterLightingBP_C*>& CallFunc_GetAllActorsOfClass_OutActors1, class AVaultCharacterLightingBP_C* CallFunc_Array_Get_Item1, TArray<class AVaultCharacterLightingBP_C*>& CallFunc_GetAllActorsOfClass_OutActors12, class AVaultCharacterLightingBP_C* CallFunc_Array_Get_Item12)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendCamera_Inspect_C", "ExecuteUbergraph_FrontendCamera_Inspect");

	Params::FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = std::move(CallFunc_GetAllActorsOfClass_OutActors);
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAllActorsOfClass_OutActors1 = std::move(CallFunc_GetAllActorsOfClass_OutActors1);
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors12 = std::move(CallFunc_GetAllActorsOfClass_OutActors12);
	Parms.CallFunc_Array_Get_Item12 = CallFunc_Array_Get_Item12;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetAllActorsOfClass_OutActors = std::move(Parms.CallFunc_GetAllActorsOfClass_OutActors);
	CallFunc_GetAllActorsOfClass_OutActors1 = std::move(Parms.CallFunc_GetAllActorsOfClass_OutActors1);
	CallFunc_GetAllActorsOfClass_OutActors12 = std::move(Parms.CallFunc_GetAllActorsOfClass_OutActors12);
}


// Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.OnActivated
// (Event, Public, BlueprintEvent)

void AFrontendCamera_Inspect_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendCamera_Inspect_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.OnDeactivated
// (Event, Public, BlueprintEvent)

void AFrontendCamera_Inspect_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendCamera_Inspect_C", "OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFrontendCamera_Inspect_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendCamera_Inspect_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Hex_Outpost_Theater3

#include "Basic.hpp"

#include "BP_Hex_Outpost_Theater3_classes.hpp"
#include "BP_Hex_Outpost_Theater3_parameters.hpp"


namespace SDK
{

// Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.ExecuteUbergraph_BP_Hex_Outpost_Theater3
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(struct FUniqueNetIdRepl& UniqueId)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// struct FUniqueNetIdRepl                 K2Node_CustomEvent_UniqueId                            (ConstParm, HasGetValueTypeHash)
// class UMaterialInterface*               CallFunc_GetMaterial_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*         CallFunc_CreateDynamicMaterialInstance_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHomeBaseContext*                 CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Hex_Outpost_Theater3_C::ExecuteUbergraph_BP_Hex_Outpost_Theater3(int32 EntryPoint, TDelegate<void(struct FUniqueNetIdRepl& UniqueId)> K2Node_CreateDelegate_OutputDelegate, struct FUniqueNetIdRepl& K2Node_CustomEvent_UniqueId, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Hex_Outpost_Theater3_C", "ExecuteUbergraph_BP_Hex_Outpost_Theater3");

	Params::BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3 Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_UniqueId = std::move(K2Node_CustomEvent_UniqueId);
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.ActivateOutpost
// (BlueprintCallable, BlueprintEvent)

void ABP_Hex_Outpost_Theater3_C::ActivateOutpost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Hex_Outpost_Theater3_C", "ActivateOutpost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.HandleOnPlayerInfoChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 UniqueId                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ABP_Hex_Outpost_Theater3_C::HandleOnPlayerInfoChanged(struct FUniqueNetIdRepl& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Hex_Outpost_Theater3_C", "HandleOnPlayerInfoChanged");

	Params::BP_Hex_Outpost_Theater3_C_HandleOnPlayerInfoChanged Parms{};

	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Hex_Outpost_Theater3_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Hex_Outpost_Theater3_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Hex_Outpost_Theater3_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Hex_Outpost_Theater3_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}


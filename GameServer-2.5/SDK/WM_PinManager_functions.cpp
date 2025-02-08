#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WM_PinManager

#include "Basic.hpp"

#include "WM_PinManager_classes.hpp"
#include "WM_PinManager_parameters.hpp"


namespace SDK
{

// Function WM_PinManager.WM_PinManager_C.ExecuteUbergraph_WM_PinManager
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWM_PinManager_C::ExecuteUbergraph_WM_PinManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_PinManager_C", "ExecuteUbergraph_WM_PinManager");

	Params::WM_PinManager_C_ExecuteUbergraph_WM_PinManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WM_PinManager.WM_PinManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWM_PinManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_PinManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WM_PinManager.WM_PinManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWM_PinManager_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_PinManager_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WM_PinManager.WM_PinManager_C.CreateWorldMapPin
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           TheaterId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class AWorldMapPin*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       CallFunc_MakeTransform_ReturnValue                     (IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*             CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTheaterMapData              CallFunc_GetTheaterData_OutTheaterData                 ()
// bool                                    CallFunc_GetTheaterData_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWorldMapPin*                     CallFunc_FinishSpawningActor_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AWorldMapPin* AWM_PinManager_C::CreateWorldMapPin(const class FString& TheaterId, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, const struct FFortTheaterMapData& CallFunc_GetTheaterData_OutTheaterData, bool CallFunc_GetTheaterData_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AWorldMapPin* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_PinManager_C", "CreateWorldMapPin");

	Params::WM_PinManager_C_CreateWorldMapPin Parms{};

	Parms.TheaterId = std::move(TheaterId);
	Parms.CallFunc_MakeTransform_ReturnValue = std::move(CallFunc_MakeTransform_ReturnValue);
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetTheaterData_OutTheaterData = std::move(CallFunc_GetTheaterData_OutTheaterData);
	Parms.CallFunc_GetTheaterData_ReturnValue = CallFunc_GetTheaterData_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


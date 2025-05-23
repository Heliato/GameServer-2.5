#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ToastDisplayArea

#include "Basic.hpp"

#include "ToastDisplayArea_classes.hpp"
#include "ToastDisplayArea_parameters.hpp"


namespace SDK
{

// Function ToastDisplayArea.ToastDisplayArea_C.ExecuteUbergraph_ToastDisplayArea
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastDisplayArea_C::ExecuteUbergraph_ToastDisplayArea(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastDisplayArea_C", "ExecuteUbergraph_ToastDisplayArea");

	Params::ToastDisplayArea_C_ExecuteUbergraph_ToastDisplayArea Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToastDisplayArea.ToastDisplayArea_C.BndEvt__PowerToastWidget_K2Node_ComponentBoundEvent_8_OnFinishedToast__DelegateSignature
// (BlueprintEvent)

void UToastDisplayArea_C::BndEvt__PowerToastWidget_K2Node_ComponentBoundEvent_8_OnFinishedToast__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastDisplayArea_C", "BndEvt__PowerToastWidget_K2Node_ComponentBoundEvent_8_OnFinishedToast__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToastDisplayArea.ToastDisplayArea_C.BndEvt__ToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature
// (BlueprintEvent)

void UToastDisplayArea_C::BndEvt__ToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastDisplayArea_C", "BndEvt__ToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToastDisplayArea.ToastDisplayArea_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UToastDisplayArea_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastDisplayArea_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToastDisplayArea.ToastDisplayArea_C.HandleNewToastAvailable
// (BlueprintCallable, BlueprintEvent)

void UToastDisplayArea_C::HandleNewToastAvailable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastDisplayArea_C", "HandleNewToastAvailable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToastDisplayArea.ToastDisplayArea_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UToastDisplayArea_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastDisplayArea_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToastDisplayArea.ToastDisplayArea_C.RegisterToastHandler
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINotificationQueue*         CallFunc_GetUINotificationQueue_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastDisplayArea_C::RegisterToastHandler(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UFortUINotificationQueue* CallFunc_GetUINotificationQueue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastDisplayArea_C", "RegisterToastHandler");

	Params::ToastDisplayArea_C_RegisterToastHandler Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUINotificationQueue_ReturnValue = CallFunc_GetUINotificationQueue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToastDisplayArea.ToastDisplayArea_C.AttemptDisplayNextToast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*             CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESubGame                                CallFunc_GetSubGame_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINotification*              CallFunc_GetNextNotification_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UToastDisplayArea_C::AttemptDisplayNextToast(bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class UFortUINotification* CallFunc_GetNextNotification_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastDisplayArea_C", "AttemptDisplayNextToast");

	Params::ToastDisplayArea_C_AttemptDisplayNextToast Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_GetNextNotification_ReturnValue = CallFunc_GetNextNotification_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}


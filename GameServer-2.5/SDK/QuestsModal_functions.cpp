#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestsModal

#include "Basic.hpp"

#include "QuestsModal_classes.hpp"
#include "QuestsModal_parameters.hpp"


namespace SDK
{

// Function QuestsModal.QuestsModal_C.ExecuteUbergraph_QuestsModal
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(bool* bPassThrough)>     K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// class UCommonUIContext*                 CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*              CallFunc_GetInputManager_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestsModal_C::ExecuteUbergraph_QuestsModal(int32 EntryPoint, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestsModal_C", "ExecuteUbergraph_QuestsModal");

	Params::QuestsModal_C_ExecuteUbergraph_QuestsModal Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestsModal.QuestsModal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UQuestsModal_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestsModal_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestsModal.QuestsModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestsModal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestsModal_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestsModal.QuestsModal_C.ClosePanel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCommitted                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*                 CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*             CallFunc_GetContext_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*              CallFunc_GetInputManager_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*         CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestsModal_C::ClosePanel(bool* bCommitted, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestsModal_C", "ClosePanel");

	Params::QuestsModal_C_ClosePanel Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCommitted != nullptr)
		*bCommitted = Parms.bCommitted;
}

}


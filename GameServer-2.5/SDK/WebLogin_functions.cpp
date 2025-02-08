#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WebLogin

#include "Basic.hpp"

#include "WebLogin_classes.hpp"
#include "WebLogin_parameters.hpp"


namespace SDK
{

// Function WebLogin.WebLogin_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UWebLogin_C::BindDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WebLogin_C", "BindDelegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WebLogin.WebLogin_C.Dismiss
// (Public, BlueprintCallable, BlueprintEvent)

void UWebLogin_C::Dismiss()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WebLogin_C", "Dismiss");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WebLogin.WebLogin_C.Display
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          WebWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                       CallFunc_AddChild_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWebLogin_C::Display(class UWidget* WebWidget, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WebLogin_C", "Display");

	Params::WebLogin_C_Display Parms{};

	Parms.WebWidget = WebWidget;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WebLogin.WebLogin_C.ExecuteUbergraph_WebLogin
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWebLogin_C::ExecuteUbergraph_WebLogin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WebLogin_C", "ExecuteUbergraph_WebLogin");

	Params::WebLogin_C_ExecuteUbergraph_WebLogin Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WebLogin.WebLogin_C.HandleBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWebLogin_C::HandleBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WebLogin_C", "HandleBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WebLogin.WebLogin_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UWebLogin_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WebLogin_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WebLogin.WebLogin_C.OnLoginDialogDismissed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWebLogin_C::OnLoginDialogDismissed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WebLogin_C", "OnLoginDialogDismissed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}


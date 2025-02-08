#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LegalInfo

#include "Basic.hpp"

#include "LegalInfo_classes.hpp"
#include "LegalInfo_parameters.hpp"


namespace SDK
{

// Function LegalInfo.LegalInfo_C.ExecuteUbergraph_LegalInfo
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*                    K2Node_ComponentBoundEvent_Button                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(bool* bPassThrough)>     K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// class UWidget*                          K2Node_ComponentBoundEvent_ActiveWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   K2Node_ComponentBoundEvent_ActiveWidgetIndex           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             K2Node_ComponentBoundEvent_TabId                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*                    K2Node_ComponentBoundEvent_TabButton                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEulaTab_C*                       K2Node_DynamicCast_AsEula_Tab                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIconTextButton_C*                K2Node_DynamicCast_AsIcon_Text_Button                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UThirdPartyTab_C*                 K2Node_DynamicCast_AsThird_Party_Tab                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess12                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*         CallFunc_GetUINavigationManager_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*         CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegalInfo_C::ExecuteUbergraph_LegalInfo(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UEulaTab_C* K2Node_DynamicCast_AsEula_Tab, bool K2Node_DynamicCast_bSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess1, class UThirdPartyTab_C* K2Node_DynamicCast_AsThird_Party_Tab, bool K2Node_DynamicCast_bSuccess12, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegalInfo_C", "ExecuteUbergraph_LegalInfo");

	Params::LegalInfo_C_ExecuteUbergraph_LegalInfo Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_ActiveWidget = K2Node_ComponentBoundEvent_ActiveWidget;
	Parms.K2Node_ComponentBoundEvent_ActiveWidgetIndex = K2Node_ComponentBoundEvent_ActiveWidgetIndex;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.K2Node_DynamicCast_AsEula_Tab = K2Node_DynamicCast_AsEula_Tab;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsThird_Party_Tab = K2Node_DynamicCast_AsThird_Party_Tab;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegalInfo.LegalInfo_C.BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             TabId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*                    TabButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegalInfo_C::BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegalInfo_C", "BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature");

	Params::LegalInfo_C_BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature Parms{};

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegalInfo.LegalInfo_C.BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                          ActiveWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ActiveWidgetIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegalInfo_C::BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegalInfo_C", "BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature");

	Params::LegalInfo_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature Parms{};

	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegalInfo.LegalInfo_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegalInfo_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegalInfo_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature");

	Params::LegalInfo_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegalInfo.LegalInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULegalInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegalInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegalInfo.LegalInfo_C.On Scroll Down
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Passthrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegalInfo_C::On_Scroll_Down(bool* Passthrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegalInfo_C", "On Scroll Down");

	Params::LegalInfo_C_On_Scroll_Down Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;
}

}


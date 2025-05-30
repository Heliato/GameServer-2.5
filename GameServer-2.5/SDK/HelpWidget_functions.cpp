#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HelpWidget

#include "Basic.hpp"

#include "HelpWidget_classes.hpp"
#include "HelpWidget_parameters.hpp"


namespace SDK
{

// Function HelpWidget.HelpWidget_C.ExecuteUbergraph_HelpWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*         CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*                    K2Node_ComponentBoundEvent_Button                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpWidget_C::ExecuteUbergraph_HelpWidget(int32 EntryPoint, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HelpWidget_C", "ExecuteUbergraph_HelpWidget");

	Params::HelpWidget_C_ExecuteUbergraph_HelpWidget Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HelpWidget.HelpWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHelpWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HelpWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HelpWidget.HelpWidget_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpWidget_C::BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HelpWidget_C", "BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature");

	Params::HelpWidget_C_BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HelpWidget.HelpWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InTitle                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InDescription                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InStep1_Text                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InStep2_Text                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InStep3_Text                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                       InStep1_Picture                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       InStep2_Picture                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       InStep3_Picture                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InNumOfSteps                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable123                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_IntInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Greater_IntInt_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select1_Default                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpWidget_C::Init(class FText InTitle, class FText InDescription, class FText InStep1_Text, class FText InStep2_Text, class FText InStep3_Text, class UTexture2D* InStep1_Picture, class UTexture2D* InStep2_Picture, class UTexture2D* InStep3_Picture, int32 InNumOfSteps, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, ESlateVisibility Temp_byte_Variable12, ESlateVisibility Temp_byte_Variable123, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HelpWidget_C", "Init");

	Params::HelpWidget_C_Init Parms{};

	Parms.InTitle = InTitle;
	Parms.InDescription = InDescription;
	Parms.InStep1_Text = InStep1_Text;
	Parms.InStep2_Text = InStep2_Text;
	Parms.InStep3_Text = InStep3_Text;
	Parms.InStep1_Picture = InStep1_Picture;
	Parms.InStep2_Picture = InStep2_Picture;
	Parms.InStep3_Picture = InStep3_Picture;
	Parms.InNumOfSteps = InNumOfSteps;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}

}


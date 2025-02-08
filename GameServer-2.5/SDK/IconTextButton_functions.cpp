#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IconTextButton

#include "Basic.hpp"

#include "IconTextButton_classes.hpp"
#include "IconTextButton_parameters.hpp"


namespace SDK
{

// Function IconTextButton.IconTextButton_C.ExecuteUbergraph_IconTextButton
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*                 CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsUsingGamepad_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*                 CallFunc_GetContext_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsUsingGamepad_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_HasAnyChildren_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo          K2Node_Event_TabLabelInfo                              (ConstParm)
// bool                                    K2Node_ComponentBoundEvent_bUsingGamepad               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle              K2Node_Event_NewTriggeredAction                        (ConstParm, NoDestructor)
// float                                   K2Node_Event_HeldPercent                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable123                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_SlateBrush_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        K2Node_Select1_Default                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTextButton_C::ExecuteUbergraph_IconTextButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsUsingGamepad_ReturnValue1, bool CallFunc_HasAnyChildren_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, bool K2Node_ComponentBoundEvent_bUsingGamepad, struct FDataTableRowHandle& K2Node_Event_NewTriggeredAction, float K2Node_Event_HeldPercent, ESlateVisibility Temp_byte_Variable12, ESlateVisibility Temp_byte_Variable123, bool Temp_bool_Variable1, ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_SlateBrush_ReturnValue, ESlateVisibility K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "ExecuteUbergraph_IconTextButton");

	Params::IconTextButton_C_ExecuteUbergraph_IconTextButton Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_IsUsingGamepad_ReturnValue1 = CallFunc_IsUsingGamepad_ReturnValue1;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_TabLabelInfo = std::move(K2Node_Event_TabLabelInfo);
	Parms.K2Node_ComponentBoundEvent_bUsingGamepad = K2Node_ComponentBoundEvent_bUsingGamepad;
	Parms.K2Node_Event_NewTriggeredAction = std::move(K2Node_Event_NewTriggeredAction);
	Parms.K2Node_Event_HeldPercent = K2Node_Event_HeldPercent;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_SlateBrush_ReturnValue = CallFunc_EqualEqual_SlateBrush_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconTextButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconTextButton.IconTextButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconTextButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconTextButton.IconTextButton_C.OnActionComplete
// (Event, Protected, BlueprintEvent)

void UIconTextButton_C::OnActionComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "OnActionComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconTextButton.IconTextButton_C.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   HeldPercent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTextButton_C::OnActionProgress(float HeldPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "OnActionProgress");

	Params::IconTextButton_C_OnActionProgress Parms{};

	Parms.HeldPercent = HeldPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle              NewTriggeredAction                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UIconTextButton_C::OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "OnTriggeredInputActionChanged");

	Params::IconTextButton_C_OnTriggeredInputActionChanged Parms{};

	Parms.NewTriggeredAction = std::move(NewTriggeredAction);

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTextButton_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::IconTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.SetTabLabelInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo          TabLabelInfo                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UIconTextButton_C::SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "SetTabLabelInfo");

	Params::IconTextButton_C_SetTabLabelInfo Parms{};

	Parms.TabLabelInfo = std::move(TabLabelInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTextButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "PreConstruct");

	Params::IconTextButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UIconTextButton_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "OnCurrentTextStyleChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconTextButton.IconTextButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_ButtonText                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTextButton_C::Set_Text(class FText Param_ButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "Set Text");

	Params::IconTextButton_C_Set_Text Parms{};

	Parms.Param_ButtonText = Param_ButtonText;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                      Param_IconBrush                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTextButton_C::Set_Icon(const struct FSlateBrush& Param_IconBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "Set Icon");

	Params::IconTextButton_C_Set_Icon Parms{};

	Parms.Param_IconBrush = std::move(Param_IconBrush);

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.InitializeButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          CallFunc_GetBrushResource_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTextButton_C::InitializeButton(class UObject* CallFunc_GetBrushResource_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "InitializeButton");

	Params::IconTextButton_C_InitializeButton Parms{};

	Parms.CallFunc_GetBrushResource_ReturnValue = CallFunc_GetBrushResource_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.UpdateTextAndStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTextButton_C::UpdateTextAndStyle(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "UpdateTextAndStyle");

	Params::IconTextButton_C_UpdateTextAndStyle Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.SetControllerStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Param_ControllerInputStyle                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*                 CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsUsingGamepad_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTextButton_C::SetControllerStyle(class UClass* Param_ControllerInputStyle, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "SetControllerStyle");

	Params::IconTextButton_C_SetControllerStyle Parms{};

	Parms.Param_ControllerInputStyle = Param_ControllerInputStyle;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_TextIsEmpty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             CallFunc_GetDisplayText_ReturnValue                    ()
// class FText                             K2Node_Select_Default                                  ()
// bool                                    CallFunc_TextIsEmpty_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             K2Node_Select1_Default                                 ()

void UIconTextButton_C::UpdateText(bool Temp_bool_Variable, bool Temp_bool_Variable1, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_GetDisplayText_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_TextIsEmpty_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "UpdateText");

	Params::IconTextButton_C_UpdateText Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_GetDisplayText_ReturnValue = CallFunc_GetDisplayText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_TextIsEmpty_ReturnValue1 = CallFunc_TextIsEmpty_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UsingGamepad                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTextButton_C::UpdateStyle(bool UsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "UpdateStyle");

	Params::IconTextButton_C_UpdateStyle Parms{};

	Parms.UsingGamepad = UsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.SetMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Param_ControllerInputStyle                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*                 CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsUsingGamepad_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTextButton_C::SetMouseKeyboardStyle(class UClass* Param_ControllerInputStyle, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "SetMouseKeyboardStyle");

	Params::IconTextButton_C_SetMouseKeyboardStyle Parms{};

	Parms.Param_ControllerInputStyle = Param_ControllerInputStyle;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.UpdateContentAlignment
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelSlot*                       CallFunc_GetContentSlot_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBorderSlot*                      K2Node_DynamicCast_AsBorder_Slot                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTextButton_C::UpdateContentAlignment(class UPanelSlot* CallFunc_GetContentSlot_ReturnValue, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "UpdateContentAlignment");

	Params::IconTextButton_C_UpdateContentAlignment Parms{};

	Parms.CallFunc_GetContentSlot_ReturnValue = CallFunc_GetContentSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsBorder_Slot = K2Node_DynamicCast_AsBorder_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.SetContentAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EHorizontalAlignment                    Param_ContentAlignment                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTextButton_C::SetContentAlignment(EHorizontalAlignment Param_ContentAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "SetContentAlignment");

	Params::IconTextButton_C_SetContentAlignment Parms{};

	Parms.Param_ContentAlignment = Param_ContentAlignment;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.UpdateTextStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           CallFunc_GetCurrentTextStyleClass_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTextButton_C::UpdateTextStyle(class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "UpdateTextStyle");

	Params::IconTextButton_C_UpdateTextStyle Parms{};

	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue = CallFunc_GetCurrentTextStyleClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.SetInitialMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UIconTextButton_C::SetInitialMouseKeyboardStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "SetInitialMouseKeyboardStyle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconTextButton.IconTextButton_C.SetTextInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InButtonText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_TextIsEmpty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTextButton_C::SetTextInternal(class FText InButtonText, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, bool CallFunc_TextIsEmpty_ReturnValue, ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "SetTextInternal");

	Params::IconTextButton_C_SetTextInternal Parms{};

	Parms.InButtonText = InButtonText;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}

}


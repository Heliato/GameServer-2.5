#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AlterationWidget

#include "Basic.hpp"

#include "AlterationWidget_classes.hpp"
#include "AlterationWidget_parameters.hpp"


namespace SDK
{

// Function AlterationWidget.AlterationWidget_C.ExecuteUbergraph_AlterationWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_ShouldFadeAlteration_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     K2Node_MakeStruct_LinearColor                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationWidget_C::ExecuteUbergraph_AlterationWidget(int32 EntryPoint, bool CallFunc_ShouldFadeAlteration_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "ExecuteUbergraph_AlterationWidget");

	Params::AlterationWidget_C_ExecuteUbergraph_AlterationWidget Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ShouldFadeAlteration_ReturnValue = CallFunc_ShouldFadeAlteration_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = std::move(K2Node_MakeStruct_LinearColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AlterationWidget.AlterationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAlterationWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AlterationWidget.AlterationWidget_C.GetHighlightColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     Temp_struct_Variable                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsAlterationHighlighted_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     CallFunc_Get_Buff_Color_Color                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     K2Node_Select_Default                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UAlterationWidget_C::GetHighlightColor(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, bool CallFunc_IsAlterationHighlighted_ReturnValue, const struct FLinearColor& CallFunc_Get_Buff_Color_Color, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "GetHighlightColor");

	Params::AlterationWidget_C_GetHighlightColor Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.CallFunc_IsAlterationHighlighted_ReturnValue = CallFunc_IsAlterationHighlighted_ReturnValue;
	Parms.CallFunc_Get_Buff_Color_Color = std::move(CallFunc_Get_Buff_Color_Color);
	Parms.K2Node_Select_Default = std::move(K2Node_Select_Default);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AlterationWidget.AlterationWidget_C.ShouldFadeAlteration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsAlterationHighlighted_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsAlterationUnlocked_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Not_PreBool_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAlterationWidget_C::ShouldFadeAlteration(bool CallFunc_IsAlterationHighlighted_ReturnValue, bool CallFunc_IsAlterationUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "ShouldFadeAlteration");

	Params::AlterationWidget_C_ShouldFadeAlteration Parms{};

	Parms.CallFunc_IsAlterationHighlighted_ReturnValue = CallFunc_IsAlterationHighlighted_ReturnValue;
	Parms.CallFunc_IsAlterationUnlocked_ReturnValue = CallFunc_IsAlterationUnlocked_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AlterationWidget.AlterationWidget_C.InitIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                      CallFunc_ResizeBrush_NewParam                          ()
// class UFortAlterationItemDefinition*    CallFunc_GetAlterationDefintion_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                      CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue()

void UAlterationWidget_C::InitIcon(const struct FSlateBrush& CallFunc_ResizeBrush_NewParam, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "InitIcon");

	Params::AlterationWidget_C_InitIcon Parms{};

	Parms.CallFunc_ResizeBrush_NewParam = std::move(CallFunc_ResizeBrush_NewParam);
	Parms.CallFunc_GetAlterationDefintion_ReturnValue = CallFunc_GetAlterationDefintion_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue = std::move(CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AlterationWidget.AlterationWidget_C.InitText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAlterationItemDefinition*    CallFunc_GetAlterationDefintion_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_GetShortDescription_ReturnValue               ()
// bool                                    CallFunc_ShouldFadeAlteration_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAlterationItemDefinition*    CallFunc_GetAlterationDefintion_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_GetSingleLineDescription_ReturnValue          ()
// class UFortAlterationItemDefinition*    CallFunc_GetAlterationDefintion_ReturnValue12          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_GetDisplayName_ReturnValue                    ()
// TScriptInterface<class IFortClientAnnouncement_TutorialInterface>K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationWidget_C::InitText(class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, bool CallFunc_ShouldFadeAlteration_ReturnValue, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue1, class FText CallFunc_GetSingleLineDescription_ReturnValue, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue12, class FText CallFunc_GetDisplayName_ReturnValue, TScriptInterface<class IFortClientAnnouncement_TutorialInterface> K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "InitText");

	Params::AlterationWidget_C_InitText Parms{};

	Parms.CallFunc_GetAlterationDefintion_ReturnValue = CallFunc_GetAlterationDefintion_ReturnValue;
	Parms.CallFunc_GetShortDescription_ReturnValue = CallFunc_GetShortDescription_ReturnValue;
	Parms.CallFunc_ShouldFadeAlteration_ReturnValue = CallFunc_ShouldFadeAlteration_ReturnValue;
	Parms.CallFunc_GetAlterationDefintion_ReturnValue1 = CallFunc_GetAlterationDefintion_ReturnValue1;
	Parms.CallFunc_GetSingleLineDescription_ReturnValue = CallFunc_GetSingleLineDescription_ReturnValue;
	Parms.CallFunc_GetAlterationDefintion_ReturnValue12 = CallFunc_GetAlterationDefintion_ReturnValue12;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface = K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AlterationWidget.AlterationWidget_C.SetLevelText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                      K2Node_MakeStruct_SlateColor                           ()
// bool                                    CallFunc_IsAlterationHighlighted_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     CallFunc_GetHighlightColor_ReturnValue                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                      K2Node_MakeStruct_SlateColor1                          ()
// int32                                   CallFunc_GetRequiredLevel_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                      K2Node_Select_Default                                  ()
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ZeroConstructor, ReferenceParm)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             CallFunc_Format_ReturnValue                            ()
// ESlateVisibility                        K2Node_Select1_Default                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_IntToText_ReturnValue                    ()

void UAlterationWidget_C::SetLevelText(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsAlterationHighlighted_ReturnValue, const struct FLinearColor& CallFunc_GetHighlightColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, int32 CallFunc_GetRequiredLevel_ReturnValue, const struct FSlateColor& K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, ESlateVisibility K2Node_Select1_Default, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "SetLevelText");

	Params::AlterationWidget_C_SetLevelText Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_MakeStruct_SlateColor = std::move(K2Node_MakeStruct_SlateColor);
	Parms.CallFunc_IsAlterationHighlighted_ReturnValue = CallFunc_IsAlterationHighlighted_ReturnValue;
	Parms.CallFunc_GetHighlightColor_ReturnValue = std::move(CallFunc_GetHighlightColor_ReturnValue);
	Parms.K2Node_MakeStruct_SlateColor1 = std::move(K2Node_MakeStruct_SlateColor1);
	Parms.CallFunc_GetRequiredLevel_ReturnValue = CallFunc_GetRequiredLevel_ReturnValue;
	Parms.K2Node_Select_Default = std::move(K2Node_Select_Default);
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
}


// Function AlterationWidget.AlterationWidget_C.UpdateRaritySwitcherVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Conv_ByteToInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsAlterationUnlocked_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                          K2Node_Select1_Default                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationWidget_C::UpdateRaritySwitcherVisiblity(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, ESlateVisibility K2Node_Select_Default, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_IsAlterationUnlocked_ReturnValue, bool Temp_bool_Variable1, class UWidget* K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "UpdateRaritySwitcherVisiblity");

	Params::AlterationWidget_C_UpdateRaritySwitcherVisiblity Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_IsAlterationUnlocked_ReturnValue = CallFunc_IsAlterationUnlocked_ReturnValue;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AlterationWidget.AlterationWidget_C.SetEvolutionDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsAlterationHighlighted_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationWidget_C::SetEvolutionDetails(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, bool CallFunc_IsAlterationHighlighted_ReturnValue, ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "SetEvolutionDetails");

	Params::AlterationWidget_C_SetEvolutionDetails Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_IsAlterationHighlighted_ReturnValue = CallFunc_IsAlterationHighlighted_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}

}


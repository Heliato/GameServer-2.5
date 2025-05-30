#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PowerWidget

#include "Basic.hpp"

#include "PowerWidget_classes.hpp"
#include "PowerWidget_parameters.hpp"


namespace SDK
{

// Function PowerWidget.PowerWidget_C.Power Increased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPowerWidget_C::Power_Increased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerWidget_C", "Power Increased__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PowerWidget.PowerWidget_C.ExecuteUbergraph_PowerWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTeamMemberInfo              K2Node_Event_NewInfo                                   ()
// class UFortPartyContext*                CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_SetState_PassThrough                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// EFortPartyMemberDisplayState            CallFunc_GetPartyMemberDisplayState_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_SetState_PassThrough1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                      K2Node_MakeStruct_SlateBrush                           ()

void UPowerWidget_C::ExecuteUbergraph_PowerWidget(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, const struct FFortTeamMemberInfo& K2Node_Event_NewInfo, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_SetState_PassThrough, EFortPartyMemberDisplayState CallFunc_GetPartyMemberDisplayState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime, bool CallFunc_SetState_PassThrough1, ESlateVisibility K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerWidget_C", "ExecuteUbergraph_PowerWidget");

	Params::PowerWidget_C_ExecuteUbergraph_PowerWidget Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Event_NewInfo = std::move(K2Node_Event_NewInfo);
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_SetState_PassThrough = CallFunc_SetState_PassThrough;
	Parms.CallFunc_GetPartyMemberDisplayState_ReturnValue = CallFunc_GetPartyMemberDisplayState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SetState_PassThrough1 = CallFunc_SetState_PassThrough1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = std::move(K2Node_MakeStruct_SlateBrush);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerWidget.PowerWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPowerWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PowerWidget.PowerWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerWidget_C", "PreConstruct");

	Params::PowerWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerWidget.PowerWidget_C.OnPlayerInfoChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              NewInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UPowerWidget_C::OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerWidget_C", "OnPlayerInfoChanged");

	Params::PowerWidget_C_OnPlayerInfoChanged Parms{};

	Parms.NewInfo = std::move(NewInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerWidget.PowerWidget_C.Update Rating Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CallFunc_GetHomebaseRating_Rating                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetHomebaseRating_ProgressFraction            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetHomebaseRating_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ZeroConstructor, ReferenceParm)
// bool                                    CallFunc_Greater_FloatFloat_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             CallFunc_Format_ReturnValue                            ()
// int32                                   CallFunc_GetModifiedHomebaseRating_Rating              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetModifiedHomebaseRating_ProgressFraction    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetModifiedHomebaseRating_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_GetHomebaseRating_Rating1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetHomebaseRating_ProgressFraction1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetHomebaseRating_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_Conv_IntToFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Conv_IntToFloat_ReturnValue1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Conv_IntToFloat_ReturnValue12                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Conv_IntToFloat_ReturnValue123                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_PlayerHasTeammates_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Greater_FloatFloat_ReturnValue1               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerWidget_C::Update_Rating_Value(int32 CallFunc_GetHomebaseRating_Rating, float CallFunc_GetHomebaseRating_ProgressFraction, bool CallFunc_GetHomebaseRating_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_FloatFloat_ReturnValue, class FText CallFunc_Format_ReturnValue, int32 CallFunc_GetModifiedHomebaseRating_Rating, float CallFunc_GetModifiedHomebaseRating_ProgressFraction, bool CallFunc_GetModifiedHomebaseRating_ReturnValue, int32 CallFunc_GetHomebaseRating_Rating1, float CallFunc_GetHomebaseRating_ProgressFraction1, bool CallFunc_GetHomebaseRating_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue12, float CallFunc_Conv_IntToFloat_ReturnValue123, bool CallFunc_PlayerHasTeammates_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerWidget_C", "Update Rating Value");

	Params::PowerWidget_C_Update_Rating_Value Parms{};

	Parms.CallFunc_GetHomebaseRating_Rating = CallFunc_GetHomebaseRating_Rating;
	Parms.CallFunc_GetHomebaseRating_ProgressFraction = CallFunc_GetHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetHomebaseRating_ReturnValue = CallFunc_GetHomebaseRating_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetModifiedHomebaseRating_Rating = CallFunc_GetModifiedHomebaseRating_Rating;
	Parms.CallFunc_GetModifiedHomebaseRating_ProgressFraction = CallFunc_GetModifiedHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetModifiedHomebaseRating_ReturnValue = CallFunc_GetModifiedHomebaseRating_ReturnValue;
	Parms.CallFunc_GetHomebaseRating_Rating1 = CallFunc_GetHomebaseRating_Rating1;
	Parms.CallFunc_GetHomebaseRating_ProgressFraction1 = CallFunc_GetHomebaseRating_ProgressFraction1;
	Parms.CallFunc_GetHomebaseRating_ReturnValue1 = CallFunc_GetHomebaseRating_ReturnValue1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue12 = CallFunc_Conv_IntToFloat_ReturnValue12;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue123 = CallFunc_Conv_IntToFloat_ReturnValue123;
	Parms.CallFunc_PlayerHasTeammates_ReturnValue = CallFunc_PlayerHasTeammates_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1 = CallFunc_Greater_FloatFloat_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
}


// Function PowerWidget.PowerWidget_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsIncreasing                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   NewProgressValue                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewRatingValue                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetHomebaseRating_Rating                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetHomebaseRating_ProgressFraction            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetHomebaseRating_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_GetHomebaseRating_Rating1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetHomebaseRating_ProgressFraction1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetHomebaseRating_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_GetModifiedHomebaseRating_Rating              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetModifiedHomebaseRating_ProgressFraction    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetModifiedHomebaseRating_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_GetModifiedHomebaseRating_Rating1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetModifiedHomebaseRating_ProgressFraction1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetModifiedHomebaseRating_ReturnValue1        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_GetHomebaseRating_Rating12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetHomebaseRating_ProgressFraction12          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetHomebaseRating_ReturnValue12               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_Subtract_FloatFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetModifiedHomebaseRating_Rating12            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetModifiedHomebaseRating_ProgressFraction12  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetModifiedHomebaseRating_ReturnValue12       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_PlayerHasTeammates_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerWidget_C::UpdateProgress(bool IsIncreasing, float NewProgressValue, int32 NewRatingValue, int32 CallFunc_GetHomebaseRating_Rating, float CallFunc_GetHomebaseRating_ProgressFraction, bool CallFunc_GetHomebaseRating_ReturnValue, int32 CallFunc_GetHomebaseRating_Rating1, float CallFunc_GetHomebaseRating_ProgressFraction1, bool CallFunc_GetHomebaseRating_ReturnValue1, int32 CallFunc_GetModifiedHomebaseRating_Rating, float CallFunc_GetModifiedHomebaseRating_ProgressFraction, bool CallFunc_GetModifiedHomebaseRating_ReturnValue, int32 CallFunc_GetModifiedHomebaseRating_Rating1, float CallFunc_GetModifiedHomebaseRating_ProgressFraction1, bool CallFunc_GetModifiedHomebaseRating_ReturnValue1, int32 CallFunc_GetHomebaseRating_Rating12, float CallFunc_GetHomebaseRating_ProgressFraction12, bool CallFunc_GetHomebaseRating_ReturnValue12, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_GetModifiedHomebaseRating_Rating12, float CallFunc_GetModifiedHomebaseRating_ProgressFraction12, bool CallFunc_GetModifiedHomebaseRating_ReturnValue12, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_PlayerHasTeammates_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerWidget_C", "UpdateProgress");

	Params::PowerWidget_C_UpdateProgress Parms{};

	Parms.IsIncreasing = IsIncreasing;
	Parms.NewProgressValue = NewProgressValue;
	Parms.NewRatingValue = NewRatingValue;
	Parms.CallFunc_GetHomebaseRating_Rating = CallFunc_GetHomebaseRating_Rating;
	Parms.CallFunc_GetHomebaseRating_ProgressFraction = CallFunc_GetHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetHomebaseRating_ReturnValue = CallFunc_GetHomebaseRating_ReturnValue;
	Parms.CallFunc_GetHomebaseRating_Rating1 = CallFunc_GetHomebaseRating_Rating1;
	Parms.CallFunc_GetHomebaseRating_ProgressFraction1 = CallFunc_GetHomebaseRating_ProgressFraction1;
	Parms.CallFunc_GetHomebaseRating_ReturnValue1 = CallFunc_GetHomebaseRating_ReturnValue1;
	Parms.CallFunc_GetModifiedHomebaseRating_Rating = CallFunc_GetModifiedHomebaseRating_Rating;
	Parms.CallFunc_GetModifiedHomebaseRating_ProgressFraction = CallFunc_GetModifiedHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetModifiedHomebaseRating_ReturnValue = CallFunc_GetModifiedHomebaseRating_ReturnValue;
	Parms.CallFunc_GetModifiedHomebaseRating_Rating1 = CallFunc_GetModifiedHomebaseRating_Rating1;
	Parms.CallFunc_GetModifiedHomebaseRating_ProgressFraction1 = CallFunc_GetModifiedHomebaseRating_ProgressFraction1;
	Parms.CallFunc_GetModifiedHomebaseRating_ReturnValue1 = CallFunc_GetModifiedHomebaseRating_ReturnValue1;
	Parms.CallFunc_GetHomebaseRating_Rating12 = CallFunc_GetHomebaseRating_Rating12;
	Parms.CallFunc_GetHomebaseRating_ProgressFraction12 = CallFunc_GetHomebaseRating_ProgressFraction12;
	Parms.CallFunc_GetHomebaseRating_ReturnValue12 = CallFunc_GetHomebaseRating_ReturnValue12;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetModifiedHomebaseRating_Rating12 = CallFunc_GetModifiedHomebaseRating_Rating12;
	Parms.CallFunc_GetModifiedHomebaseRating_ProgressFraction12 = CallFunc_GetModifiedHomebaseRating_ProgressFraction12;
	Parms.CallFunc_GetModifiedHomebaseRating_ReturnValue12 = CallFunc_GetModifiedHomebaseRating_ReturnValue12;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_PlayerHasTeammates_ReturnValue = CallFunc_PlayerHasTeammates_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerWidget.PowerWidget_C.SetState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Passthrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                      K2Node_MakeStruct_SlateBrush                           ()
// struct FSlateBrush                      K2Node_MakeStruct_SlateBrush1                          ()
// struct FSlateBrush                      K2Node_MakeStruct_SlateBrush12                         ()
// struct FSlateBrush                      K2Node_MakeStruct_SlateBrush123                        ()
// bool                                    CallFunc_PlayerHasTeammates_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerWidget_C::SetState(bool* Passthrough, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush12, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush123, bool CallFunc_PlayerHasTeammates_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerWidget_C", "SetState");

	Params::PowerWidget_C_SetState Parms{};

	Parms.K2Node_MakeStruct_SlateBrush = std::move(K2Node_MakeStruct_SlateBrush);
	Parms.K2Node_MakeStruct_SlateBrush1 = std::move(K2Node_MakeStruct_SlateBrush1);
	Parms.K2Node_MakeStruct_SlateBrush12 = std::move(K2Node_MakeStruct_SlateBrush12);
	Parms.K2Node_MakeStruct_SlateBrush123 = std::move(K2Node_MakeStruct_SlateBrush123);
	Parms.CallFunc_PlayerHasTeammates_ReturnValue = CallFunc_PlayerHasTeammates_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;
}


// Function PowerWidget.PowerWidget_C.Debug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHomeBaseContext*                 CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetHomebaseRating_Rating                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetHomebaseRating_ProgressFraction            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetHomebaseRating_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_GetModifiedHomebaseRating_Rating              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetModifiedHomebaseRating_ProgressFraction    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetModifiedHomebaseRating_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             CallFunc_Conv_BoolToText_ReturnValue                   ()
// class FText                             CallFunc_Conv_BoolToText_ReturnValue1                  ()
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData1                  (HasGetValueTypeHash)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData12                 (HasGetValueTypeHash)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData123                (HasGetValueTypeHash)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData1234               (HasGetValueTypeHash)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData12345              (HasGetValueTypeHash)
// int32                                   CallFunc_GetTotalHomebaseRating_Rating                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetTotalHomebaseRating_ProgressFraction       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetTotalHomebaseRating_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData123456             (HasGetValueTypeHash)
// class FText                             CallFunc_Conv_BoolToText_ReturnValue12                 ()
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData1234567            (HasGetValueTypeHash)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData12345678           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ZeroConstructor, ReferenceParm)
// class FText                             CallFunc_Format_ReturnValue                            ()
// class FString                           CallFunc_Conv_TextToString_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)

void UPowerWidget_C::Debug(class UHomeBaseContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetHomebaseRating_Rating, float CallFunc_GetHomebaseRating_ProgressFraction, bool CallFunc_GetHomebaseRating_ReturnValue, int32 CallFunc_GetModifiedHomebaseRating_Rating, float CallFunc_GetModifiedHomebaseRating_ProgressFraction, bool CallFunc_GetModifiedHomebaseRating_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData12, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData123, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1234, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData12345, int32 CallFunc_GetTotalHomebaseRating_Rating, float CallFunc_GetTotalHomebaseRating_ProgressFraction, bool CallFunc_GetTotalHomebaseRating_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData123456, class FText CallFunc_Conv_BoolToText_ReturnValue12, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1234567, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData12345678, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerWidget_C", "Debug");

	Params::PowerWidget_C_Debug Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetHomebaseRating_Rating = CallFunc_GetHomebaseRating_Rating;
	Parms.CallFunc_GetHomebaseRating_ProgressFraction = CallFunc_GetHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetHomebaseRating_ReturnValue = CallFunc_GetHomebaseRating_ReturnValue;
	Parms.CallFunc_GetModifiedHomebaseRating_Rating = CallFunc_GetModifiedHomebaseRating_Rating;
	Parms.CallFunc_GetModifiedHomebaseRating_ProgressFraction = CallFunc_GetModifiedHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetModifiedHomebaseRating_ReturnValue = CallFunc_GetModifiedHomebaseRating_ReturnValue;
	Parms.CallFunc_Conv_BoolToText_ReturnValue = CallFunc_Conv_BoolToText_ReturnValue;
	Parms.CallFunc_Conv_BoolToText_ReturnValue1 = CallFunc_Conv_BoolToText_ReturnValue1;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.K2Node_MakeStruct_FormatArgumentData1 = std::move(K2Node_MakeStruct_FormatArgumentData1);
	Parms.K2Node_MakeStruct_FormatArgumentData12 = std::move(K2Node_MakeStruct_FormatArgumentData12);
	Parms.K2Node_MakeStruct_FormatArgumentData123 = std::move(K2Node_MakeStruct_FormatArgumentData123);
	Parms.K2Node_MakeStruct_FormatArgumentData1234 = std::move(K2Node_MakeStruct_FormatArgumentData1234);
	Parms.K2Node_MakeStruct_FormatArgumentData12345 = std::move(K2Node_MakeStruct_FormatArgumentData12345);
	Parms.CallFunc_GetTotalHomebaseRating_Rating = CallFunc_GetTotalHomebaseRating_Rating;
	Parms.CallFunc_GetTotalHomebaseRating_ProgressFraction = CallFunc_GetTotalHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetTotalHomebaseRating_ReturnValue = CallFunc_GetTotalHomebaseRating_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData123456 = std::move(K2Node_MakeStruct_FormatArgumentData123456);
	Parms.CallFunc_Conv_BoolToText_ReturnValue12 = CallFunc_Conv_BoolToText_ReturnValue12;
	Parms.K2Node_MakeStruct_FormatArgumentData1234567 = std::move(K2Node_MakeStruct_FormatArgumentData1234567);
	Parms.K2Node_MakeStruct_FormatArgumentData12345678 = std::move(K2Node_MakeStruct_FormatArgumentData12345678);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = std::move(CallFunc_Conv_TextToString_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
}


// Function PowerWidget.PowerWidget_C.PlayerHasTeammates
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortPartyContext*                CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*                  CallFunc_GetLocalPlayerTeam_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FUniqueNetIdRepl>         CallFunc_GetTeamMemberIDs_TeamMemberIDs                (ZeroConstructor, ReferenceParm)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_IntInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPowerWidget_C::PlayerHasTeammates(class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, TArray<struct FUniqueNetIdRepl>& CallFunc_GetTeamMemberIDs_TeamMemberIDs, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerWidget_C", "PlayerHasTeammates");

	Params::PowerWidget_C_PlayerHasTeammates Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.CallFunc_GetTeamMemberIDs_TeamMemberIDs = std::move(CallFunc_GetTeamMemberIDs_TeamMemberIDs);
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetTeamMemberIDs_TeamMemberIDs = std::move(Parms.CallFunc_GetTeamMemberIDs_TeamMemberIDs);

	return Parms.ReturnValue;
}


// Function PowerWidget.PowerWidget_C.GetPowerRatingTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*                 CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetModifiedHomebaseRating_Rating              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetModifiedHomebaseRating_ProgressFraction    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetModifiedHomebaseRating_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsUsingGamepad_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_Multiply_FloatFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Round_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// class FText                             CallFunc_MakeLiteralText_ReturnValue                   ()
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ZeroConstructor, ReferenceParm)
// class FText                             CallFunc_Format_ReturnValue                            ()
// class UUserWidget*                      CallFunc_Create_Basic_Tooltip_Output                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPowerWidget_C::GetPowerRatingTooltipWidget(class UCommonUIContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetModifiedHomebaseRating_Rating, float CallFunc_GetModifiedHomebaseRating_ProgressFraction, bool CallFunc_GetModifiedHomebaseRating_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_MakeLiteralText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerWidget_C", "GetPowerRatingTooltipWidget");

	Params::PowerWidget_C_GetPowerRatingTooltipWidget Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetModifiedHomebaseRating_Rating = CallFunc_GetModifiedHomebaseRating_Rating;
	Parms.CallFunc_GetModifiedHomebaseRating_ProgressFraction = CallFunc_GetModifiedHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetModifiedHomebaseRating_ReturnValue = CallFunc_GetModifiedHomebaseRating_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;
}


// Function PowerWidget.PowerWidget_C.Check For Power Change
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_PlayerHasTeammates_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerWidget_C::Check_For_Power_Change(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_PlayerHasTeammates_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerWidget_C", "Check For Power Change");

	Params::PowerWidget_C_Check_For_Power_Change Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PlayerHasTeammates_ReturnValue = CallFunc_PlayerHasTeammates_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}


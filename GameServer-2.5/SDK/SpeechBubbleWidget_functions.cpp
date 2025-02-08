#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpeechBubbleWidget

#include "Basic.hpp"

#include "SpeechBubbleWidget_classes.hpp"
#include "SpeechBubbleWidget_parameters.hpp"


namespace SDK
{

// Function SpeechBubbleWidget.SpeechBubbleWidget_C.ExecuteUbergraph_SpeechBubbleWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          K2Node_Event_InitObject                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                        K2Node_DynamicCast_AsFort_Pawn                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             CallFunc_GetCurrentSentenceSpeechText_ReturnValue      ()

void USpeechBubbleWidget_C::ExecuteUbergraph_SpeechBubbleWidget(int32 EntryPoint, class UObject* K2Node_Event_InitObject, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetCurrentSentenceSpeechText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpeechBubbleWidget_C", "ExecuteUbergraph_SpeechBubbleWidget");

	Params::SpeechBubbleWidget_C_ExecuteUbergraph_SpeechBubbleWidget Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InitObject = K2Node_Event_InitObject;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentSentenceSpeechText_ReturnValue = CallFunc_GetCurrentSentenceSpeechText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpeechBubbleWidget.SpeechBubbleWidget_C.InitFromObject
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InitObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpeechBubbleWidget_C::InitFromObject(class UObject* InitObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpeechBubbleWidget_C", "InitFromObject");

	Params::SpeechBubbleWidget_C_InitFromObject Parms{};

	Parms.InitObject = InitObject;

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieWidget

#include "Basic.hpp"

#include "MovieWidget_classes.hpp"
#include "MovieWidget_parameters.hpp"


namespace SDK
{

// Function MovieWidget.MovieWidget_C.OnMediaReadyToPlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMovieWidget_C::OnMediaReadyToPlay__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieWidget_C", "OnMediaReadyToPlay__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MovieWidget.MovieWidget_C.ExecuteUbergraph_MovieWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// float                                   K2Node_Event_NewWidth                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_Event_NewHeight                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        CallFunc_MakeVector2D_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                      K2Node_MakeStruct_SlateBrush                           ()

void UMovieWidget_C::ExecuteUbergraph_MovieWidget(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_NewWidth, float K2Node_Event_NewHeight, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieWidget_C", "ExecuteUbergraph_MovieWidget");

	Params::MovieWidget_C_ExecuteUbergraph_MovieWidget Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_NewWidth = K2Node_Event_NewWidth;
	Parms.K2Node_Event_NewHeight = K2Node_Event_NewHeight;
	Parms.CallFunc_MakeVector2D_ReturnValue = std::move(CallFunc_MakeVector2D_ReturnValue);
	Parms.K2Node_MakeStruct_SlateBrush = std::move(K2Node_MakeStruct_SlateBrush);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MovieWidget.MovieWidget_C.OnMediaLoaded
// (BlueprintCallable, BlueprintEvent)

void UMovieWidget_C::OnMediaLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieWidget_C", "OnMediaLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MovieWidget.MovieWidget_C.MediaDimensionsUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   NewWidth                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   NewHeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMovieWidget_C::MediaDimensionsUpdated(float NewWidth, float NewHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieWidget_C", "MediaDimensionsUpdated");

	Params::MovieWidget_C_MediaDimensionsUpdated Parms{};

	Parms.NewWidth = NewWidth;
	Parms.NewHeight = NewHeight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MovieWidget.MovieWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMovieWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MovieWidget.MovieWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaSource*                     InMediaSource                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          InMediaSoundWave                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_HasPlayerForSource_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)

void UMovieWidget_C::Init(class UMediaSource* InMediaSource, class UObject* InMediaSoundWave, bool CallFunc_HasPlayerForSource_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieWidget_C", "Init");

	Params::MovieWidget_C_Init Parms{};

	Parms.InMediaSource = InMediaSource;
	Parms.InMediaSoundWave = InMediaSoundWave;
	Parms.CallFunc_HasPlayerForSource_ReturnValue = CallFunc_HasPlayerForSource_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MovieWidget.MovieWidget_C.StopPlaying
// (Public, BlueprintCallable, BlueprintEvent)

void UMovieWidget_C::StopPlaying()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieWidget_C", "StopPlaying");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MovieWidget.MovieWidget_C.Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldRewind                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMovieWidget_C::Play(bool ShouldRewind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieWidget_C", "Play");

	Params::MovieWidget_C_Play Parms{};

	Parms.ShouldRewind = ShouldRewind;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MovieWidget.MovieWidget_C.SetDelayedContentValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// EStretch                                Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EStretch                                Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMediaPlayer*                     CallFunc_GetMediaPlayer_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EStretch                                K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_SetLooping_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMediaTexture*                    CallFunc_GetMediaTexture_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMovieWidget_C::SetDelayedContentValues(bool Temp_bool_Variable, EStretch Temp_byte_Variable, EStretch Temp_byte_Variable1, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue, EStretch K2Node_Select_Default, bool CallFunc_SetLooping_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMediaTexture* CallFunc_GetMediaTexture_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieWidget_C", "SetDelayedContentValues");

	Params::MovieWidget_C_SetDelayedContentValues Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetMediaPlayer_ReturnValue = CallFunc_GetMediaPlayer_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetLooping_ReturnValue = CallFunc_SetLooping_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetMediaTexture_ReturnValue = CallFunc_GetMediaTexture_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}


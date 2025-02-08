#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LevelSequence

#include "Basic.hpp"

#include "LevelSequence_classes.hpp"
#include "LevelSequence_parameters.hpp"


namespace SDK
{

// Function LevelSequence.LevelSequenceActor.AddBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID       Binding                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAllowBindingsFromAsset                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "AddBinding");

	Params::LevelSequenceActor_AddBinding Parms{};

	Parms.Binding = std::move(Binding);
	Parms.Actor = Actor;
	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelSequence.LevelSequenceActor.RemoveBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID       Binding                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "RemoveBinding");

	Params::LevelSequenceActor_RemoveBinding Parms{};

	Parms.Binding = std::move(Binding);
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelSequence.LevelSequenceActor.ResetBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID       Binding                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::ResetBinding(const struct FMovieSceneObjectBindingID& Binding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "ResetBinding");

	Params::LevelSequenceActor_ResetBinding Parms{};

	Parms.Binding = std::move(Binding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelSequence.LevelSequenceActor.ResetBindings
// (Final, Native, Public, BlueprintCallable)

void ALevelSequenceActor::ResetBindings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "ResetBindings");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function LevelSequence.LevelSequenceActor.SetBinding
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID       Binding                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>                   Actors                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    bAllowBindingsFromAsset                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "SetBinding");

	Params::LevelSequenceActor_SetBinding Parms{};

	Parms.Binding = std::move(Binding);
	Parms.Actors = std::move(Actors);
	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelSequence.LevelSequenceActor.SetEventReceivers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class AActor*>                   AdditionalReceivers                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void ALevelSequenceActor::SetEventReceivers(const TArray<class AActor*>& AdditionalReceivers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "SetEventReceivers");

	Params::LevelSequenceActor_SetEventReceivers Parms{};

	Parms.AdditionalReceivers = std::move(AdditionalReceivers);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelSequence.LevelSequenceActor.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*                   InSequence                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::SetSequence(class ULevelSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "SetSequence");

	Params::LevelSequenceActor_SetSequence Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelSequence.LevelSequenceActor.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    bLoad                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bInitializePlayer                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelSequence* ALevelSequenceActor::GetSequence(bool bLoad, bool bInitializePlayer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceActor", "GetSequence");

	Params::LevelSequenceActor_GetSequence Parms{};

	Parms.bLoad = bLoad;
	Parms.bInitializePlayer = bInitializePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LevelSequence.LevelSequenceBurnIn.SetSettings
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                          InSettings                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelSequenceBurnIn::SetSettings(class UObject* InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceBurnIn", "SetSettings");

	Params::LevelSequenceBurnIn_SetSettings Parms{};

	Parms.InSettings = InSettings;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TSubclassOf<class ULevelSequenceBurnInInitSettings>ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class ULevelSequenceBurnInInitSettings> ULevelSequenceBurnIn::GetSettingsClass() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelSequenceBurnIn", "GetSettingsClass");

	Params::LevelSequenceBurnIn_GetSettingsClass Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*                   LevelSequence                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovieSceneSequencePlaybackSettingsSettings                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class ALevelSequenceActor*              OutActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequencePlayer*             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelSequencePlayer", "CreateLevelSequencePlayer");

	Params::LevelSequencePlayer_CreateLevelSequencePlayer Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LevelSequence = LevelSequence;
	Parms.Settings = std::move(Settings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutActor != nullptr)
		*OutActor = Parms.OutActor;

	return Parms.ReturnValue;
}

}


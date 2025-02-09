#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AmbientControllerComponent_Athena

#include "Basic.hpp"

#include "AmbientControllerComponent_Athena_classes.hpp"
#include "AmbientControllerComponent_Athena_parameters.hpp"


namespace SDK
{

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ExecuteUbergraph_AmbientControllerComponent_Athena
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsMobileGame_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// EFortDayPhase                           Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// EFortDayPhase                           Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetViewTarget_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// EEndPlayReason                          K2Node_Event_EndPlayReason                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue12                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           CallFunc_GetOwner_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                K2Node_DynamicCast_AsPlayer_Controller                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// struct FTimerHandle                     CallFunc_K2_SetTimerDelegate_ReturnValue               (NoDestructor)
// bool                                    CallFunc_NotEqual_BoolBool_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortTimeOfDayManager*            CallFunc_GetTimeOfDayManagerFromContext_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortDayPhase                           K2Node_CustomEvent_CurrentDayPhase                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortDayPhase                           K2Node_CustomEvent_PreviousDayPhase                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_CustomEvent_bAtCreation                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation)>K2Node_CreateDelegate_OutputDelegate1                  (ZeroConstructor, NoDestructor)
// class USoundBase*                       K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortTimeOfDayManager*            CallFunc_GetTimeOfDayManagerFromContext_ReturnValue1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetViewTarget_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_GetActorUpVector_ReturnValue                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                       K2Node_Select1_Default                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_GetActorRightVector_ReturnValue               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Multiply_VectorFloat_ReturnValue              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_GetActorForwardVector_ReturnValue             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Multiply_VectorFloat_ReturnValue1             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Trace_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Trace_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Trace_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Trace_ReturnValue123                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Trace_ReturnValue1234                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   K2Node_Event_DeltaSeconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetWorldDeltaSeconds_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_FInterpTo_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*                   CallFunc_GetGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*             K2Node_DynamicCast_AsFort_Game_State_Athena            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// EAthenaGamePhase                        K2Node_CustomEvent_GamePhase                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(EAthenaGamePhase GamePhase)>K2Node_CreateDelegate_OutputDelegate12                 (ZeroConstructor, NoDestructor)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// EAthenaGamePhaseStep                    K2Node_CustomEvent_GamePhaseStep                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(EAthenaGamePhaseStep GamePhaseStep)>K2Node_CreateDelegate_OutputDelegate123                (ZeroConstructor, NoDestructor)
// bool                                    K2Node_SwitchEnum1_CmpSuccess                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_CustomEvent_Enabled                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue123                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsBROnly_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAmbientControllerComponent_Athena_C::ExecuteUbergraph_AmbientControllerComponent_Athena(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, EFortDayPhase Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, EFortDayPhase Temp_byte_Variable1, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue1, EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue12, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, EFortDayPhase K2Node_CustomEvent_CurrentDayPhase, EFortDayPhase K2Node_CustomEvent_PreviousDayPhase, bool K2Node_CustomEvent_bAtCreation, TDelegate<void(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation)> K2Node_CreateDelegate_OutputDelegate1, class USoundBase* K2Node_Select_Default, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue1, class AActor* CallFunc_GetViewTarget_ReturnValue1, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, class USoundBase* K2Node_Select1_Default, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, bool CallFunc_Trace_ReturnValue, bool CallFunc_Trace_ReturnValue1, bool CallFunc_Trace_ReturnValue12, bool CallFunc_Trace_ReturnValue123, bool CallFunc_Trace_ReturnValue1234, float K2Node_Event_DeltaSeconds, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess1, EAthenaGamePhase K2Node_CustomEvent_GamePhase, TDelegate<void(EAthenaGamePhase GamePhase)> K2Node_CreateDelegate_OutputDelegate12, bool K2Node_SwitchEnum_CmpSuccess, EAthenaGamePhaseStep K2Node_CustomEvent_GamePhaseStep, TDelegate<void(EAthenaGamePhaseStep GamePhaseStep)> K2Node_CreateDelegate_OutputDelegate123, bool K2Node_SwitchEnum1_CmpSuccess, bool K2Node_CustomEvent_Enabled, bool CallFunc_IsValid_ReturnValue123, bool CallFunc_IsBROnly_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "ExecuteUbergraph_AmbientControllerComponent_Athena");

	Params::AmbientControllerComponent_Athena_C_ExecuteUbergraph_AmbientControllerComponent_Athena Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetViewTarget_ReturnValue = CallFunc_GetViewTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_IsValid_ReturnValue12 = CallFunc_IsValid_ReturnValue12;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = std::move(CallFunc_K2_SetTimerDelegate_ReturnValue);
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;
	Parms.K2Node_CustomEvent_CurrentDayPhase = K2Node_CustomEvent_CurrentDayPhase;
	Parms.K2Node_CustomEvent_PreviousDayPhase = K2Node_CustomEvent_PreviousDayPhase;
	Parms.K2Node_CustomEvent_bAtCreation = K2Node_CustomEvent_bAtCreation;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue1 = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue1;
	Parms.CallFunc_GetViewTarget_ReturnValue1 = CallFunc_GetViewTarget_ReturnValue1;
	Parms.CallFunc_GetActorUpVector_ReturnValue = std::move(CallFunc_GetActorUpVector_ReturnValue);
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_GetActorRightVector_ReturnValue = std::move(CallFunc_GetActorRightVector_ReturnValue);
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = std::move(CallFunc_Multiply_VectorFloat_ReturnValue);
	Parms.CallFunc_GetActorForwardVector_ReturnValue = std::move(CallFunc_GetActorForwardVector_ReturnValue);
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = std::move(CallFunc_K2_GetActorLocation_ReturnValue);
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue1 = std::move(CallFunc_Multiply_VectorFloat_ReturnValue1);
	Parms.CallFunc_Trace_ReturnValue = CallFunc_Trace_ReturnValue;
	Parms.CallFunc_Trace_ReturnValue1 = CallFunc_Trace_ReturnValue1;
	Parms.CallFunc_Trace_ReturnValue12 = CallFunc_Trace_ReturnValue12;
	Parms.CallFunc_Trace_ReturnValue123 = CallFunc_Trace_ReturnValue123;
	Parms.CallFunc_Trace_ReturnValue1234 = CallFunc_Trace_ReturnValue1234;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena = K2Node_DynamicCast_AsFort_Game_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_CustomEvent_GamePhase = K2Node_CustomEvent_GamePhase;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_GamePhaseStep = K2Node_CustomEvent_GamePhaseStep;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.K2Node_CustomEvent_Enabled = K2Node_CustomEvent_Enabled;
	Parms.CallFunc_IsValid_ReturnValue123 = CallFunc_IsValid_ReturnValue123;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Set Storm Amb Layer Enabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAmbientControllerComponent_Athena_C::Set_Storm_Amb_Layer_Enabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "Set Storm Amb Layer Enabled");

	Params::AmbientControllerComponent_Athena_C_Set_Storm_Amb_Layer_Enabled Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Game Phase Step Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaGamePhaseStep                    GamePhaseStep                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmbientControllerComponent_Athena_C::On_Game_Phase_Step_Change(EAthenaGamePhaseStep GamePhaseStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "On Game Phase Step Change");

	Params::AmbientControllerComponent_Athena_C_On_Game_Phase_Step_Change Parms{};

	Parms.GamePhaseStep = GamePhaseStep;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Game Phase Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaGamePhase                        GamePhase                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmbientControllerComponent_Athena_C::On_Game_Phase_Change(EAthenaGamePhase GamePhase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "On Game Phase Change");

	Params::AmbientControllerComponent_Athena_C_On_Game_Phase_Change Parms{};

	Parms.GamePhase = GamePhase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmbientControllerComponent_Athena_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "ReceiveTick");

	Params::AmbientControllerComponent_Athena_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Day Phase Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDayPhase                           CurrentDayPhase                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortDayPhase                           PreviousDayPhase                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAtCreation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAmbientControllerComponent_Athena_C::On_Day_Phase_Change(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "On Day Phase Change");

	Params::AmbientControllerComponent_Athena_C_On_Day_Phase_Change Parms{};

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Evaluate Inside State
// (BlueprintCallable, BlueprintEvent)

void UAmbientControllerComponent_Athena_C::Evaluate_Inside_State()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "Evaluate Inside State");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.OnCheckIfSurrounded
// (BlueprintCallable, BlueprintEvent)

void UAmbientControllerComponent_Athena_C::OnCheckIfSurrounded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "OnCheckIfSurrounded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmbientControllerComponent_Athena_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "ReceiveEndPlay");

	Params::AmbientControllerComponent_Athena_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UAmbientControllerComponent_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.RegisterTimeOfDayCallbacks
// (Public, BlueprintCallable, BlueprintEvent)

void UAmbientControllerComponent_Athena_C::RegisterTimeOfDayCallbacks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "RegisterTimeOfDayCallbacks");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Crossfade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                       NewSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                       NewSoundLocal                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*                  CallFunc_SpawnSound2D_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*                  CallFunc_SpawnSound2D_ReturnValue1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmbientControllerComponent_Athena_C::Crossfade(class USoundBase* NewSound, class USoundBase* NewSoundLocal, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "Crossfade");

	Params::AmbientControllerComponent_Athena_C_Crossfade Parms{};

	Parms.NewSound = NewSound;
	Parms.NewSoundLocal = NewSoundLocal;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue1 = CallFunc_SpawnSound2D_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Trace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Start                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class AActor*>                   Temp_object_Variable                                   (ConstParm, ZeroConstructor, ReferenceParm)
// struct FVector                          CallFunc_Multiply_VectorFloat_ReturnValue              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Add_VectorVector_ReturnValue                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       CallFunc_LineTraceSingle_OutHit                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    CallFunc_LineTraceSingle_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAmbientControllerComponent_Athena_C::Trace(const struct FVector& Start, const struct FVector& Direction, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "Trace");

	Params::AmbientControllerComponent_Athena_C_Trace Parms{};

	Parms.Start = std::move(Start);
	Parms.Direction = std::move(Direction);
	Parms.Temp_object_Variable = std::move(Temp_object_Variable);
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = std::move(CallFunc_Multiply_VectorFloat_ReturnValue);
	Parms.CallFunc_Add_VectorVector_ReturnValue = std::move(CallFunc_Add_VectorVector_ReturnValue);
	Parms.CallFunc_LineTraceSingle_OutHit = std::move(CallFunc_LineTraceSingle_OutHit);
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.SetIndoorMixEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*                  CallFunc_SpawnSoundAtLocation_ReturnValue              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmbientControllerComponent_Athena_C::SetIndoorMixEnabled(bool Enabled, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "SetIndoorMixEnabled");

	Params::AmbientControllerComponent_Athena_C_SetIndoorMixEnabled Parms{};

	Parms.Enabled = Enabled;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.SetTargetLPFFreq
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmbientControllerComponent_Athena_C::SetTargetLPFFreq(float Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "SetTargetLPFFreq");

	Params::AmbientControllerComponent_Athena_C_SetTargetLPFFreq Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}

}


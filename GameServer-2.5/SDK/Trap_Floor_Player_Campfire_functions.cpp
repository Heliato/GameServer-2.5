#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trap_Floor_Player_Campfire

#include "Basic.hpp"

#include "Trap_Floor_Player_Campfire_classes.hpp"
#include "Trap_Floor_Player_Campfire_parameters.hpp"


namespace SDK
{

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.ExecuteUbergraph_Trap_Floor_Player_Campfire
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam                K2Node_MakeStruct_ParticleSysParam                     (IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_Multiply_VectorVector_ReturnValue             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Multiply_VectorVector_ReturnValue1            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam                K2Node_MakeStruct_ParticleSysParam1                    (IsPlainOldData, NoDestructor)
// float                                   CallFunc_BreakVector_X                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakVector_Y                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakVector_Z                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam                K2Node_MakeStruct_ParticleSysParam12                   (IsPlainOldData, NoDestructor)
// float                                   CallFunc_Multiply_FloatFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Multiply_FloatFloat_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_MakeVector_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_MakeVector_ReturnValue1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Multiply_VectorVector_ReturnValue12           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Multiply_VectorVector_ReturnValue123          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam                K2Node_MakeStruct_ParticleSysParam123                  (IsPlainOldData, NoDestructor)
// struct FParticleSysParam                K2Node_MakeStruct_ParticleSysParam1234                 (IsPlainOldData, NoDestructor)
// struct FParticleSysParam                K2Node_MakeStruct_ParticleSysParam12345                (IsPlainOldData, NoDestructor)
// struct FParticleSysParam                K2Node_MakeStruct_ParticleSysParam123456               (IsPlainOldData, NoDestructor)
// float                                   Temp_float_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FParticleSysParam>        K2Node_MakeArray_Array                                 (ZeroConstructor, ReferenceParm)
// bool                                    CallFunc_LessEqual_FloatFloat_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsDedicatedServer_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_HasAuthority_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue1              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue12             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*             CallFunc_GetPlayerCameraManager_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue123            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_K2_GetComponentLocation_ReturnValue           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue1234           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*                  CallFunc_K2_GetRootComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetComponentLocation_ReturnValue1          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*         CallFunc_SpawnEmitterAtLocation_ReturnValue            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// EGameplayCueEvent                       K2Node_GameplayCueEvent_EventType1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           K2Node_GameplayCueEvent_Parameters1                    (ContainsInstancedReference)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// EGameplayCueEvent                       K2Node_GameplayCueEvent_EventType                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           K2Node_GameplayCueEvent_Parameters                     (ContainsInstancedReference)
// bool                                    K2Node_SwitchEnum1_CmpSuccess                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue12                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_K2_GetComponentLocation_ReturnValue12         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*         CallFunc_SpawnEmitterAttached_ReturnValue              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetComponentLocation_ReturnValue123        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Subtract_VectorVector_ReturnValue             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_VSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*            K2Node_Event_Pawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEvaluateCurveTableResult               CallFunc_EvaluateCurveTableRow_OutResult               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_EvaluateCurveTableRow_OutXY                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_FTrunc_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum12_CmpSuccess                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                     CallFunc_K2_SetTimer_ReturnValue                       (NoDestructor)

void ATrap_Floor_Player_Campfire_C::ExecuteUbergraph_Trap_Floor_Player_Campfire(int32 EntryPoint, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam12, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue12, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue123, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam123, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam1234, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam12345, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam123456, float Temp_float_Variable, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue12, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue123, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1234, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue1, EGameplayCueEvent K2Node_GameplayCueEvent_EventType1, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters1, bool K2Node_SwitchEnum_CmpSuccess, EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_IsValid_ReturnValue12, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue12, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue123, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, class AFortPlayerPawnAthena* K2Node_Event_Pawn, EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, int32 CallFunc_FTrunc_ReturnValue, bool K2Node_SwitchEnum12_CmpSuccess, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "ExecuteUbergraph_Trap_Floor_Player_Campfire");

	Params::Trap_Floor_Player_Campfire_C_ExecuteUbergraph_Trap_Floor_Player_Campfire Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_ParticleSysParam = std::move(K2Node_MakeStruct_ParticleSysParam);
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = std::move(CallFunc_Multiply_VectorVector_ReturnValue);
	Parms.CallFunc_Multiply_VectorVector_ReturnValue1 = std::move(CallFunc_Multiply_VectorVector_ReturnValue1);
	Parms.K2Node_MakeStruct_ParticleSysParam1 = std::move(K2Node_MakeStruct_ParticleSysParam1);
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_MakeStruct_ParticleSysParam12 = std::move(K2Node_MakeStruct_ParticleSysParam12);
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_MakeVector_ReturnValue = std::move(CallFunc_MakeVector_ReturnValue);
	Parms.CallFunc_MakeVector_ReturnValue1 = std::move(CallFunc_MakeVector_ReturnValue1);
	Parms.CallFunc_Multiply_VectorVector_ReturnValue12 = std::move(CallFunc_Multiply_VectorVector_ReturnValue12);
	Parms.CallFunc_Multiply_VectorVector_ReturnValue123 = std::move(CallFunc_Multiply_VectorVector_ReturnValue123);
	Parms.K2Node_MakeStruct_ParticleSysParam123 = std::move(K2Node_MakeStruct_ParticleSysParam123);
	Parms.K2Node_MakeStruct_ParticleSysParam1234 = std::move(K2Node_MakeStruct_ParticleSysParam1234);
	Parms.K2Node_MakeStruct_ParticleSysParam12345 = std::move(K2Node_MakeStruct_ParticleSysParam12345);
	Parms.K2Node_MakeStruct_ParticleSysParam123456 = std::move(K2Node_MakeStruct_ParticleSysParam123456);
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = std::move(CallFunc_K2_GetActorLocation_ReturnValue);
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = std::move(CallFunc_K2_GetActorLocation_ReturnValue1);
	Parms.CallFunc_K2_GetActorLocation_ReturnValue12 = std::move(CallFunc_K2_GetActorLocation_ReturnValue12);
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue123 = std::move(CallFunc_K2_GetActorLocation_ReturnValue123);
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = std::move(CallFunc_K2_GetComponentLocation_ReturnValue);
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1234 = std::move(CallFunc_K2_GetActorLocation_ReturnValue1234);
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue1 = std::move(CallFunc_K2_GetComponentLocation_ReturnValue1);
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_GameplayCueEvent_EventType1 = K2Node_GameplayCueEvent_EventType1;
	Parms.K2Node_GameplayCueEvent_Parameters1 = std::move(K2Node_GameplayCueEvent_Parameters1);
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_GameplayCueEvent_EventType = K2Node_GameplayCueEvent_EventType;
	Parms.K2Node_GameplayCueEvent_Parameters = std::move(K2Node_GameplayCueEvent_Parameters);
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue12 = CallFunc_IsValid_ReturnValue12;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue12 = std::move(CallFunc_K2_GetComponentLocation_ReturnValue12);
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue123 = std::move(CallFunc_K2_GetComponentLocation_ReturnValue123);
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = std::move(CallFunc_Subtract_VectorVector_ReturnValue);
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.K2Node_Event_Pawn = K2Node_Event_Pawn;
	Parms.CallFunc_EvaluateCurveTableRow_OutResult = CallFunc_EvaluateCurveTableRow_OutResult;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY = CallFunc_EvaluateCurveTableRow_OutXY;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_SwitchEnum12_CmpSuccess = K2Node_SwitchEnum12_CmpSuccess;
	Parms.CallFunc_K2_SetTimer_ReturnValue = std::move(CallFunc_K2_SetTimer_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.TriggerLaunchEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawnAthena*            Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Floor_Player_Campfire_C::TriggerLaunchEffects(class AFortPlayerPawnAthena* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "TriggerLaunchEffects");

	Params::Trap_Floor_Player_Campfire_C_TriggerLaunchEffects Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::OnOutOfDurability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "OnOutOfDurability");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ATrap_Floor_Player_Campfire_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	Params::Trap_Floor_Player_Campfire_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ATrap_Floor_Player_Campfire_C::GameplayCue_Abilities_Activation_Traps_ReloadBegin(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "GameplayCue.Abilities.Activation.Traps.ReloadBegin");

	Params::Trap_Floor_Player_Campfire_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::OnFinishedBuilding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "OnFinishedBuilding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnPlaced
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::OnPlaced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "OnPlaced");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnReloadEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::OnReloadEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "OnReloadEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnRep_IsActive
// (BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::OnRep_IsActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "OnRep_IsActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.HealTicks
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_HasAuthority_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       CallFunc_K2_GetComponentToWorld_ReturnValue            (IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   Temp_object_Variable                                   (ConstParm, ZeroConstructor, ReferenceParm)
// EEvaluateCurveTableResult               CallFunc_EvaluateCurveTableRow_OutResult               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_EvaluateCurveTableRow_OutXY                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_FloatFloat_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                       CallFunc_K2_GetComponentToWorld_ReturnValue1           (IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_K2_GetComponentLocation_ReturnValue           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   CallFunc_BoxOverlapActors_OutActors                    (ZeroConstructor, ReferenceParm)
// bool                                    CallFunc_BoxOverlapActors_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Add_IntInt_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_Array_Get_Item                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*            K2Node_DynamicCast_AsFort_Player_Pawn_Athena           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle      CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue(NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_K2_GetComponentLocation_ReturnValue1          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsDead_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsPointInBoxWithTransform_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_K2_GetComponentLocation_ReturnValue12         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsPointInBoxWithTransform_ReturnValue1        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_LessEqual_IntInt_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrap_Floor_Player_Campfire_C::HealTicks(bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& Temp_object_Variable, EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, TArray<class AActor*>& CallFunc_BoxOverlapActors_OutActors, bool CallFunc_BoxOverlapActors_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class AActor* CallFunc_Array_Get_Item, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, bool CallFunc_IsDead_ReturnValue, bool CallFunc_IsPointInBoxWithTransform_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue12, bool CallFunc_IsPointInBoxWithTransform_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "HealTicks");

	Params::Trap_Floor_Player_Campfire_C_HealTicks Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = std::move(CallFunc_K2_GetComponentToWorld_ReturnValue);
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_object_Variable = std::move(Temp_object_Variable);
	Parms.CallFunc_EvaluateCurveTableRow_OutResult = CallFunc_EvaluateCurveTableRow_OutResult;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY = CallFunc_EvaluateCurveTableRow_OutXY;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue1 = std::move(CallFunc_K2_GetComponentToWorld_ReturnValue1);
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = std::move(CallFunc_K2_GetComponentLocation_ReturnValue);
	Parms.CallFunc_BoxOverlapActors_OutActors = std::move(CallFunc_BoxOverlapActors_OutActors);
	Parms.CallFunc_BoxOverlapActors_ReturnValue = CallFunc_BoxOverlapActors_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue = std::move(CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue);
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue1 = std::move(CallFunc_K2_GetComponentLocation_ReturnValue1);
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_IsPointInBoxWithTransform_ReturnValue = CallFunc_IsPointInBoxWithTransform_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue12 = std::move(CallFunc_K2_GetComponentLocation_ReturnValue12);
	Parms.CallFunc_IsPointInBoxWithTransform_ReturnValue1 = CallFunc_IsPointInBoxWithTransform_ReturnValue1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_BoxOverlapActors_OutActors = std::move(Parms.CallFunc_BoxOverlapActors_OutActors);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.InitCampfireEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_IsDedicatedServer_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_K2_GetComponentLocation_ReturnValue           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Floor_Player_Campfire_C::InitCampfireEffects(bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "InitCampfireEffects");

	Params::Trap_Floor_Player_Campfire_C_InitCampfireEffects Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = std::move(CallFunc_K2_GetComponentLocation_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.GetFireLocationAndRotation
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
// struct FTransform                       CallFunc_K2_GetComponentToWorld_ReturnValue            (IsPlainOldData, NoDestructor)

struct FTransform ATrap_Floor_Player_Campfire_C::GetFireLocationAndRotation(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "GetFireLocationAndRotation");

	Params::Trap_Floor_Player_Campfire_C_GetFireLocationAndRotation Parms{};

	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = std::move(CallFunc_K2_GetComponentToWorld_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


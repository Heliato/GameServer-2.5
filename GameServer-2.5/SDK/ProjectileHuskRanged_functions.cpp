#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProjectileHuskRanged

#include "Basic.hpp"

#include "ProjectileHuskRanged_classes.hpp"
#include "ProjectileHuskRanged_parameters.hpp"


namespace SDK
{

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ExecuteUbergraph_ProjectileHuskRanged
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Has_Been_Initd_Variable                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      CallFunc_GetInstigatorController_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIController*                K2Node_DynamicCast_AsFort_AIController                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*              K2Node_Event_MyComp                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           K2Node_Event_Other                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              K2Node_Event_OtherComp                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_bSelfMoved                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          K2Node_Event_HitLocation                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          K2Node_Event_HitNormal                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          K2Node_Event_NormalImpulse                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       K2Node_Event_Hit                                       (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                           CallFunc_GetGoalActor_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         CallFunc_MakeRotFromX_ReturnValue                      (IsPlainOldData, NoDestructor)
// class AFortPawn*                        K2Node_DynamicCast_AsFort_Pawn                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*         CallFunc_SpawnEmitterAtLocation_ReturnValue            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            CallFunc_GetInstigator_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CallFunc_MakeLiteralName_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*             CallFunc_GetBlackboard_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                     CallFunc_K2_SetTimer_ReturnValue                       (NoDestructor)
// class UObject*                          CallFunc_GetValueAsObject_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           K2Node_DynamicCast_AsActor                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess12                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue1              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_GetVelocity_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue12             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                     CallFunc_K2_SetTimer_ReturnValue1                      (NoDestructor)
// struct FVector                          CallFunc_Subtract_VectorVector_ReturnValue             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Dot_VectorVector_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_FloatFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_IsClosed_Variable                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>                   K2Node_Event_HitActors                                 (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>               K2Node_Event_HitResults                                (ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UAudioComponent*                  CallFunc_SpawnSoundAttached_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue123            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         CallFunc_K2_GetActorRotation_ReturnValue               (IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*         CallFunc_SpawnEmitterAtLocation_ReturnValue1           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectileHuskRanged_C::ExecuteUbergraph_ProjectileHuskRanged(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, struct FHitResult& K2Node_Event_Hit, class AActor* CallFunc_GetGoalActor_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess12, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue12, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue123, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProjectileHuskRanged_C", "ExecuteUbergraph_ProjectileHuskRanged");

	Params::ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = std::move(CallFunc_K2_GetActorLocation_ReturnValue);
	Parms.CallFunc_GetInstigatorController_ReturnValue = CallFunc_GetInstigatorController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_AIController = K2Node_DynamicCast_AsFort_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_MyComp = K2Node_Event_MyComp;
	Parms.K2Node_Event_Other = K2Node_Event_Other;
	Parms.K2Node_Event_OtherComp = K2Node_Event_OtherComp;
	Parms.K2Node_Event_bSelfMoved = K2Node_Event_bSelfMoved;
	Parms.K2Node_Event_HitLocation = std::move(K2Node_Event_HitLocation);
	Parms.K2Node_Event_HitNormal = std::move(K2Node_Event_HitNormal);
	Parms.K2Node_Event_NormalImpulse = std::move(K2Node_Event_NormalImpulse);
	Parms.K2Node_Event_Hit = std::move(K2Node_Event_Hit);
	Parms.CallFunc_GetGoalActor_ReturnValue = CallFunc_GetGoalActor_ReturnValue;
	Parms.CallFunc_MakeRotFromX_ReturnValue = std::move(CallFunc_MakeRotFromX_ReturnValue);
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = std::move(CallFunc_K2_SetTimer_ReturnValue);
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = std::move(CallFunc_K2_GetActorLocation_ReturnValue1);
	Parms.CallFunc_GetVelocity_ReturnValue = std::move(CallFunc_GetVelocity_ReturnValue);
	Parms.CallFunc_K2_GetActorLocation_ReturnValue12 = std::move(CallFunc_K2_GetActorLocation_ReturnValue12);
	Parms.CallFunc_K2_SetTimer_ReturnValue1 = std::move(CallFunc_K2_SetTimer_ReturnValue1);
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = std::move(CallFunc_Subtract_VectorVector_ReturnValue);
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_HitActors = std::move(K2Node_Event_HitActors);
	Parms.K2Node_Event_HitResults = std::move(K2Node_Event_HitResults);
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue123 = std::move(CallFunc_K2_GetActorLocation_ReturnValue123);
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = std::move(CallFunc_K2_GetActorRotation_ReturnValue);
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue1 = CallFunc_SpawnEmitterAtLocation_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.OnStoppedOnServer
// (Event, Public, BlueprintEvent)

void AProjectileHuskRanged_C::OnStoppedOnServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProjectileHuskRanged_C", "OnStoppedOnServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.OnExploded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   HitActors                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>               HitResults                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)

void AProjectileHuskRanged_C::OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProjectileHuskRanged_C", "OnExploded");

	Params::ProjectileHuskRanged_C_OnExploded Parms{};

	Parms.HitActors = std::move(HitActors);
	Parms.HitResults = std::move(HitResults);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.StopHoming
// (BlueprintCallable, BlueprintEvent)

void AProjectileHuskRanged_C::StopHoming()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProjectileHuskRanged_C", "StopHoming");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ProjectileCheck
// (BlueprintCallable, BlueprintEvent)

void AProjectileHuskRanged_C::ProjectileCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProjectileHuskRanged_C", "ProjectileCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectileHuskRanged_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProjectileHuskRanged_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MyComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelfMoved                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProjectileHuskRanged_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProjectileHuskRanged_C", "ReceiveHit");

	Params::ProjectileHuskRanged_C_ReceiveHit Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitNormal = std::move(HitNormal);
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectileHuskRanged_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProjectileHuskRanged_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}


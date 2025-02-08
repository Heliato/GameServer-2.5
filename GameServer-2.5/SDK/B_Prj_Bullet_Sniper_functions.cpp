#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Bullet_Sniper

#include "Basic.hpp"

#include "B_Prj_Bullet_Sniper_classes.hpp"
#include "B_Prj_Bullet_Sniper_parameters.hpp"


namespace SDK
{

// Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.ExecuteUbergraph_B_Prj_Bullet_Sniper
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           K2Node_Event_OtherActor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              K2Node_Event_OtherComp                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       K2Node_Event_HitResult                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    K2Node_Event_bIsOverlap                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BreakHitResult_bBlockingHit                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BreakHitResult_bInitialOverlap                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_BreakHitResult_Time                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakHitResult_Distance                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_BreakHitResult_Location                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_BreakHitResult_ImpactPoint                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_BreakHitResult_Normal                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_BreakHitResult_ImpactNormal                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*                CallFunc_BreakHitResult_PhysMat                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_BreakHitResult_HitActor                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              CallFunc_BreakHitResult_HitComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CallFunc_BreakHitResult_HitBoneName                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_BreakHitResult_HitItem                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_BreakHitResult_FaceIndex                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_BreakHitResult_TraceStart                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_BreakHitResult_TraceEnd                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_Event_DeltaSeconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*                  K2Node_DynamicCast_AsFort_Player_Pawn                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                       Temp_object_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                       Temp_object_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                       K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Bullet_Sniper_C::ExecuteUbergraph_B_Prj_Bullet_Sniper(int32 EntryPoint, bool Temp_bool_Variable, class AActor* K2Node_Event_OtherActor, class UPrimitiveComponent* K2Node_Event_OtherComp, struct FHitResult& K2Node_Event_HitResult, bool K2Node_Event_bIsOverlap, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float K2Node_Event_DeltaSeconds, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable1, class USoundBase* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Bullet_Sniper_C", "ExecuteUbergraph_B_Prj_Bullet_Sniper");

	Params::B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.K2Node_Event_OtherComp = K2Node_Event_OtherComp;
	Parms.K2Node_Event_HitResult = std::move(K2Node_Event_HitResult);
	Parms.K2Node_Event_bIsOverlap = K2Node_Event_bIsOverlap;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = std::move(CallFunc_BreakHitResult_Location);
	Parms.CallFunc_BreakHitResult_ImpactPoint = std::move(CallFunc_BreakHitResult_ImpactPoint);
	Parms.CallFunc_BreakHitResult_Normal = std::move(CallFunc_BreakHitResult_Normal);
	Parms.CallFunc_BreakHitResult_ImpactNormal = std::move(CallFunc_BreakHitResult_ImpactNormal);
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = std::move(CallFunc_BreakHitResult_TraceStart);
	Parms.CallFunc_BreakHitResult_TraceEnd = std::move(CallFunc_BreakHitResult_TraceEnd);
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = std::move(CallFunc_K2_GetActorLocation_ReturnValue);
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Bullet_Sniper_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Bullet_Sniper_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Bullet_Sniper_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Bullet_Sniper_C", "ReceiveTick");

	Params::B_Prj_Bullet_Sniper_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.OnTouched
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    bIsOverlap                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Prj_Bullet_Sniper_C::OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FHitResult& HitResult, bool bIsOverlap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Bullet_Sniper_C", "OnTouched");

	Params::B_Prj_Bullet_Sniper_C_OnTouched Parms{};

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.HitResult = std::move(HitResult);
	Parms.bIsOverlap = bIsOverlap;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Bullet_Sniper_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Bullet_Sniper_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ProjectileTrajectory

#include "Basic.hpp"

#include "BP_ProjectileTrajectory_classes.hpp"
#include "BP_ProjectileTrajectory_parameters.hpp"


namespace SDK
{

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ExecuteUbergraph_BP_ProjectileTrajectory
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Subtract_IntInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_LessEqual_IntInt_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       Temp_struct_Variable                                   (ConstParm, IsPlainOldData, NoDestructor)
// class USplineMeshComponent*             CallFunc_AddComponent_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_CreateDynamicMaterialInstance_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileTrajectory_C::ExecuteUbergraph_BP_ProjectileTrajectory(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, struct FTransform& Temp_struct_Variable, class USplineMeshComponent* CallFunc_AddComponent_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_C", "ExecuteUbergraph_BP_ProjectileTrajectory");

	Params::BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProjectileTrajectory_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileTrajectory_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectorySpline
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>                  SplinePoints                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>                  SplineTangents                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                                   LastPointDist                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_LastIndex_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_LastIndex_ReturnValue1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Conv_VectorToLinearColor_ReturnValue          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Conv_VectorToLinearColor_ReturnValue1         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       CallFunc_K2_SetWorldLocation_SweepHitResult            (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                                   Temp_int_Array_Index_Variable1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Array_Get_Item                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Add_IntInt_ReturnValue12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue123                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Multiply_IntInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Array_Get_Item1                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Array_Get_Item12                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Subtract_VectorVector_ReturnValue             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Normal_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_VSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Multiply_VectorFloat_ReturnValue              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue1234                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Array_IsValidIndex_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_Array_Get_Item123                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Normal_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Multiply_VectorFloat_ReturnValue1             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_GetLocationAtSplinePoint_ReturnValue          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_GetLocationAtSplinePoint_ReturnValue1         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_GetArriveTangentAtSplinePoint_ReturnValue     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineMeshComponent*             CallFunc_Array_Get_Item1234                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue12                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ProjectileTrajectory_C::SetTrajectorySpline(TArray<struct FVector>& SplinePoints, TArray<struct FVector>& SplineTangents, float LastPointDist, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Loop_Counter_Variable1, const struct FVector& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue12, int32 CallFunc_Add_IntInt_ReturnValue123, int32 CallFunc_Multiply_IntInt_ReturnValue, const struct FVector& CallFunc_Array_Get_Item1, const struct FVector& CallFunc_Array_Get_Item12, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1234, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FVector& CallFunc_Array_Get_Item123, const struct FVector& CallFunc_Normal_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue1, const struct FVector& CallFunc_GetArriveTangentAtSplinePoint_ReturnValue, const struct FVector& CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue, class USplineMeshComponent* CallFunc_Array_Get_Item1234, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue12)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_C", "SetTrajectorySpline");

	Params::BP_ProjectileTrajectory_C_SetTrajectorySpline Parms{};

	Parms.SplinePoints = std::move(SplinePoints);
	Parms.SplineTangents = std::move(SplineTangents);
	Parms.LastPointDist = LastPointDist;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue1 = CallFunc_Array_LastIndex_ReturnValue1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = std::move(CallFunc_Conv_VectorToLinearColor_ReturnValue);
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue1 = std::move(CallFunc_Conv_VectorToLinearColor_ReturnValue1);
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = std::move(CallFunc_K2_SetWorldLocation_SweepHitResult);
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Array_Get_Item = std::move(CallFunc_Array_Get_Item);
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue12 = CallFunc_Add_IntInt_ReturnValue12;
	Parms.CallFunc_Add_IntInt_ReturnValue123 = CallFunc_Add_IntInt_ReturnValue123;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item1 = std::move(CallFunc_Array_Get_Item1);
	Parms.CallFunc_Array_Get_Item12 = std::move(CallFunc_Array_Get_Item12);
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = std::move(CallFunc_Subtract_VectorVector_ReturnValue);
	Parms.CallFunc_Normal_ReturnValue = std::move(CallFunc_Normal_ReturnValue);
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = std::move(CallFunc_Multiply_VectorFloat_ReturnValue);
	Parms.CallFunc_Add_IntInt_ReturnValue1234 = CallFunc_Add_IntInt_ReturnValue1234;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item123 = std::move(CallFunc_Array_Get_Item123);
	Parms.CallFunc_Normal_ReturnValue1 = std::move(CallFunc_Normal_ReturnValue1);
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue1 = std::move(CallFunc_Multiply_VectorFloat_ReturnValue1);
	Parms.CallFunc_GetLocationAtSplinePoint_ReturnValue = std::move(CallFunc_GetLocationAtSplinePoint_ReturnValue);
	Parms.CallFunc_GetLocationAtSplinePoint_ReturnValue1 = std::move(CallFunc_GetLocationAtSplinePoint_ReturnValue1);
	Parms.CallFunc_GetArriveTangentAtSplinePoint_ReturnValue = std::move(CallFunc_GetArriveTangentAtSplinePoint_ReturnValue);
	Parms.CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue = std::move(CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue);
	Parms.CallFunc_Array_Get_Item1234 = CallFunc_Array_Get_Item1234;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue12 = CallFunc_Less_IntInt_ReturnValue12;

	UObject::ProcessEvent(Func, &Parms);

	SplinePoints = std::move(Parms.SplinePoints);
	SplineTangents = std::move(Parms.SplineTangents);
}

}


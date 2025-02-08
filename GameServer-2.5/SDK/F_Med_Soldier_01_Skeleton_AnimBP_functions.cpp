#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_Med_Soldier_01_Skeleton_AnimBP

#include "Basic.hpp"

#include "F_Med_Soldier_01_Skeleton_AnimBP_classes.hpp"
#include "F_Med_Soldier_01_Skeleton_AnimBP_parameters.hpp"


namespace SDK
{

// Function F_Med_Soldier_01_Skeleton_AnimBP.F_Med_Soldier_01_Skeleton_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UF_Med_Soldier_01_Skeleton_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("F_Med_Soldier_01_Skeleton_AnimBP_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function F_Med_Soldier_01_Skeleton_AnimBP.F_Med_Soldier_01_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_FAD98FF0469710A7BDE0EDBF8A706451
// (BlueprintEvent)

void UF_Med_Soldier_01_Skeleton_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_FAD98FF0469710A7BDE0EDBF8A706451()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("F_Med_Soldier_01_Skeleton_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_FAD98FF0469710A7BDE0EDBF8A706451");

	UObject::ProcessEvent(Func, nullptr);
}


// Function F_Med_Soldier_01_Skeleton_AnimBP.F_Med_Soldier_01_Skeleton_AnimBP_C.ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UF_Med_Soldier_01_Skeleton_AnimBP_C::ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("F_Med_Soldier_01_Skeleton_AnimBP_C", "ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP");

	Params::F_Med_Soldier_01_Skeleton_AnimBP_C_ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}


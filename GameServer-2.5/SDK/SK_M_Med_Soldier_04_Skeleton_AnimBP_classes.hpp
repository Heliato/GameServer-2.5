#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_M_Med_Soldier_04_Skeleton_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C
// 0x1350 (0x1780 - 0x0430)
class USK_M_Med_Soldier_04_Skeleton_AnimBP_C final  : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_5B5C2BC342A9E2373684A581DE190146; // 0x0438(0x0280)()
	struct FAnimNode_Root                         AnimGraphNode_Root_78EB935A430054ADF5E2E89005D9D000; // 0x06B8(0x0048)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_D4E756144665125C57D74F847DF5CAE2; // 0x0700(0x0280)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_D3F10A774DCEBBC7CF6FACA843FAA56D; // 0x0980(0x0048)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_F50D097B4AF8FD409EBDB7A56995EB71; // 0x09C8(0x0048)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_5984D2B3487D5E3495C1419E61FA91AE; // 0x0A10(0x00E8)(ContainsInstancedReference)
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_AF49CEBA41A86A5239B445ACCA2A35D2; // 0x0AF8(0x0280)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_E019B8DC42D4A76813488292D50D4442; // 0x0D78(0x0280)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_53B6F76442E1E5367E83198574A7E337; // 0x0FF8(0x0280)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_3B49A128489AAE9305B9BEACDF5446C4; // 0x1278(0x0280)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_01F0D350476ED069A3D9B380171159E1; // 0x14F8(0x0280)()
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x1778(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_53B6F76442E1E5367E83198574A7E337();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_E019B8DC42D4A76813488292D50D4442();
	void ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP(int32 EntryPoint, float CallFunc_MapRangeClamped_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_3B49A128489AAE9305B9BEACDF5446C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_5984D2B3487D5E3495C1419E61FA91AE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_AF49CEBA41A86A5239B445ACCA2A35D2();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SK_M_Med_Soldier_04_Skeleton_AnimBP_C">();
	}
	static class USK_M_Med_Soldier_04_Skeleton_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USK_M_Med_Soldier_04_Skeleton_AnimBP_C>();
	}
};

}


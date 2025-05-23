#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fortnite_Base_Head_Export_Skeleton_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C
// 0x0660 (0x0A90 - 0x0430)
class UFortnite_Base_Head_Export_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_2DB36208463E17F062E7F5BF4E3CCB47; // 0x0438(0x00E8)(ContainsInstancedReference)
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2E8A19864C147F9E6962D4B62833A246; // 0x0520(0x0070)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_EE0FD943484A5242D892BBAD15D960E5; // 0x0590(0x00E0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_011DB4AD466199563E8B448F6977A02D; // 0x0670(0x00E0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_A82DC1614C290D1966C3ADBF94D93B48; // 0x0750(0x00D0)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_BBC4F5D746D7FF174C6D41AF7E717DA6; // 0x0820(0x00E8)(ContainsInstancedReference)
	struct FAnimNode_PoseBlendNode                AnimGraphNode_PoseBlendNode_0E491F3A4C933A03AAE42DA602295362; // 0x0908(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_5FB2D799447E646601CBF8BC783E927D; // 0x09D0(0x0070)()
	struct FAnimNode_Root                         AnimGraphNode_Root_C9D648834AA29F5B677902BB5A9DC15C; // 0x0A40(0x0048)()
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x0A88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_A82DC1614C290D1966C3ADBF94D93B48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_2DB36208463E17F062E7F5BF4E3CCB47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_BBC4F5D746D7FF174C6D41AF7E717DA6();
	void ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fortnite_Base_Head_Export_Skeleton_AnimBP_C">();
	}
	static class UFortnite_Base_Head_Export_Skeleton_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortnite_Base_Head_Export_Skeleton_AnimBP_C>();
	}
};

}


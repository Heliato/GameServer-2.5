#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP.F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C
// 0x19B8 (0x1DE8 - 0x0430)
class UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C final  : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_5C7DD26F49546D1EBB268C82B88D92A7; // 0x0438(0x00E8)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_AF97E05446D515DB720FD6AEFA524081; // 0x0520(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_A9B81D6D419409628B8B1A9CE51487EA; // 0x0568(0x0070)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_76F67A4C40E3FA184AC7A8A51B83C299; // 0x05D8(0x00E0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_E8C6639148055D384AD2469FE4F8B9C3; // 0x06B8(0x00E0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_BB7F577143F6B8AE880680A99DE774D4; // 0x0798(0x00D0)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_2617FA7A478129EDBC41F0B60D02F14F; // 0x0868(0x00E8)(ContainsInstancedReference)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_ED136C744F041E5EAE8AC190BBEBDC0B; // 0x0950(0x0048)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_56A3F42B45DF5217E7FED9B251917621; // 0x0998(0x0280)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_B829034A42830E2555D025B70457A40B; // 0x0C18(0x0280)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_4F124726418173899D090583DF3F7378; // 0x0E98(0x0280)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_3EEAEF3D48EDB7FDEBD4709BAE5F6676; // 0x1118(0x0280)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_DBDE10B04D48F481FB253A8BA44ACC97; // 0x1398(0x0280)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_310B32CE4F1CA1D8E32A4AB96A9F13FC; // 0x1618(0x0280)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_6589B9834A2A8E87F6F00AB2E506957F; // 0x1898(0x0280)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_FAE2CFD3472EB9947B79D1B37B594444; // 0x1B18(0x0280)()
	struct FAnimNode_Root                         AnimGraphNode_Root_B2D640E04368BB3AFF2ABD8482F20712; // 0x1D98(0x0048)()
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x1DE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_4F124726418173899D090583DF3F7378();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_B829034A42830E2555D025B70457A40B();
	void ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP(int32 EntryPoint, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Montage_Play_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_5C7DD26F49546D1EBB268C82B88D92A7();
	void Playface();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_DBDE10B04D48F481FB253A8BA44ACC97();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_BB7F577143F6B8AE880680A99DE774D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_2617FA7A478129EDBC41F0B60D02F14F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_56A3F42B45DF5217E7FED9B251917621();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C">();
	}
	static class UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C>();
	}
};

}


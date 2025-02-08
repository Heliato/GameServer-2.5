#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_PickAxe_Jaws_Skeleton_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ImmediatePhysics_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SK_PickAxe_Jaws_Skeleton_AnimBP.SK_PickAxe_Jaws_Skeleton_AnimBP_C
// 0x0528 (0x0958 - 0x0430)
class USK_PickAxe_Jaws_Skeleton_AnimBP_C final  : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_SubInput                     AnimGraphNode_SubInput_6B147D6642EFDBB249D21998BE4ED15C; // 0x0438(0x0068)()
	struct FAnimNode_Root                         AnimGraphNode_Root_85E18924481875C844C3A3A7EA0A5DAF; // 0x04A0(0x0048)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_E40FC2B6491B2E41E87B22BE74EFDBED; // 0x04E8(0x03D8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_D00AF4E743A94A1AD17B36A5F9F03EEA; // 0x08C0(0x0048)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_DB4BDBBD424FBEF62E5517A65A3B4597; // 0x0908(0x0048)()
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x0950(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SK_PickAxe_Jaws_Skeleton_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SK_PickAxe_Jaws_Skeleton_AnimBP_C">();
	}
	static class USK_PickAxe_Jaws_Skeleton_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USK_PickAxe_Jaws_Skeleton_AnimBP_C>();
	}
};

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP

#include "Basic.hpp"


namespace SDK::Params
{

// Function F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP.F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C.ExecuteUbergraph_F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP
// 0x0030 (0x0030 - 0x0000)
struct F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C_ExecuteUbergraph_F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4269[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue1; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuScreen_Commando_C*                 K2Node_DynamicCast_AsMenu_Screen_Commando;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


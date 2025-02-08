#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Proj_Athena_Bandage

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C.ExecuteUbergraph_B_Proj_Athena_Bandage
// 0x01E8 (0x01E8 - 0x0000)
struct B_Proj_Athena_Bandage_C_ExecuteUbergraph_B_Proj_Athena_Bandage final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4226[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0008(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4227[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_Event_MyComp;                               // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_Other;                                // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bSelfMoved;                           // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4228[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_HitLocation;                          // 0x00B4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_HitNormal;                            // 0x00C0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_NormalImpulse;                        // 0x00CC(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_Hit12;                                // 0x00D8(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             K2Node_Event_Hit1;                                 // 0x0160(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C.OnBounce
// 0x0088 (0x0088 - 0x0000)
struct B_Proj_Athena_Bandage_C_OnBounce final 
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C.OnStop
// 0x0088 (0x0088 - 0x0000)
struct B_Proj_Athena_Bandage_C_OnStop final 
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C.ReceiveHit
// 0x00C8 (0x00C8 - 0x0000)
struct B_Proj_Athena_Bandage_C_ReceiveHit final 
{
public:
	class UPrimitiveComponent*                    MyComp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Other;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelfMoved;                                        // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4229[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HitLocation;                                       // 0x001C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0028(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0034(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0040(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

}


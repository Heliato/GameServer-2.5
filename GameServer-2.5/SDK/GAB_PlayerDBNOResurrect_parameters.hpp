#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_PlayerDBNOResurrect

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.ExecuteUbergraph_GAB_PlayerDBNOResurrect
// 0x0590 (0x0590 - 0x0000)
struct GAB_PlayerDBNOResurrect_C_ExecuteUbergraph_GAB_PlayerDBNOResurrect final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FAB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1234;                 // 0x0008(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1234;             // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1;                    // 0x0030(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1;                // 0x0050(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0068(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0088(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1;             // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x00A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable1;                             // 0x00A8(0x0020)()
	int32                                         CallFunc_GetDataCountFromTargetData_ReturnValue;   // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilityTask_WaitTargetSelection*   CallFunc_WaitTargetSelection_ReturnValue;          // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FAC[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable12;                            // 0x00E0(0x0020)()
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate12;            // 0x0100(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FAD[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Temp_struct_Variable123;                           // 0x0120(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData12;                   // 0x0128(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag12;               // 0x0148(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0150(0x00A8)(ConstParm)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec       CallFunc_MakeGameplayEffectContainerSpec_ReturnValue; // 0x0200(0x0080)()
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FAE[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortAbilityTargetSelection            CallFunc_Array_Get_Item;                           // 0x0288(0x0060)()
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x02E8(0x0040)(ContainsInstancedReference)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FAF[0x3];                                     // 0x0331(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0334(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0344(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetSocketRotation_ReturnValue;            // 0x034C(0x000C)(IsPlainOldData, NoDestructor)
	struct FVector_NetQuantize10                  K2Node_MakeStruct_Vector_NetQuantize10;            // 0x0358(0x000C)(NoDestructor)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x0364(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X1;                           // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y1;                           // 0x0374(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z1;                           // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x037C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantizeNormal              K2Node_MakeStruct_Vector_NetQuantizeNormal;        // 0x0380(0x000C)(NoDestructor)
	uint8                                         Pad_3FB0[0x4];                                     // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetActorsFromTargetData_ReturnValue;      // 0x0390(0x0010)(ZeroConstructor, ReferenceParm)
	struct FGameplayCueParameters                 K2Node_MakeStruct_GameplayCueParameters;           // 0x03A0(0x00B8)(ContainsInstancedReference)
	class AActor*                                 CallFunc_Array_Get_Item1;                          // 0x0458(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue12;                    // 0x0460(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FB1[0x3];                                     // 0x0461(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0464(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0469(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FB2[0x2];                                     // 0x046A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x046C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0470(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0478(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FB3[0x4];                                     // 0x0484(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item12;                         // 0x0488(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate123;           // 0x0490(0x0010)(ZeroConstructor, NoDestructor)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x04A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x04A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FB4[0x7];                                     // 0x04A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue1;   // 0x04B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue1;         // 0x04B8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x04C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x04C8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x04D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x04D8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x04E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x04E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FB5[0x2];                                     // 0x04E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x04E8(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;            // 0x04F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData123;                  // 0x04F8(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag123;              // 0x0518(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0520(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x052C(0x000C)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FB6[0x8];                                     // 0x0538(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0540(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0570(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1234;          // 0x0578(0x0010)(ZeroConstructor, NoDestructor)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0588(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GAB_PlayerDBNOResurrect_C_K2_OnEndAbility final 
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.Cancelled_0B41E4DC44D3371D619734A714E9FE50
// 0x0028 (0x0028 - 0x0000)
struct GAB_PlayerDBNOResurrect_C_Cancelled_0B41E4DC44D3371D619734A714E9FE50 final 
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.Cancelled_8E1AEF7D40AE1D4CCBACC68EEB3D87D6
// 0x0028 (0x0028 - 0x0000)
struct GAB_PlayerDBNOResurrect_C_Cancelled_8E1AEF7D40AE1D4CCBACC68EEB3D87D6 final 
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.Completed_0B41E4DC44D3371D619734A714E9FE50
// 0x0028 (0x0028 - 0x0000)
struct GAB_PlayerDBNOResurrect_C_Completed_0B41E4DC44D3371D619734A714E9FE50 final 
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GAB_PlayerDBNOResurrect_C_K2_ActivateAbilityFromEvent final 
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.Targeted_8E1AEF7D40AE1D4CCBACC68EEB3D87D6
// 0x0028 (0x0028 - 0x0000)
struct GAB_PlayerDBNOResurrect_C_Targeted_8E1AEF7D40AE1D4CCBACC68EEB3D87D6 final 
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.Triggered_0B41E4DC44D3371D619734A714E9FE50
// 0x0028 (0x0028 - 0x0000)
struct GAB_PlayerDBNOResurrect_C_Triggered_0B41E4DC44D3371D619734A714E9FE50 final 
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Bush

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_Bush.GA_Athena_Bush_C.ExecuteUbergraph_GA_Athena_Bush
// 0x0240 (0x0240 - 0x0000)
struct GA_Athena_Bush_C_ExecuteUbergraph_GA_Athena_Bush final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4216[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4217[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable;                              // 0x0020(0x0020)()
	struct FGameplayTag                           Temp_struct_Variable1;                             // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0048(0x0040)(ContainsInstancedReference)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1;                    // 0x0088(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1;                // 0x00A8(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4218[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x00C0(0x0020)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x00E0(0x0010)(ZeroConstructor, ReferenceParm)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData12;                   // 0x00F0(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag12;               // 0x0110(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1;             // 0x0118(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate12;            // 0x0128(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue1;            // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4219[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0140(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0160(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_421A[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0174(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_421B[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 K2Node_MakeStruct_GameplayCueParameters;           // 0x0180(0x00B8)(ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDBNO_ReturnValue;                       // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Athena_Bush.GA_Athena_Bush_C.Triggered_6FA77BEE4AD5C961BBDC6682C81BD718
// 0x0028 (0x0028 - 0x0000)
struct GA_Athena_Bush_C_Triggered_6FA77BEE4AD5C961BBDC6682C81BD718 final 
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Athena_Bush.GA_Athena_Bush_C.Cancelled_6FA77BEE4AD5C961BBDC6682C81BD718
// 0x0028 (0x0028 - 0x0000)
struct GA_Athena_Bush_C_Cancelled_6FA77BEE4AD5C961BBDC6682C81BD718 final 
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Athena_Bush.GA_Athena_Bush_C.Completed_6FA77BEE4AD5C961BBDC6682C81BD718
// 0x0028 (0x0028 - 0x0000)
struct GA_Athena_Bush_C_Completed_6FA77BEE4AD5C961BBDC6682C81BD718 final 
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Athena_Bush.GA_Athena_Bush_C.K2_CanActivateAbility
// 0x0090 (0x0090 - 0x0000)
struct GA_Athena_Bush_C_K2_CanActivateAbility final 
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayTagContainer                  RelevantTags;                                      // 0x0040(0x0020)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_421C[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_421D[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


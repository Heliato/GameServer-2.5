#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_Melee_GenericCombo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GAB_Melee_Generic_EventGraph_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C
// 0x0010 (0x0AD8 - 0x0AC8)
class UGAB_Melee_GenericCombo_C : public UGAB_Melee_Generic_EventGraph_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAB_Melee_GenericCombo_C;           // 0x0AC8(0x0008)(Transient, DuplicateTransient)
	float                                         OriginalMontagePlayRate;                           // 0x0AD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_Melee_GenericCombo(int32 EntryPoint, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData12, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag12, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate12, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, bool CallFunc_K2_CommitAbility_ReturnValue, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_CheckAbilityCost_ReturnValue, float CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel, bool K2Node_Event_bWasCancelled, int32 CallFunc_FTrunc_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void K2_OnEndAbility(bool bWasCancelled);
	void Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_Melee_GenericCombo_C">();
	}
	static class UGAB_Melee_GenericCombo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_Melee_GenericCombo_C>();
	}
};

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_GenericActiveAbilityNoCommit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GAT_ActiveAbility_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAT_GenericActiveAbilityNoCommit.GAT_GenericActiveAbilityNoCommit_C
// 0x00C0 (0x0B80 - 0x0AC0)
class UGAT_GenericActiveAbilityNoCommit_C : public UGAT_ActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAT_GenericActiveAbilityNoCommit_C; // 0x0AC0(0x0008)(Transient, DuplicateTransient)
	struct FGameplayEventData                     EventData;                                         // 0x0AC8(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                        FortPlayerPawn;                                    // 0x0B70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAutoCommitted;                                   // 0x0B78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsStaminaLockedOut;                                // 0x0B79(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GAT_GenericActiveAbilityNoCommit(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_GenericActiveAbilityNoCommit_C">();
	}
	static class UGAT_GenericActiveAbilityNoCommit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_GenericActiveAbilityNoCommit_C>();
	}
};

}


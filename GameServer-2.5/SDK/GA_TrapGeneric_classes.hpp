#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TrapGeneric

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TrapGeneric.GA_TrapGeneric_C
// 0x0030 (0x0AE0 - 0x0AB0)
class UGA_TrapGeneric_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB0(0x0008)(Transient, DuplicateTransient)
	class ABuildingTrap*                          CeilingTrap;                                       // 0x0AB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CachedDamageTargets;                               // 0x0AC0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         TargetArray;                                       // 0x0AD0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_TrapGeneric(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetAbilityLevel_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FGameplayTag& Temp_struct_Variable1, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetTrapLevel_ReturnValue, float CallFunc_GetDamageDelay_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, float CallFunc_GetFireDelay_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue1, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap1, bool K2Node_DynamicCast_bSuccess1, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue12, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap12, bool K2Node_DynamicCast_bSuccess12, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue123, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap123, bool K2Node_DynamicCast_bSuccess123, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1);
	void Cancelled_EFEC611E4D988CAA3867F28EE35771B3(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void Targeted_EFEC611E4D988CAA3867F28EE35771B3(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TrapGeneric_C">();
	}
	static class UGA_TrapGeneric_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TrapGeneric_C>();
	}
};

}


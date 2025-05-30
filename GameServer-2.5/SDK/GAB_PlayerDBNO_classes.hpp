#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_PlayerDBNO

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_PlayerDBNO.GAB_PlayerDBNO_C
// 0x00E8 (0x0B98 - 0x0AB0)
class UGAB_PlayerDBNO_C final  : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB0(0x0008)(Transient, DuplicateTransient)
	class UAnimMontage*                           DeathMontage;                                      // 0x0AB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DeathHitDirection;                                 // 0x0AC0(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FB7[0x4];                                     // 0x0ACC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             DeathHitResult;                                    // 0x0AD0(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FGameplayTagContainer                  DamageTags;                                        // 0x0B58(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  GameplayStatusAfflicted;                           // 0x0B78(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GAB_PlayerDBNO(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12, struct FGameplayEventData& K2Node_Event_EventData, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate123);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void OnCompleted_4B0F8658452931EE3B297A9E70C9C496();
	void OnBlendOut_4B0F8658452931EE3B297A9E70C9C496();
	void OnInterrupted_4B0F8658452931EE3B297A9E70C9C496();
	void OnCancelled_4B0F8658452931EE3B297A9E70C9C496();
	void InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData, const struct FVector& CallFunc_GetImpulseData_ImpulseDirection, float CallFunc_GetImpulseData_KnockbackMagnitude, float CallFunc_GetImpulseData_KnockbackZAngle, const struct FHitResult& CallFunc_EffectContextGetHitResult_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_PlayerDBNO_C">();
	}
	static class UGAB_PlayerDBNO_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_PlayerDBNO_C>();
	}
};

}


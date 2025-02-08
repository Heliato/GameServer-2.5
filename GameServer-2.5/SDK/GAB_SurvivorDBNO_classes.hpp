#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_SurvivorDBNO

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_SurvivorDBNO.GAB_SurvivorDBNO_C
// 0x0030 (0x0AE0 - 0x0AB0)
class UGAB_SurvivorDBNO_C final  : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB0(0x0008)(Transient, DuplicateTransient)
	float                                         PlaySpeechLoopingTime;                             // 0x0AB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AE2[0x4];                                     // 0x0ABC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  GameplayStatusAfflicted;                           // 0x0AC0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GAB_SurvivorDBNO(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate123, bool K2Node_Event_bWasCancelled, struct FGameplayEventData& K2Node_Event_EventData, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess);
	void PlayDownedSpeech();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnBlendOut_30185FB0432AA030CE779FBAA5AE1A56();
	void OnCancelled_30185FB0432AA030CE779FBAA5AE1A56();
	void OnCompleted_30185FB0432AA030CE779FBAA5AE1A56();
	void OnInterrupted_30185FB0432AA030CE779FBAA5AE1A56();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_SurvivorDBNO_C">();
	}
	static class UGAB_SurvivorDBNO_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_SurvivorDBNO_C>();
	}
};

}


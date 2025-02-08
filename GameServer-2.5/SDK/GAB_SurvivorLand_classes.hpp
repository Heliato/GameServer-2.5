#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_SurvivorLand

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_SurvivorLand.GAB_SurvivorLand_C
// 0x0010 (0x0AC0 - 0x0AB0)
class UGAB_SurvivorLand_C final  : public UFortGameplayAbility_Land
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB0(0x0008)(Transient, DuplicateTransient)
	class FName                                   SectionName;                                       // 0x0AB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_SurvivorLand(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate123, bool CallFunc_K2_CommitAbility_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void K2_ActivateAbility();
	void OnBlendOut_7174BD024E3A05F4D5E859B97A1D076C();
	void OnCancelled_7174BD024E3A05F4D5E859B97A1D076C();
	void OnCompleted_7174BD024E3A05F4D5E859B97A1D076C();
	void OnInterrupted_7174BD024E3A05F4D5E859B97A1D076C();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_SurvivorLand_C">();
	}
	static class UGAB_SurvivorLand_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_SurvivorLand_C>();
	}
};

}


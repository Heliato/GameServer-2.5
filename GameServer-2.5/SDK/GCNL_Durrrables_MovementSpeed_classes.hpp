#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Durrrables_MovementSpeed

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C
// 0x0030 (0x0470 - 0x0440)
class AGCNL_Durrrables_MovementSpeed_C final  : public AFortGameplayCueNotify_Looping
{
public:
	class FName                                   LeftFootAttachName;                                // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RightFootAttachName;                               // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        MovementSpeedParticleSystem;                       // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               LeftFootEmitter;                                   // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               RightFootEmitter;                                  // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class USceneComponent* TargetComp, class USceneComponent* CallFunc_GetTargetComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, bool CallFunc_IsValid_ReturnValue1);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Durrrables_MovementSpeed_C">();
	}
	static class AGCNL_Durrrables_MovementSpeed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Durrrables_MovementSpeed_C>();
	}
};

}


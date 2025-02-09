#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_UG_Vortex

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_UG_Vortex.GCN_UG_Vortex_C
// 0x0010 (0x0450 - 0x0440)
class AGCN_UG_Vortex_C final  : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0440(0x0008)(Transient, DuplicateTransient)
	class UDecalComponent*                        Decal;                                             // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCN_UG_Vortex(int32 EntryPoint, class AActor* K2Node_Event_MyTarget, EGameplayCueEvent K2Node_Event_EventType, struct FGameplayCueParameters& K2Node_Event_Parameters, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult);
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_UG_Vortex_C">();
	}
	static class AGCN_UG_Vortex_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_UG_Vortex_C>();
	}
};

}


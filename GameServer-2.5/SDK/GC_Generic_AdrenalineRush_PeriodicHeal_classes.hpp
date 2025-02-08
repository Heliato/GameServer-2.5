#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Generic_AdrenalineRush_PeriodicHeal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C
// 0x0040 (0x0400 - 0x03C0)
class AGC_Generic_AdrenalineRush_PeriodicHeal_C final  : public AGameplayCueNotify_Actor
{
public:
	uint8                                         Pad_2F45[0x8];                                     // 0x03B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(Transient, DuplicateTransient)
	class UParticleSystemComponent*               HealVFX;                                           // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Health_Sweep_SafetyOpacity_3240057E4D088EF0898241BE4DC90C25; // 0x03D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Health_Sweep_Sweep_3240057E4D088EF0898241BE4DC90C25; // 0x03DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Health_Sweep__Direction_3240057E4D088EF0898241BE4DC90C25; // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F46[0x7];                                     // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Health_Sweep;                                      // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Generic_C*                  GC_Target_Pawn;                                    // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* K2Node_Event_MyTarget, EGameplayCueEvent K2Node_Event_EventType, struct FGameplayCueParameters& K2Node_Event_Parameters, bool CallFunc_IsPlaying_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HealthCheck_Check_Return, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
	void Health_Sweep__UpdateFunc();
	void Health_Sweep__FinishedFunc();
	void UserConstructionScript();
	void HealthCheck(bool* Check_Return, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Generic_AdrenalineRush_PeriodicHeal_C">();
	}
	static class AGC_Generic_AdrenalineRush_PeriodicHeal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Generic_AdrenalineRush_PeriodicHeal_C>();
	}
};

}


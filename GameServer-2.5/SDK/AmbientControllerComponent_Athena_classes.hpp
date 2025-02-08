#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AmbientControllerComponent_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C
// 0x0078 (0x0168 - 0x00F0)
class UAmbientControllerComponent_Athena_C final  : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00F0(0x0008)(Transient, DuplicateTransient)
	class USoundBase*                             Loop_Morning;                                      // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Loop_Evening;                                      // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Loop_Indoors;                                      // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Loop_Night;                                        // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Loop_Day;                                          // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AmbientMixA;                                       // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AmbientMixB;                                       // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bActiveMixIsA;                                     // 0x0130(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37E1[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CheckFrequency;                                    // 0x0134(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsInsidePrevious;                                 // 0x0138(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsInsideCurrent;                                  // 0x0139(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37E2[0x6];                                     // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        AmbientMixIndoor;                                  // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      PlayerController;                                  // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetLPFFreq;                                     // 0x0150(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentLPFFreq;                                    // 0x0154(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InsideLPFFreq;                                     // 0x0158(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OutsideLPFFreq;                                    // 0x015C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CurrentOneShot;                                    // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AmbientControllerComponent_Athena(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, EFortDayPhase Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, EFortDayPhase Temp_byte_Variable1, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue1, EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue12, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, EFortDayPhase K2Node_CustomEvent_CurrentDayPhase, EFortDayPhase K2Node_CustomEvent_PreviousDayPhase, bool K2Node_CustomEvent_bAtCreation, TDelegate<void(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation)> K2Node_CreateDelegate_OutputDelegate1, class USoundBase* K2Node_Select_Default, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue1, class AActor* CallFunc_GetViewTarget_ReturnValue1, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, class USoundBase* K2Node_Select1_Default, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, bool CallFunc_Trace_ReturnValue, bool CallFunc_Trace_ReturnValue1, bool CallFunc_Trace_ReturnValue12, bool CallFunc_Trace_ReturnValue123, bool CallFunc_Trace_ReturnValue1234, float K2Node_Event_DeltaSeconds, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess1, EAthenaGamePhase K2Node_CustomEvent_GamePhase, TDelegate<void(EAthenaGamePhase GamePhase)> K2Node_CreateDelegate_OutputDelegate12, bool K2Node_SwitchEnum_CmpSuccess, EAthenaGamePhaseStep K2Node_CustomEvent_GamePhaseStep, TDelegate<void(EAthenaGamePhaseStep GamePhaseStep)> K2Node_CreateDelegate_OutputDelegate123, bool K2Node_SwitchEnum1_CmpSuccess, bool K2Node_CustomEvent_Enabled, bool CallFunc_IsValid_ReturnValue123, bool CallFunc_IsBROnly_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Set_Storm_Amb_Layer_Enabled(bool Enabled);
	void On_Game_Phase_Step_Change(EAthenaGamePhaseStep GamePhaseStep);
	void On_Game_Phase_Change(EAthenaGamePhase GamePhase);
	void ReceiveTick(float DeltaSeconds);
	void On_Day_Phase_Change(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void Evaluate_Inside_State();
	void OnCheckIfSurrounded();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void RegisterTimeOfDayCallbacks();
	void Crossfade(class USoundBase* NewSound, class USoundBase* NewSoundLocal, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue1);
	bool Trace(const struct FVector& Start, const struct FVector& Direction, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue);
	void SetIndoorMixEnabled(bool Enabled, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
	void SetTargetLPFFreq(float Target);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AmbientControllerComponent_Athena_C">();
	}
	static class UAmbientControllerComponent_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAmbientControllerComponent_Athena_C>();
	}
};

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_SmokeGrenade_FXVolume

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Athena_SmokeGrenade_FXVolume.B_Prj_Athena_SmokeGrenade_FXVolume_C
// 0x00D8 (0x03F0 - 0x0318)
class AB_Prj_Athena_SmokeGrenade_FXVolume_C final  : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_Athena_SmokeGrenade_OuterSmoke_01;               // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  PostProcessComponent;                              // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       PostProcessParentShape;                            // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio_ReleaseSmoke;                                // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SmokeVolumeMesh;                                   // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         FadeSmokeTL_Float_A3928DBE485CA9BEA3B031B9AC851F3F; // 0x0350(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FadeSmokeTL__Direction_A3928DBE485CA9BEA3B031B9AC851F3F; // 0x0354(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CC9[0x3];                                     // 0x0355(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FadeSmokeTL;                                       // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  SmokePP;                                           // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SmokebombLifespan;                                 // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SmokebombRadius;                                   // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AFortPawn*                              Pawn;                                              // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               SmokeVolumeMeshMID;                                // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SmokeFadeValue;                                    // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SmokeFadeInTime;                                   // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SmokeFadeOutTime;                                  // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SmokeDelayBeforeFadeIn;                            // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AdjustedDistanceValue;                             // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PreviousAdjustedDistanceValue;                     // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PPEndFadeRadius;                                   // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PPStartFadeRadius;                                 // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TickDistanceCheckInterval;                         // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PreviousScopeValue;                                // 0x03A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CCA[0x3];                                     // 0x03A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ScopeStateSwappedTime;                             // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CCB[0x4];                                     // 0x03AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector4                               PPGainColorMorning;                                // 0x03B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               PPGainColorDay;                                    // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               PPGainColorEvening;                                // 0x03D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               PPGainColorNight;                                  // 0x03E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Prj_Athena_SmokeGrenade_FXVolume(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_Variable1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float Temp_float_Variable1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue12, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, float K2Node_Select1_Default, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable12, float K2Node_Select12_Default, float CallFunc_DistanceFromPlayerToPPVolumeCenter_Distance, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, bool CallFunc_IsActorTickEnabled_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_AdjustedDistanceFromPlayerToPPVolumeCenter_DistanceOut, bool CallFunc_AdjustedDistanceFromPlayerToPPVolumeCenter_bPlayerIsUsingScope, bool CallFunc_EqualEqual_BoolBool_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue);
	void TickDistanceCheck();
	void ReceiveTick(float DeltaSeconds);
	void FadeOut();
	void FadeIn();
	void ReceiveBeginPlay();
	void FadeSmokeTL__UpdateFunc();
	void FadeSmokeTL__FinishedFunc();
	void UserConstructionScript(float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue);
	void AdjustedDistanceFromPlayerToPPVolumeCenter(float Param_ScopeStateSwappedTime, float* DistanceOut, bool* bPlayerIsUsingScope, float DistanceLerpSpeed, float DistanceScopedLocalVariable, bool PlayerIsUsingScope, float DistanceLocalVariable, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, bool Temp_bool_Variable, class APlayerPawn_Athena_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic, bool K2Node_DynamicCast_bSuccess, float K2Node_Select_Default, float CallFunc_FClamp_ReturnValue, class AB_Ranged_Generic_C* K2Node_DynamicCast_AsB_Ranged_Generic, bool K2Node_DynamicCast_bSuccess1, float CallFunc_Lerp_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, bool CallFunc_UseScopeTargeting_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_FClamp_ReturnValue1, const struct FVector& CallFunc_Normal_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue12, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_FClamp_ReturnValue12, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue12, float CallFunc_Lerp_ReturnValue1);
	void GetPlayerPawn(TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess);
	void DistanceFromPlayerToPPVolumeCenter(float* Distance, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Athena_SmokeGrenade_FXVolume_C">();
	}
	static class AB_Prj_Athena_SmokeGrenade_FXVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Athena_SmokeGrenade_FXVolume_C>();
	}
};

}


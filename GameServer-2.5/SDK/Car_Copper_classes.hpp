#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Car_Copper

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Car_Copper.Car_Copper_C
// 0x01D0 (0x0FD0 - 0x0E00)
class ACar_Copper_C final  : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E00(0x0008)(Transient, DuplicateTransient)
	float                                         Timeline_2_SirenLightMultiplier_0FF34BB7440D69B151AEB98B69DAACB9; // 0x0E08(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_2__Direction_0FF34BB7440D69B151AEB98B69DAACB9; // 0x0E0C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BEF[0x3];                                     // 0x0E0D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_2;                                        // 0x0E10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BounceCar_Vertical_Bounce_Component_05733C554001D77C015F47B548F45A12; // 0x0E18(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            BounceCar__Direction_05733C554001D77C015F47B548F45A12; // 0x0E1C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BF0[0x3];                                     // 0x0E1D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     BounceCar;                                         // 0x0E20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_AlarmLightMultiplier_0249B75D481A6B889F74E6BC52A3E21B; // 0x0E28(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_0249B75D481A6B889F74E6BC52A3E21B; // 0x0E2C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BF1[0x3];                                     // 0x0E2D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0E30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OverallAlarmCycleFinished;                         // 0x0E38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BF2[0x3];                                     // 0x0E39(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           InitialEmissiveMultiplier;                         // 0x0E3C(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           InitialEmissiveMultiplier2;                        // 0x0E4C(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AlarmLightCounter;                                 // 0x0E5C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SoundIsRetriggerable;                              // 0x0E60(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CurrentFlashAnimationCycleFinished;                // 0x0E61(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BF3[0x2];                                     // 0x0E62(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumberOfTimesTheLightsFlashWhenHit;                // 0x0E64(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SirenLightEmissiveMultiplier;                      // 0x0E68(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SirenLightOn;                                      // 0x0E6C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BF4[0x3];                                     // 0x0E6D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Emissive_Multiplier_2;                             // 0x0E70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Emissive_Multiplier;                               // 0x0E78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_Minus_HitAlarm;                              // 0x0E80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Emissive_2;                                    // 0x0E88(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BF5[0x7];                                     // 0x0E89(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Sound_Minus_Jump_on_Car;                           // 0x0E90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SuspensionMovementAmount;                          // 0x0E98(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ParticleEffectHas_NOT_AlreadyBeenTriggered;        // 0x0E9C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BF6[0x3];                                     // 0x0E9D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               EngineSteamParticleEffect;                         // 0x0EA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_Minus_Hit_AutoBody;                          // 0x0EA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanMakeJumpingNoiseAgain;                          // 0x0EB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CarAlarmIsCurrentlyMakingNoise;                    // 0x0EB1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CarAlarmEnabled;                                   // 0x0EB2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RandomlyDisableSomeCarAlarms;                      // 0x0EB3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         PercentageChanceOfCarAlarmsBeingDisabled;          // 0x0EB4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   HLight1;                                           // 0x0EB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HLight1SocketLocation;                             // 0x0EC0(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HLight2SocketLocation;                             // 0x0ECC(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       AnimatingMIDArray;                                 // 0x0ED8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAudioComponent*                        AudibleAlarmSound;                                 // 0x0EE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseCarBounce;                                      // 0x0EF0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UseCarAlarm;                                       // 0x0EF1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BF7[0x2];                                     // 0x0EF2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Headlight_Emissive_Brightness;                     // 0x0EF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCarAlarmEnabledInitialized;                      // 0x0EF8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DebugWind;                                         // 0x0EF9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BF8[0x6];                                     // 0x0EFA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             OriginalMaterials;                                 // 0x0F00(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>             IntenseWindMaterialsForPreview;                    // 0x0F10(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*               Debug_TempMaterial;                                // 0x0F20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Debug_Wind_Intensity;                              // 0x0F28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BF9[0x4];                                     // 0x0F2C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   Wind_Intensity_Debug_Mesh;                         // 0x0F30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanDropOilDecal;                                   // 0x0F38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BFA[0x3];                                     // 0x0F39(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Wind_Yaw_Rotation;                                 // 0x0F3C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   Taillight1;                                        // 0x0F40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   Taillight2;                                        // 0x0F48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TailLightBrightness;                               // 0x0F50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TailLightsExist;                                   // 0x0F54(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HeadLightsExist;                                   // 0x0F55(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BFB[0x2];                                     // 0x0F56(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USpotLightComponent*                    HLight2;                                           // 0x0F58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeadLightLightBrightness;                          // 0x0F60(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TLight1SocketLocation;                             // 0x0F64(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TLight2SocketLocation;                             // 0x0F70(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Bounce_Offset;                                     // 0x0F7C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Hlight2_Minus_impact_bounce_light_location;        // 0x0F88(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Tlight2_Minus_impact_bounce_light_location;        // 0x0F94(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Car_Currently_Bouncing_From_Jump;                  // 0x0FA0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BFC[0x3];                                     // 0x0FA1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Hlight1_Minus_impact_bounce_light_location;        // 0x0FA4(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Tlight1_Minus_impact_bounce_light_location;        // 0x0FB0(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Randomly_start_with_some_cars_lights_on;           // 0x0FBC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BFD[0x3];                                     // 0x0FBD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Percentage_chance_of_lights_being_left_off;        // 0x0FC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Final_Random_Light_Intensity_Variance;             // 0x0FC4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          This_Car_s_Lights_Have_Been_Randomly_Enabled;      // 0x0FC8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TurnHeadLightsOn;                                  // 0x0FC9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_Car_Copper(int32 EntryPoint, float CallFunc_GetScalarParameterValue_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue1, float CallFunc_GetScalarParameterValue_ReturnValue12, float CallFunc_GetScalarParameterValue_ReturnValue123, int32 CallFunc_Array_LastIndex_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable1, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, struct FHitResult& K2Node_Event_Hit, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue1, const struct FVector& CallFunc_GetComponentVelocity_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue1, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FVector& CallFunc_MakeVector_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float K2Node_Event_Damage12, struct FGameplayTagContainer& K2Node_Event_DamageTags12, const struct FVector& K2Node_Event_Momentum12, struct FHitResult& K2Node_Event_HitInfo12, class AFortPawn* K2Node_Event_InstigatedBy12, class AActor* K2Node_Event_DamageCauser12, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext12, float K2Node_Event_Damage1, struct FGameplayTagContainer& K2Node_Event_DamageTags1, const struct FVector& K2Node_Event_Momentum1, struct FHitResult& K2Node_Event_HitInfo1, class AFortPawn* K2Node_Event_InstigatedBy1, class AActor* K2Node_Event_DamageCauser1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetBuildingHealthPercentage_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue12, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool Temp_bool_IsClosed_Variable1, bool CallFunc_BooleanAND_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue, EEndPlayReason K2Node_Event_EndPlayReason, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, bool CallFunc_HasHealthLeft_ReturnValue, float K2Node_Event_Damage, struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue12, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue12, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue12, bool Temp_bool_Variable, const struct FFortBounceData& K2Node_Event_Data, const struct FVector& K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_BreakColor_R1, float CallFunc_BreakColor_G1, float CallFunc_BreakColor_B1, float CallFunc_BreakColor_A1, float CallFunc_BreakColor_R12, float CallFunc_BreakColor_G12, float CallFunc_BreakColor_B12, float CallFunc_BreakColor_A12, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue12, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, float CallFunc_BreakColor_R123, float CallFunc_BreakColor_G123, float CallFunc_BreakColor_B123, float CallFunc_BreakColor_A123, float CallFunc_BreakColor_R1234, float CallFunc_BreakColor_G1234, float CallFunc_BreakColor_B1234, float CallFunc_BreakColor_A1234, const struct FVector& CallFunc_MakeVector_ReturnValue123, const struct FVector& CallFunc_MakeVector_ReturnValue1234, float CallFunc_BreakColor_R12345, float CallFunc_BreakColor_G12345, float CallFunc_BreakColor_B12345, float CallFunc_BreakColor_A12345, float CallFunc_BreakColor_R123456, float CallFunc_BreakColor_G123456, float CallFunc_BreakColor_B123456, float CallFunc_BreakColor_A123456, const struct FVector& CallFunc_MakeVector_ReturnValue12345, const struct FVector& CallFunc_MakeVector_ReturnValue123456, bool CallFunc_EqualEqual_ByteByte_ReturnValue123, float CallFunc_BreakColor_R1234567, float CallFunc_BreakColor_G1234567, float CallFunc_BreakColor_B1234567, float CallFunc_BreakColor_A1234567, float CallFunc_BreakColor_R12345678, float CallFunc_BreakColor_G12345678, float CallFunc_BreakColor_B12345678, float CallFunc_BreakColor_A12345678, const struct FVector& CallFunc_MakeVector_ReturnValue1234567, const struct FVector& CallFunc_MakeVector_ReturnValue12345678, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue1, float CallFunc_VSize_ReturnValue, float CallFunc_VSize_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue12, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue123, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1234, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue12345, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& Temp_struct_Variable, bool Temp_bool_Variable1, const struct FVector& K2Node_Select1_Default, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue12, float CallFunc_VSize_ReturnValue12, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue123, float CallFunc_Divide_FloatFloat_ReturnValue12, float CallFunc_VSize_ReturnValue123, float CallFunc_FClamp_ReturnValue12, float CallFunc_Divide_FloatFloat_ReturnValue123, float CallFunc_Subtract_FloatFloat_ReturnValue12, float CallFunc_FClamp_ReturnValue123, float CallFunc_SelectFloat_ReturnValue12, float CallFunc_Subtract_FloatFloat_ReturnValue123, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue123456, float CallFunc_SelectFloat_ReturnValue123, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1234567, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue12345678, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue123456789, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue12345678910, const struct FVector& CallFunc_Add_VectorVector_ReturnValue12, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1234567891011, const struct FVector& CallFunc_Add_VectorVector_ReturnValue123, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1234, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_Add_VectorVector_ReturnValue12345, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue123456, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1234567, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult12, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult123, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue123456789101112, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, int32 Temp_int_Variable1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue12, bool CallFunc_IsDedicatedServer_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue12345678910111213, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue, ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1234, float CallFunc_RandomFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_RandomBool_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue123456789, float CallFunc_SelectFloat_ReturnValue1234, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue12, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue123, bool CallFunc_DoesSocketExist_ReturnValue1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue12, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue12345678, const struct FVector& CallFunc_TransformLocation_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue123, bool CallFunc_SetCarAlarmEnabledBasedOnLocation_NewParam, float CallFunc_SetCarAlarmEnabledBasedOnLocation_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue1234, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue1, int32 Temp_int_Variable12, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item1, bool CallFunc_LessEqual_IntInt_ReturnValue12, int32 CallFunc_Add_IntInt_ReturnValue123, float CallFunc_Conv_BoolToFloat_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1234, const struct FVector& CallFunc_Add_VectorVector_ReturnValue123456789, bool CallFunc_SetCarAlarmEnabledBasedOnLocation_NewParam1, float CallFunc_SetCarAlarmEnabledBasedOnLocation_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue1);
	void Player_jump_based_bounce_();
	void Hit_Bounce_Finished();
	void OnBounceAnimationUpdate(const struct FFortBounceData& Data);
	void FireOffCarAlarm();
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void TriggerLowHealthParticleEffect();
	void FadeSirenLight();
	void StartSirenLight();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void Timeline_2__FireOffNoise__EventFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void BounceCar__UpdateFunc();
	void BounceCar__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void UserConstructionScript(const TArray<class FName>& ParametersToLerp, class FName Wind_offset_1, class FName Wind_1_Random_Rotation_Influence, class FName Max_Rotation_1, class FName Wind_1_Random_Rotation_Change_Rate, struct FTransform& Temp_struct_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class USpotLightComponent* CallFunc_AddComponent_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable, TArray<class FName>& K2Node_MakeArray_Array, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_DoesSocketExist_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, struct FTransform& Temp_struct_Variable1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue1, struct FTransform& Temp_struct_Variable12, struct FTransform& Temp_struct_Variable123, class USpotLightComponent* CallFunc_AddComponent_ReturnValue12, class USpotLightComponent* CallFunc_AddComponent_ReturnValue123, TArray<class UMaterialInterface*>& CallFunc_GetIntenseWindMaterialsForPreview_Materials, bool CallFunc_GetIntenseWindMaterialsForPreview_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable1, class FName CallFunc_Array_Get_Item1, class UCurveLinearColor* CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class UCurveLinearColor* CallFunc_GetWindSpeedCurveForPreview_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, struct FTransform& Temp_struct_Variable1234, class UMaterialInterface* CallFunc_Array_Get_Item12, class USpotLightComponent* CallFunc_AddComponent_ReturnValue1234, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, float CallFunc_K2_GetScalarParameterValue_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, class UCurveLinearColor* CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue1, class UCurveLinearColor* CallFunc_GetWindSpeedCurveForPreview_ReturnValue1, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, bool CallFunc_IsValid_ReturnValue12, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue1, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue12, float CallFunc_BreakColor_R1, float CallFunc_BreakColor_G1, float CallFunc_BreakColor_B1, float CallFunc_BreakColor_A1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue1, class UMaterialInterface* CallFunc_Array_Get_Item123, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12, float CallFunc_K2_GetScalarParameterValue_ReturnValue1, float CallFunc_Lerp_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue123, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue12, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue123, const struct FVector& CallFunc_BreakTransform_Location12, const struct FRotator& CallFunc_BreakTransform_Rotation12, const struct FVector& CallFunc_BreakTransform_Scale12, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult12, const struct FVector& CallFunc_BreakTransform_Location123, const struct FRotator& CallFunc_BreakTransform_Rotation123, const struct FVector& CallFunc_BreakTransform_Scale123, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult123, bool CallFunc_DoesSocketExist_ReturnValue12, bool CallFunc_DoesSocketExist_ReturnValue123, bool CallFunc_BooleanAND_ReturnValue1);
	void StopCarAlarmFromPlaying();
	void Setcanmakebouncingnoisetrue();
	float SetCarAlarmEnabledBasedOnLocation(const struct FVector& Location, bool* NewParam, float Random_Value_5_59614, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_FCeil_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue12, float CallFunc_MaterialEditorSine_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue12, float CallFunc_Add_FloatFloat_ReturnValue123, float CallFunc_MaterialEditorSine_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue123, float CallFunc_Add_FloatFloat_ReturnValue1234, float CallFunc_MaterialEditorSine_ReturnValue12, float CallFunc_Multiply_FloatFloat_ReturnValue1234, float CallFunc_Multiply_FloatFloat_ReturnValue12345, float CallFunc_Fraction_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	float MaterialEditorSine(float Look_up_value, float Period, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_DegSin_ReturnValue);
	void Set_Light_Brightness(float ZeroMinus1_Intensity, bool Include_Second_Emissive_Channel, int32 Temp_int_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& Temp_struct_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, bool Temp_bool_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue12, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_BreakColor_R1, float CallFunc_BreakColor_G1, float CallFunc_BreakColor_B1, float CallFunc_BreakColor_A1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue1, const struct FLinearColor& K2Node_Select_Default);
	void Randomize_the_target_brightness_levels(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue12, float CallFunc_Multiply_FloatFloat_ReturnValue123, float CallFunc_RandomFloatInRange_ReturnValue);
	void Toggle_light_visibility(bool bNewVisibility, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_IsValid_ReturnValue123, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue12);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Car_Copper_C">();
	}
	static class ACar_Copper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACar_Copper_C>();
	}
};

}


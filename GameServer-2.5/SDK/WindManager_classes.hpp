#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WindManager

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "StaticMeshMaterialArrayCombo_structs.hpp"
#include "ArrayOfWaterMeshWaterBlueprintPairs_structs.hpp"
#include "FlowMapMaterials_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WindManager.WindManager_C
// 0x0118 (0x06B8 - 0x05A0)
class AWindManager_C final  : public AFortWindManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05A0(0x0008)(Transient, DuplicateTransient)
	class UParticleSystemComponent*               WaterInteractionParticle;                          // 0x05A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   EmptyStaticMesh;                                   // 0x05B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               TopDownCaptureActorOfTheWorld;                     // 0x05B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D01;                         // 0x05C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x05C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         SmallerRenderTargetOrthoWidth;                     // 0x05D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D43[0x4];                                     // 0x05D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         External_Test_Actor;                               // 0x05D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AFortStaticMeshActor*>           World_Terrain_Meshes;                              // 0x05E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                                Camera_Height_Offset;                              // 0x05F8(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Particle_Z_Offset;                                 // 0x0604(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Has_Water_Interaction_Enabled_Variable_Been_Set;   // 0x0608(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Is_Water_Interaction_Enabled;                      // 0x0609(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D44[0x6];                                     // 0x060A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FStaticMeshMaterialArrayCombo>  WorldStaticMeshArray;                              // 0x0610(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FArrayOfWaterMeshWaterBlueprintPairs   Array_Of_Water_Assets;                             // 0x0620(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                    PrototypicalStaticMeshes;                          // 0x0630(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         Current_Water_Mesh_Index;                          // 0x0640(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D45[0x4];                                     // 0x0644(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFlowMapMaterials>              WaterVectorMatToDefaultMaterialPairing;            // 0x0648(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          MaterialPairingFound;                              // 0x0658(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D46[0x3];                                     // 0x0659(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           WorldBoundsMinMax;                                 // 0x065C(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D47[0x4];                                     // 0x066C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Black_Scene_Capture_Material;                      // 0x0670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBox                                   Max_level_bounds_Minus_used_to_isolate_the_level_from_the_vista; // 0x0678(0x001C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D48[0x4];                                     // 0x0694(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMeshComponent*>           StormCylinderMeshes;                               // 0x0698(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          Storm_Cyl_Mesh_Match;                              // 0x06A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D49[0x3];                                     // 0x06A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Wind_Cyl_Mesh_Array_Match_Index;                   // 0x06AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Delta_Wind_Falloff_in_World_Units;                 // 0x06B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortWindImpulseHandle                 NewVar_1;                                          // 0x06B4(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_WindManager(int32 EntryPoint, struct FTransform& Temp_struct_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, int32 Temp_int_Array_Index_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class AFortStaticMeshActor*>& CallFunc_GetAllActorsOfClass_OutActors, class UParticleSystem* K2Node_CustomEvent_EmitterTemplate, struct FTransform& K2Node_CustomEvent_InTransform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 Temp_int_Loop_Counter_Variable1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Loop_Counter_Variable12, int32 CallFunc_Add_IntInt_ReturnValue12, float CallFunc_GetScalarParameterValue_ReturnValue, float K2Node_Event_DeltaSeconds, class APlayerPawn_Generic_C* K2Node_CustomEvent_Player_Pawn_Generic, int32 Temp_int_Array_Index_Variable1, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue12, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue123, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable12, const struct FStaticMeshMaterialArrayCombo& CallFunc_Array_Get_Item, class UMaterialInterface* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1234, bool CallFunc_Less_IntInt_ReturnValue12, int32 Temp_int_Loop_Counter_Variable123, int32 CallFunc_Add_IntInt_ReturnValue123, bool CallFunc_IsDedicatedServer_ReturnValue1, const struct FWaterMeshAssetsToReplace& CallFunc_Array_Get_Item12, const struct FWaterMeshAssetsToReplace& CallFunc_Array_Get_Item123, int32 CallFunc_Array_Length_ReturnValue12345, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue123, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_BreakColor_R1, float CallFunc_BreakColor_G1, float CallFunc_BreakColor_B1, float CallFunc_BreakColor_A1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Abs_ReturnValue, float CallFunc_Abs_ReturnValue1, int32 Temp_int_Loop_Counter_Variable1234, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue12, float CallFunc_BreakVector2D_X1, float CallFunc_BreakVector2D_Y1, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X12, float CallFunc_BreakVector2D_Y12, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1234, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, int32 CallFunc_Add_IntInt_ReturnValue1234, int32 Temp_int_Array_Index_Variable123, const struct FFlowMapMaterials& CallFunc_Array_Get_Item1234, int32 Temp_int_Array_Index_Variable1234, class AFortStaticMeshActor* CallFunc_Array_Get_Item12345, const struct FVector& CallFunc_Calculate_Camera_Position_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult1, int32 CallFunc_Array_Length_ReturnValue123456, int32 CallFunc_Array_Length_ReturnValue1234567, const struct FStaticMeshMaterialArrayCombo& K2Node_MakeStruct_StaticMeshMaterialArrayCombo, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue1, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, int32 CallFunc_Array_Find_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, float CallFunc_FMin_ReturnValue, float CallFunc_BreakVector_X12, float CallFunc_BreakVector_Y12, float CallFunc_BreakVector_Z12, float CallFunc_FMin_ReturnValue1, float CallFunc_FMax_ReturnValue1, float CallFunc_FMax_ReturnValue12, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X123, float CallFunc_BreakVector_Y123, float CallFunc_BreakVector_Z123, bool Temp_bool_True_if_break_was_hit_Variable1, float CallFunc_BreakVector_X1234, float CallFunc_BreakVector_Y1234, float CallFunc_BreakVector_Z1234, float CallFunc_BreakVector_X12345, float CallFunc_BreakVector_Y12345, float CallFunc_BreakVector_Z12345, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue12, bool CallFunc_Greater_FloatFloat_ReturnValue123, bool CallFunc_Greater_FloatFloat_ReturnValue1234, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue12345, bool CallFunc_BooleanAND_ReturnValue12, bool CallFunc_BooleanAND_ReturnValue123, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1234, int32 Temp_int_Array_Index_Variable12345, bool CallFunc_BooleanAND_ReturnValue12345, int32 Temp_int_Loop_Counter_Variable12345, class UStaticMesh* Temp_object_Variable, bool CallFunc_Less_IntInt_ReturnValue12345, int32 CallFunc_Add_IntInt_ReturnValue12345, int32 Temp_int_Array_Index_Variable123456, int32 Temp_int_Loop_Counter_Variable123456, class AActor* CallFunc_Array_Get_Item123456, bool CallFunc_Less_IntInt_ReturnValue123456, bool CallFunc_BooleanAND_ReturnValue123456, int32 CallFunc_Add_IntInt_ReturnValue123456, class UParticleSystemComponent* K2Node_Event_ParticleSystemComponent, struct FFortWindImpulseCylinder& K2Node_Event_WindImpulseCylinder12, struct FFortWindImpulseCylinderDelta& K2Node_Event_WindImpulseCylinderDelta, struct FFortWindImpulseCylinder& K2Node_Event_WindImpulseCylinder1, struct FFortWindImpulseCylinder& K2Node_Event_WindImpulseCylinder, float CallFunc_GetGlobalWindIntensityAndDirection_WindIntensity, const struct FVector& CallFunc_GetGlobalWindIntensityAndDirection_WindDirection, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation, float CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius, float CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection, float CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude, const struct FBox& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, bool CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match, int32 CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index, bool CallFunc_SetWindMatVariables_NewParam, float K2Node_CustomEvent_Radius, float K2Node_CustomEvent_ImpulseMagnitude, const struct FVector& CallFunc_MakeVector_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FTransform& K2Node_CustomEvent_Particle_Transform, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, float CallFunc_MakeLiteralFloat_ReturnValue, class UPrimitiveComponent* K2Node_CustomEvent_InComponent, const struct FVector& CallFunc_MakeVector_ReturnValue12, float K2Node_CustomEvent_NewMagnitude, const struct FFortWindImpulseCylinder& CallFunc_MakeWindImpulseCylinder_ReturnValue, const struct FFortWindImpulseHandle& CallFunc_AddWindImpulseCylinder_ReturnValue, bool CallFunc_SetWindImpulseCylinderMagnitude_ReturnValue, int32 Temp_int_Loop_Counter_Variable1234567, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1234567, int32 CallFunc_Add_IntInt_ReturnValue1234567, class FName CallFunc_MakeLiteralName_ReturnValue1, class FName CallFunc_MakeLiteralName_ReturnValue12, int32 Temp_int_Array_Index_Variable1234567, class UMaterialInterface* CallFunc_Array_Get_Item1234567, class UStaticMeshComponent* CallFunc_Array_Get_Item12345678, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, float CallFunc_K2_GetScalarParameterValue_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1);
	void Update_Test(float NewMagnitude);
	void ReceiveBeginPlay();
	void Add_Wind_Component(class UPrimitiveComponent* InComponent);
	void Play_Water_Splash_Particle_System_At_Location(const struct FTransform& Particle_Transform);
	void SpawnTestWind(float Radius, float ImpulseMagnitude);
	void OnWindImpulseCylinderDeltaComplete(struct FFortWindImpulseCylinder& WindImpulseCylinder);
	void OnWindImpulseCylinderDeath(struct FFortWindImpulseCylinder& WindImpulseCylinder);
	void OnWindImpulseCylinderCreation(struct FFortWindImpulseCylinder& WindImpulseCylinder, struct FFortWindImpulseCylinderDelta& WindImpulseCylinderDelta);
	void AddWindParticleSystemComponent(class UParticleSystemComponent* ParticleSystemComponent);
	void Register_player_for_render_to_texture_purposes(class APlayerPawn_Generic_C* Player_Pawn_Generic);
	void ReceiveTick(float DeltaSeconds);
	void OnWorldReady();
	void Add_Render_To_Texture_Particle(class UParticleSystem* EmitterTemplate, struct FTransform& InTransform);
	void UserConstructionScript(float CallFunc_GetScalarParameterValue_ReturnValue, struct FTransform& Temp_struct_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue);
	void InitializeOrthoSettings();
	void SetRenderOnlyAssets(class UPrimitiveComponent* InComponent);
	struct FVector Calculate_Camera_Position(float Scale, class USceneCaptureComponent2D* Scene_Capture, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_FCeil_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue12, float CallFunc_Conv_IntToFloat_ReturnValue123, int32 CallFunc_FCeil_ReturnValue12, float CallFunc_Conv_IntToFloat_ReturnValue1234, const struct FVector& CallFunc_MakeVector_ReturnValue12, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1);
	void UpdateStormWindCylinder(const struct FFortWindImpulseCylinder& Wind_Impulse, const struct FFortWindImpulseCylinderDelta& Wind_Delta, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_BreakWindImpulseCylinderDelta_WindDeltaCenter, bool CallFunc_BreakWindImpulseCylinderDelta_bWindImpulseInitialized, bool CallFunc_BreakWindImpulseCylinderDelta_bWindRipplesOutward, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionWidth, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerSectionRadius, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterSectionRadius, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaMaximumRadius, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredOverallBlendTime, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionBlendTime, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentBlendTime, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaPreviousMagnitude, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentMagnitude, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredMagnitude, const struct FBox& CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterWorldBounds, const struct FBox& CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerWorldBounds, const struct FBox& CallFunc_BreakWindImpulseCylinderDelta_WindImpulseBounds, const struct FFortWindImpulseHandle& CallFunc_BreakWindImpulseCylinderDelta_WindImpulseHandleToModify, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation, float CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius, float CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection, float CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude, const struct FBox& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, bool CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match, int32 CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_SetWindMatVariables_NewParam, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetWindMatVariables_NewParam1);
	void RemoveWindCylinder(struct FFortWindImpulseCylinder& WindImpulseCylinder, class UStaticMeshComponent* CurrentStormCylinder, bool Temp_bool_True_if_break_was_hit_Variable, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation, float CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius, float CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection, float CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude, const struct FBox& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1, bool CallFunc_EqualEqual_VectorVector_ReturnValue);
	void UpdateWindDeltaCyl(float Static_Cylinder_Outer_Radius, float Duration, class UMaterialInstanceDynamic* Mid, bool Is_Wind_Circular_, float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable1, bool Temp_bool_Variable1, bool Temp_bool_Variable12, bool Temp_bool_Variable123, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, float K2Node_Select1_Default, float K2Node_Select12_Default, float K2Node_Select123_Default);
	void SetWindMatVariables(class UMaterialInstanceDynamic* Mid, bool Set_AnimatedCylinderCenter, const struct FVector& AnimatedCylinderCenter, bool Set_Animating_Wind_Magnitude, float Animating_Wind_Magnitude, bool Set_Static_Wind_Magnitude, float Static_Wind_Magnitude, bool Set_CylinderCenter, const struct FVector& CylinderCenter, bool Set_WindVector, const struct FVector& WindVector, bool Set_WindCrossVector, const struct FVector& WindCrossVector, bool Set_OverallOuterRadius, float OverallOuterRadius, bool Set_OverallInnerRadius, float OverallInnerRadius, bool Set_Wind_Still_0_or_Animating_1, float Wind_Still_0_or_Animating_1, bool Set_Circular_Shader_, float Circular_Shader_, bool* NewParam, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue1, class FName CallFunc_MakeLiteralName_ReturnValue12, class FName CallFunc_MakeLiteralName_ReturnValue123, class FName CallFunc_MakeLiteralName_ReturnValue1234, class FName CallFunc_MakeLiteralName_ReturnValue12345, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue1, class FName CallFunc_MakeLiteralName_ReturnValue123456, class FName CallFunc_MakeLiteralName_ReturnValue1234567, class FName CallFunc_MakeLiteralName_ReturnValue12345678, class FName CallFunc_MakeLiteralName_ReturnValue123456789, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue12, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue123);
	void Find_Matching_Wind_Mesh_Index_And_Write_Bool(const struct FVector& Wind_location, bool* Param_Storm_Cyl_Mesh_Match, int32* Param_Wind_Cyl_Mesh_Array_Match_Index, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1, bool CallFunc_EqualEqual_VectorVector_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WindManager_C">();
	}
	static class AWindManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWindManager_C>();
	}
};

}


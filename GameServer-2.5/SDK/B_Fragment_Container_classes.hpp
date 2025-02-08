#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Fragment_Container

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "E_OutlanderFragmentTypes_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Fragment_Container.B_Fragment_Container_C
// 0x0370 (0x1120 - 0x0DB0)
class AB_Fragment_Container_C final  : public ABuildingSMActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0DB0(0x0008)(Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_LightOn;                                         // 0x0DB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Orb_Mesh;                                          // 0x0DC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_ResOut;                                          // 0x0DC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Orb_PickupEffect;                                // 0x0DD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      BlockingCollision;                                 // 0x0DD8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Container_SK;                                      // 0x0DE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        RotationRoot;                                      // 0x0DE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        VerticalMovement;                                  // 0x0DF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Awaken_Collision;                                  // 0x0DF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       MiniMapCollision;                                  // 0x0E00(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMiniMapComponent*                  MiniMapLoc;                                        // 0x0E08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         VerticalMovementTimeline_Z_Offset_E77B23F44312E9BD5DA6EF9ACE127DE4; // 0x0E10(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            VerticalMovementTimeline__Direction_E77B23F44312E9BD5DA6EF9ACE127DE4; // 0x0E14(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28D3[0x3];                                     // 0x0E15(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     VerticalMovementTimeline;                          // 0x0E18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_HasFragmentAbility;                             // 0x0E20(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_LlamaFragment;                                  // 0x0E40(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	struct FGameplayTagContainer                  TC_ChargeFragmentTag;                              // 0x0E60(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_LlamaFragmentTag;                               // 0x0E80(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           Event_FragmentCollected;                           // 0x0EA0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     SentFragment;                                      // 0x0EA8(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	E_OutlanderFragmentTypes                      FragmentType;                                      // 0x0F50(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28D4[0x3];                                     // 0x0F51(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           ChargeFragmentColor;                               // 0x0F54(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LlamaFragmentColor;                                // 0x0F64(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28D5[0x4];                                     // 0x0F74(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAmmoItemDefinition*                FragmentAmmoData;                                  // 0x0F78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Current_Outlander;                                 // 0x0F80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        InteractingPlayerPawn;                             // 0x0F88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_Outlander_LlamaFragment;                        // 0x0F90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_ClearFragmentCooldown;                          // 0x0F98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_Outlander_FragmentTeamSpeedBost;                // 0x0FA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 FortPawnFilter;                                    // 0x0FA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LlamaFragmentPercent;                              // 0x0FB0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotateToPlayerSpeed;                               // 0x0FB4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastInteractStartTime;                             // 0x0FB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayedDestroyTime;                                // 0x0FBC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberOfTimeToPingMap;                             // 0x0FC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberOfMapPings;                                  // 0x0FC4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAnyOutlanderStillAround;                         // 0x0FC8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanInteract;                                       // 0x0FC9(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                          IsAwake;                                           // 0x0FCA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HasLoot;                                           // 0x0FCB(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsOpen;                                            // 0x0FCC(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          bIsUP;                                             // 0x0FCD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsOn;                                              // 0x0FCE(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_28D6[0x1];                                     // 0x0FCF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Container_Base_Mat;                                // 0x0FD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Container_Screen_mat;                              // 0x0FD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Container_Light_mat;                               // 0x0FE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Orb_Mat;                                           // 0x0FE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Orb_Turn_On_Sound;                                 // 0x0FF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Orb_Hello_Sound;                                   // 0x0FF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Orb_Hover_Sound;                                   // 0x1000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Orb_Goodbye_Sound;                                 // 0x1008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Orb_Thanks_Sound;                                  // 0x1010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   InteractLlamaFragment;                             // 0x1018(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   InteractChargeFragment;                            // 0x1030(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   InteractNonOutlander;                              // 0x1048(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PickupLlamaFragment;                               // 0x1060(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PickupChargeFragment;                              // 0x1078(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAudioComponent*                        OrbAudioComponent;                                 // 0x1090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOrbTaken;                                        // 0x1098(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_28D7[0x7];                                     // 0x1099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   FailedOutlanderOnlyOneLlama;                       // 0x10A0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   FailedOutlanderMaxFragHeldDefault;                 // 0x10B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   FailedOutlanderActivatedButDoesNotYetPossessFragmentAbility; // 0x10D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   FailedNonOutlanderActivated;                       // 0x10E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UForceFeedbackEffect*                   FF_Interact;                                       // 0x1100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   FFInteractSoft;                                    // 0x1108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          DeployAnim;                                        // 0x1110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          UndeployAnim;                                      // 0x1118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Fragment_Container(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue1, float K2Node_Event_Damage, struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, class AFortPawn* K2Node_Event_InteractingPawn, int32 CallFunc_Add_IntInt_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue12, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent1, class AActor* K2Node_ComponentBoundEvent_OtherActor1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex1, bool K2Node_ComponentBoundEvent_bFromSweep, struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn1, bool K2Node_DynamicCast_bSuccess1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn12, bool K2Node_DynamicCast_bSuccess12, float K2Node_Event_DeltaSeconds, bool CallFunc_IsOutlander_IsOutlander, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, E_OutlanderFragmentTypes Temp_byte_Variable, bool Temp_bool_IsClosed_Variable1, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess123, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsOutlander_IsOutlander1, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue12, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_HasAuthority_ReturnValue123, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsOutlander_IsOutlander12, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface1_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_HasAuthority_ReturnValue1234, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess1234, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_BooleanAND_ReturnValue12, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue123, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable1, bool CallFunc_IsDedicatedServer_ReturnValue1234, bool K2Node_SwitchEnum1_CmpSuccess, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue1, TArray<class AFortPlayerPawn*>& CallFunc_AuthorityGetFortPossessedPlayerPawns_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue1, const struct FRotator& CallFunc_RLerp_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult12, bool Temp_bool_Has_Been_Initd_Variable12, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AFortGameModeDeployableBase* K2Node_DynamicCast_AsFort_Game_Mode_Deployable_Base, bool K2Node_DynamicCast_bSuccess12345, class AFortGameModeOutpost* K2Node_DynamicCast_AsFort_Game_Mode_Outpost, bool K2Node_DynamicCast_bSuccess123456, bool K2Node_SwitchEnum12_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue12345, class AController* CallFunc_GetController_ReturnValue1, bool Temp_bool_IsClosed_Variable12, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller1, bool K2Node_DynamicCast_bSuccess1234567, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput, class UAnimSequence* K2Node_CustomEvent_AnimToPlay, float CallFunc_Add_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Array_Index_Variable1, class AFortPlayerPawn* CallFunc_Array_Get_Item1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue1, EFortTeamAffiliation CallFunc_GetTeamAffiliation_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, bool K2Node_SwitchEnum123_CmpSuccess, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue12, const struct FLinearColor& K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue12, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123);
	void AnimationComplete();
	void PlayAnimation(class UAnimSequence* AnimToPlay);
	void SoftFeedback();
	void MultiFeedback();
	void BlueprintOnBeginInteract();
	void Reset_Activation();
	void StartHide();
	void ShowOnMiniMap();
	void MoveDown();
	void PowerDown();
	void MoveUp();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ActivateFX();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn);
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();
	void VerticalMovementTimeline__down__EventFunc();
	void VerticalMovementTimeline__Up__EventFunc();
	void VerticalMovementTimeline__UpdateFunc();
	void VerticalMovementTimeline__FinishedFunc();
	void UserConstructionScript(bool CallFunc_K2_AttachTo_ReturnValue);
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, bool CallFunc_IsOutlander_IsOutlander, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue);
	void OnRep_BuffType(const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData1, bool K2Node_SwitchEnum_CmpSuccess);
	void DelayedDestroy();
	void OnRep_IsOpen(bool Temp_bool_Variable, class UAnimSequence* K2Node_Select_Default);
	void UpdateShouldTick(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetAwake(bool NewAwake);
	void SetOutlander(class AActor* NewOutlander);
	void OnRep_IsOn(struct FTransform& Temp_struct_Variable, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_AddComponent_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1);
	void OnRep_IsOrbTaken();
	void ForceFeedbackInteract(bool Soft, class AController* CallFunc_GetController_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess);

	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, bool LocalExecuteOk, bool LocalIsOutlander, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, class AController* CallFunc_GetController_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOutlander_IsOutlander, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, int32 CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue, bool CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess, float CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, bool CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess1, float CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_FTrunc_ReturnValue1, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface1_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue123, bool CallFunc_Not_PreBool_ReturnValue1) const;
	class FText BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn, bool CallFunc_IsOutlander_IsOutlander, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface1_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1) const;
	void IsOutlander(class AFortPawn* Pawn, bool* Param_IsOutlander, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Fragment_Container_C">();
	}
	static class AB_Fragment_Container_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Fragment_Container_C>();
	}
};

}


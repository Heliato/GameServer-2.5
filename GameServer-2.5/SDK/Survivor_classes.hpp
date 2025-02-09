#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Survivor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "SurvivorHitInfoType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Survivor.Survivor_C
// 0x0170 (0x1CC0 - 0x1B50)
class ASurvivor_C final  : public AFortAIPawn
{
public:
	uint8                                         Pad_2B4C[0x8];                                     // 0x1B48(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1B50(0x0008)(Transient, DuplicateTransient)
	class UFortMiniMapComponent*                  FortMiniMap;                                       // 0x1B58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       SpeechBubbleComponent;                             // 0x1B60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          InteractBox;                                       // 0x1B68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_SurvivorAnchor_C*                   SurvivorAnchor;                                    // 0x1B70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 SurvivorAnchorClass;                               // 0x1B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_DamageTagsServer;                               // 0x1B80(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_MeleeDamage;                                    // 0x1BA0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_NPCStatusAOE;                                   // 0x1BC0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           TC_NPCStatusLockedInPlace;                         // 0x1BE0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_NPCBehaviorCower;                               // 0x1BE8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           Event_NPCAbilityNonAttackAvoidEnemy;               // 0x1C08(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Event_NPCAbilityNonAttackCowerTrue;                // 0x1C10(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Event_NPCAbilityNonAttackCowerFalse;               // 0x1C18(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Event_NPCAbilityNonAttackRescueTrue;               // 0x1C20(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Event_NPCAbilityNonAttackConversationOrScriptedAnimation; // 0x1C28(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_SurvivorLockedInPlace;                          // 0x1C30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           ScriptedAnimMontage;                               // 0x1C38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 SpeechBubbleWidgetClass;                           // 0x1C40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bToggleInteractChannel;                            // 0x1C48(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_2B4D[0x7];                                     // 0x1C49(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortGameStateZone*                     ZoneState;                                         // 0x1C50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 SurvivorName;                                      // 0x1C58(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          ShowAnchorBoundsWhenTeleportingIn;                 // 0x1C68(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B4E[0x7];                                     // 0x1C69(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceDynamic*>       MeshMIDArray;                                      // 0x1C70(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          MIDs_Initialized;                                  // 0x1C80(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TeleportInWantsToHappen;                           // 0x1C81(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TeleportOutWantsToHappen;                          // 0x1C82(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B4F[0x5];                                     // 0x1C83(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   LastSpeechText;                                    // 0x1C88(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         TeleportEffectModeReplicated;                      // 0x1CA0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int32                                         TeleportEffectModeLocal;                           // 0x1CA4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   InteractionBangRef;                                // 0x1CA8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InteractionBangRelativeOffset;                     // 0x1CB0(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InteractionBangEnabled;                            // 0x1CBC(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

public:
	void ExecuteUbergraph_Survivor(int32 EntryPoint, bool K2Node_CustomEvent_Enabled, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Event_Damage1, struct FGameplayTagContainer& K2Node_Event_DamageTags1, const struct FVector& K2Node_Event_Momentum1, struct FHitResult& K2Node_Event_HitInfo1, class AFortPawn* K2Node_Event_InstigatedBy1, class AActor* K2Node_Event_DamageCauser1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext1, float K2Node_Event_Damage, struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_HasTags_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasTags_ReturnValue1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData1, bool K2Node_CustomEvent_LockedInPlace, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class FText K2Node_Event_SpeechText, bool CallFunc_IsValid_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AFortAIPawn* K2Node_CustomEvent_DownedAI, class AController* K2Node_CustomEvent_DownedInstigator, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, class AFortPlayerController* CallFunc_Array_Get_Item, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue1, float CallFunc_VSize_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ADuplicateResOutMesh_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue12, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array1, const struct FTransform& CallFunc_GetTransform_ReturnValue1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, class ADuplicateResOutMesh_C* CallFunc_FinishSpawningActor_ReturnValue1, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue123, bool CallFunc_HasAuthority_ReturnValue12, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array12, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array123, class UUserWidget* CallFunc_Create_ReturnValue, TScriptInterface<class IFortInitializeFromObjectInterface> K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface, bool K2Node_DynamicCast_bSuccess1, EGameplayCueEvent K2Node_GameplayCueEvent_EventType1, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters1, EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool CallFunc_HasAuthority_ReturnValue123, TDelegate<void(class AFortAIPawn* DownedAI, class AController* DownedInstigator)> K2Node_CreateDelegate_OutputDelegate);
	void ShowInteractionBang(bool Enabled);
	void GameplayCue_Teleport_Out(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Teleport_In(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void PlayTeleportIn();
	void PlayTeleportOut();
	void OnAppearanceOverridden();
	void MIDsInitialized();
	void AdditiveHitReactDelay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnSurvivorDowned(class AFortAIPawn* DownedAI, class AController* DownedInstigator);
	void ReceiveBeginPlay();
	void OnClearSentence();
	void OnDisplaySentence(class FText& SpeechText);
	void Unlock();
	void Lock();
	void SurvivorSetLockedInPlace(bool LockedInPlace);
	void StartCowering();
	void StopCowering();
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void UserConstructionScript();
	void OnRep_bToggleInteractChannel(bool Temp_bool_Variable, ECollisionResponse Temp_byte_Variable, ECollisionResponse Temp_byte_Variable1, ECollisionResponse K2Node_Select_Default);
	void Set_Interact_Channel_Response(bool ShouldInteractChannelBeActive);
	void SetLastHitInfoOnBlackboard(ESurvivorHitInfoType SurvivorHitInfoType, class FName Name_SurvivorLastHitInfoTime, class FName Name_SurvivorLastHitInfoType, float CallFunc_GetGameTimeInSeconds_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue);
	void InitializeMIDs(int32 Temp_int_Variable, int32 CallFunc_GetNumMaterials_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnRep_TeleportEffectModeReplicated(bool CallFunc_NotEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void InteractionBangVisibility(bool Enabled, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue);
	void OnRep_InteractionBangEnabled();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Survivor_C">();
	}
	static class ASurvivor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASurvivor_C>();
	}
};

}


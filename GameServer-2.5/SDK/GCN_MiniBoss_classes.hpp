#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_MiniBoss

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_MiniBoss.GCN_MiniBoss_C
// 0x0160 (0x05A0 - 0x0440)
class AGCN_MiniBoss_C final  : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0440(0x0008)(Transient, DuplicateTransient)
	class UFortMiniMapComponent*                  MiniMapCrosshair;                                  // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_NPCCharacterTypeMiniBoss1P;                     // 0x0450(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_NPCCharacterTypeMiniBoss4P;                     // 0x0470(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                           FourP_Color;                                       // 0x0490(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OneP_Color;                                        // 0x04A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FLinearColor>        VectorParameters;                                  // 0x04B0(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class FName, float>                      ScalarParameters;                                  // 0x0500(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class FString, class UParticleSystem*>   ElementalParticlesMap;                             // 0x0550(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GCN_MiniBoss(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void SetMiniBossGCNColors();
	void HideMiniBossGCN();
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_MakeVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference);
	void OverwriteElementalParticles(class AEnemyPawn_Parent_C* Enemy_Pawn_Parent, const class FString& TagName, bool TagWasFound, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_MakeLiteralString_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const class FString& K2Node_Select_Default, class UParticleSystem* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_MiniBoss_C">();
	}
	static class AGCN_MiniBoss_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_MiniBoss_C>();
	}
};

}


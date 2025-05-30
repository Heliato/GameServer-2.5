#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_NPC_Ice

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_NPC_Ice.GCN_NPC_Ice_C
// 0x0060 (0x04A0 - 0x0440)
class AGCN_NPC_Ice_C final  : public AFortGameplayCueNotify_Looping
{
public:
	float                                         TransitionOutLength;                               // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F8E[0x4];                                     // 0x0444(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               IceParticles;                                      // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FLinearColor>        VectorParameters;                                  // 0x0450(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void UserConstructionScript();
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, int32 CallFunc_GetVisualEffectQuality_ReturnValue, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, bool K2Node_SwitchInteger_CmpSuccess, class UParticleSystemComponent* CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_NPC_Ice_C">();
	}
	static class AGCN_NPC_Ice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_NPC_Ice_C>();
	}
};

}


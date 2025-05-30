#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Abilities_DisplaySquadTeamChat

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Abilities_DisplaySquadTeamChat.GC_Abilities_DisplaySquadTeamChat_C
// 0x0000 (0x00B0 - 0x00B0)
class UGC_Abilities_DisplaySquadTeamChat_C final  : public UFortGameplayCueNotify_Simple
{
public:
	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters, const struct FVector& CallFunc_MakeVector_ReturnValue, class UAthenaEmojiItemDefinition* K2Node_DynamicCast_AsAthena_Emoji_Item_Definition, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_Random_360_VectorInRange_Random_Vector_Result_, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue12, const struct FVector& CallFunc_MakeVector_ReturnValue1) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Abilities_DisplaySquadTeamChat_C">();
	}
	static class UGC_Abilities_DisplaySquadTeamChat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Abilities_DisplaySquadTeamChat_C>();
	}
};

}


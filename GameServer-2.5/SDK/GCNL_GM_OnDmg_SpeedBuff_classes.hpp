#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_GM_OnDmg_SpeedBuff

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_GM_OnDmg_SpeedBuff.GCNL_GM_OnDmg_SpeedBuff_C
// 0x0000 (0x0440 - 0x0440)
class AGCNL_GM_OnDmg_SpeedBuff_C final  : public AFortGameplayCueNotify_Looping
{
public:
	void UserConstructionScript();

	void OnWhileActiveParticleSystemActivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, struct FGameplayCueParameters& Parameters, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue12, const struct FVector& CallFunc_MakeVector_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, float CallFunc_FClamp_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam1, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_GM_OnDmg_SpeedBuff_C">();
	}
	static class AGCNL_GM_OnDmg_SpeedBuff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_GM_OnDmg_SpeedBuff_C>();
	}
};

}


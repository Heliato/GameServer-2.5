#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Threat_RainAttachedToPlayer

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Threat_RainAttachedToPlayer.Threat_RainAttachedToPlayer_C
// 0x0010 (0x0328 - 0x0318)
class AThreat_RainAttachedToPlayer_C final  : public AActor
{
public:
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Threat_RainAttachedToPlayer_C">();
	}
	static class AThreat_RainAttachedToPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AThreat_RainAttachedToPlayer_C>();
	}
};

}


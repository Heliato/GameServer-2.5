#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_GM_MaxHealthIncrease_Major

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_GM_MaxHealthIncrease_Major.GCNL_GM_MaxHealthIncrease_Major_C
// 0x0000 (0x0440 - 0x0440)
class AGCNL_GM_MaxHealthIncrease_Major_C final  : public AFortGameplayCueNotify_Looping
{
public:
	void UserConstructionScript();
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_GM_MaxHealthIncrease_Major_C">();
	}
	static class AGCNL_GM_MaxHealthIncrease_Major_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_GM_MaxHealthIncrease_Major_C>();
	}
};

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SurvivorAnchorLocationsToAvoidContext

#include "Basic.hpp"

#include "AIModule_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass SurvivorAnchorLocationsToAvoidContext.SurvivorAnchorLocationsToAvoidContext_C
// 0x0008 (0x0038 - 0x0030)
class USurvivorAnchorLocationsToAvoidContext_C final  : public UEnvQueryContext_BlueprintBase
{
public:
	bool                                          Debug;                                             // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2AA2[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AnchorPaddingDistanceToIncludeAdditionalAvoidanceObjects; // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet, class AActor* Querier, const TArray<class AActor*>& ActorsToTest, const TArray<struct FVector>& LocationSet, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ASurvivor_C* K2Node_DynamicCast_AsSurvivor, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_Array_Get_Item1, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, float CallFunc_BreakVector_X12, float CallFunc_BreakVector_Y12, float CallFunc_BreakVector_Z12, class AFortProjectileBase* K2Node_DynamicCast_AsFort_Projectile_Base, bool K2Node_DynamicCast_bSuccess1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_Less_FloatFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue12, float CallFunc_Add_FloatFloat_ReturnValue12, bool CallFunc_Greater_FloatFloat_ReturnValue12, bool CallFunc_Less_FloatFloat_ReturnValue12, class AFortAreaOfEffectCloud* K2Node_DynamicCast_AsFort_Area_Of_Effect_Cloud, bool K2Node_DynamicCast_bSuccess12, bool CallFunc_BooleanAND_ReturnValue, class ABuildingGameplayActor* K2Node_DynamicCast_AsBuilding_Gameplay_Actor, bool K2Node_DynamicCast_bSuccess123, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue12, EFortTeamAffiliation CallFunc_GetTeamAffiliation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue123, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanAND_ReturnValue1234, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, TArray<class AFortProjectileBase*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class ABuildingGameplayActor*>& CallFunc_GetAllActorsOfClass_OutActors1, TArray<class AFortAreaOfEffectCloud*>& CallFunc_GetAllActorsOfClass_OutActors12, int32 CallFunc_Array_Add_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SurvivorAnchorLocationsToAvoidContext_C">();
	}
	static class USurvivorAnchorLocationsToAvoidContext_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USurvivorAnchorLocationsToAvoidContext_C>();
	}
};

}


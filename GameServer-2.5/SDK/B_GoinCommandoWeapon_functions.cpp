#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_GoinCommandoWeapon

#include "Basic.hpp"

#include "B_GoinCommandoWeapon_classes.hpp"
#include "B_GoinCommandoWeapon_parameters.hpp"


namespace SDK
{

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ExecuteUbergraph_B_GoinCommandoWeapon
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortCosmeticModification        K2Node_Event_CosmeticMod                               ()
// class UMaterialInstanceDynamic*         K2Node_Event_DynamicMaterialInstance                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_RandomFloatInRange_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_FloatFloat_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsDedicatedServer_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                       Temp_struct_Variable                                   (ConstParm, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*         CallFunc_AddComponent_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            CallFunc_GetInstigator_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Commando_C*           K2Node_DynamicCast_AsPlayer_Pawn_Commando              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_HasAllMatchingGameplayTags_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           CallFunc_GetOwner_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_bPersistentFire                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_Event_bSecondaryFire                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       K2Node_Event_HitResult                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// EPhysicalSurface                        K2Node_Event_ImpactPhysicalSurface                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*         K2Node_Event_SpawnedPSC                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_GoinCommandoWeapon_C::ExecuteUbergraph_B_GoinCommandoWeapon(int32 EntryPoint, const struct FFortCosmeticModification& K2Node_Event_CosmeticMod, class UMaterialInstanceDynamic* K2Node_Event_DynamicMaterialInstance, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, struct FTransform& Temp_struct_Variable, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class APlayerPawn_Commando_C* K2Node_DynamicCast_AsPlayer_Pawn_Commando, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, struct FHitResult& K2Node_Event_HitResult, EPhysicalSurface K2Node_Event_ImpactPhysicalSurface, class UParticleSystemComponent* K2Node_Event_SpawnedPSC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GoinCommandoWeapon_C", "ExecuteUbergraph_B_GoinCommandoWeapon");

	Params::B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_CosmeticMod = std::move(K2Node_Event_CosmeticMod);
	Parms.K2Node_Event_DynamicMaterialInstance = K2Node_Event_DynamicMaterialInstance;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Commando = K2Node_DynamicCast_AsPlayer_Pawn_Commando;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_Event_bPersistentFire = K2Node_Event_bPersistentFire;
	Parms.K2Node_Event_bSecondaryFire = K2Node_Event_bSecondaryFire;
	Parms.K2Node_Event_HitResult = std::move(K2Node_Event_HitResult);
	Parms.K2Node_Event_ImpactPhysicalSurface = K2Node_Event_ImpactPhysicalSurface;
	Parms.K2Node_Event_SpawnedPSC = K2Node_Event_SpawnedPSC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnInitCosmeticAlterations
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortCosmeticModification        CosmeticMod                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UMaterialInstanceDynamic*         DynamicMaterialInstance                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_GoinCommandoWeapon_C::OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod, class UMaterialInstanceDynamic* DynamicMaterialInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GoinCommandoWeapon_C", "OnInitCosmeticAlterations");

	Params::B_GoinCommandoWeapon_C_OnInitCosmeticAlterations Parms{};

	Parms.CosmeticMod = std::move(CosmeticMod);
	Parms.DynamicMaterialInstance = DynamicMaterialInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnChargeDown
// (Event, Protected, BlueprintEvent)

void AB_GoinCommandoWeapon_C::OnChargeDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GoinCommandoWeapon_C", "OnChargeDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnChargeUp
// (Event, Protected, BlueprintEvent)

void AB_GoinCommandoWeapon_C::OnChargeUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GoinCommandoWeapon_C", "OnChargeUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnPlayImpactFX
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// EPhysicalSurface                        ImpactPhysicalSurface                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*         SpawnedPSC                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_GoinCommandoWeapon_C::OnPlayImpactFX(struct FHitResult& HitResult, EPhysicalSurface ImpactPhysicalSurface, class UParticleSystemComponent* SpawnedPSC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GoinCommandoWeapon_C", "OnPlayImpactFX");

	Params::B_GoinCommandoWeapon_C_OnPlayImpactFX Parms{};

	Parms.HitResult = std::move(HitResult);
	Parms.ImpactPhysicalSurface = ImpactPhysicalSurface;
	Parms.SpawnedPSC = SpawnedPSC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bPersistentFire                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bSecondaryFire                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_GoinCommandoWeapon_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GoinCommandoWeapon_C", "OnPlayWeaponFireFX");

	Params::B_GoinCommandoWeapon_C_OnPlayWeaponFireFX Parms{};

	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ChargeUp__FinishedFunc
// (BlueprintEvent)

void AB_GoinCommandoWeapon_C::ChargeUp__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GoinCommandoWeapon_C", "ChargeUp__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ChargeUp__UpdateFunc
// (BlueprintEvent)

void AB_GoinCommandoWeapon_C::ChargeUp__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GoinCommandoWeapon_C", "ChargeUp__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_GoinCommandoWeapon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GoinCommandoWeapon_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.SetUpgradeLevel
// (BlueprintCallable, BlueprintEvent)

void AB_GoinCommandoWeapon_C::SetUpgradeLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GoinCommandoWeapon_C", "SetUpgradeLevel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_GoinCommandoWeapon_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GoinCommandoWeapon_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}


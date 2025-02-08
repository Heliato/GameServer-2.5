#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaultCharacterPlacementHelper

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C
// 0x0088 (0x03A0 - 0x0318)
class AVaultCharacterPlacementHelper_C final  : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Floor;                                             // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CharacterPlacement;                                // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   NewEventDispatcher_0;                              // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	uint8                                         Pad_43B5[0x8];                                     // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             OriginalTransform;                                 // 0x0350(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                OffsetTranslate;                                   // 0x0380(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               OffsetRotate;                                      // 0x038C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Athena;                                            // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void NewEventDispatcher_0__DelegateSignature();
	void ExecuteUbergraph_VaultCharacterPlacementHelper(int32 EntryPoint, ESubGame K2Node_CustomEvent_SubGame, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, EFrontEndCamera CallFunc_GetFrontEndCamera_ReturnValue, TDelegate<void(ESubGame SubGame)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, bool CallFunc_EqualEqual_ByteByte_ReturnValue123, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, ESubGame CallFunc_GetSubGame_ReturnValue, float K2Node_Event_DeltaSeconds, bool K2Node_SwitchEnum_CmpSuccess, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult1, bool CallFunc_K2_SetActorTransform_ReturnValue1);
	void ReceiveTick(float DeltaSeconds);
	void SubGameChanged_Event_0(ESubGame SubGame);
	void ReceiveBeginPlay();
	void UserConstructionScript(const struct FTransform& CallFunc_GetTransform_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VaultCharacterPlacementHelper_C">();
	}
	static class AVaultCharacterPlacementHelper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVaultCharacterPlacementHelper_C>();
	}
};

}


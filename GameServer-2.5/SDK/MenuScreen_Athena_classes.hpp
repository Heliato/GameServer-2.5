#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MenuScreen_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass MenuScreen_Athena.MenuScreen_Athena_C
// 0x0AE8 (0x0ED8 - 0x03F0)
class UMenuScreen_Athena_C final  : public UFrontendAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_BC9F551249E266FA43BC349FC345F1FC; // 0x03F8(0x0048)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_CFAAC90A46FD25342F35449196AB843E; // 0x0440(0x0048)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2D7030A140A7B9E5EEB43E92FB2BC715; // 0x0488(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_DB45EF5942BB99048E7C2C8416282A57; // 0x04D0(0x0070)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_38DE62F34079A9ED5E5B85BBCBAD2C22; // 0x0540(0x00E0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_233187314408126920AC14A42BA98CE8; // 0x0620(0x0088)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_D368A9B74AE8F039DA6720801BDD62D5; // 0x06A8(0x0088)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_653C5A294667E7945D69729979692D20; // 0x0730(0x0088)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_DF33F517431A2AB6E430309E29277E98; // 0x07B8(0x0088)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt_6443F71D474774C8ECFB2A9F1ACC1D7A; // 0x0840(0x00D0)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt_287AF5964C1BE390191EF89CB53D768D; // 0x0910(0x00D0)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK_3BACE47B4A5EF86B449B81BE7045ADA2; // 0x09E0(0x00A0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_AE51F624415A5BC37D7F2FABCBE3FBE1; // 0x0A80(0x00B8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_7340818D479943947A1DCCA16CFCAD54; // 0x0B38(0x0070)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_8D2B60D44BBADFD01AC9A6BF39472D0B; // 0x0BA8(0x00E0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_E3A91A3649B6A1ABC9AC3B97A7AF4134; // 0x0C88(0x00E0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_93498E3D45EEA3CEA9E5EA88BB757C3B; // 0x0D68(0x0050)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_F237E66D4F1546A501C2548E2EB67224; // 0x0DB8(0x0050)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK_FCD7422A4E3CE397C446C0A397266FEA; // 0x0E08(0x00A0)()
	UMulticastDelegateProperty_                   MenuScreenDispatcher;                              // 0x0EA8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          HasBeenSelected;                                   // 0x0EB8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42C8[0x3];                                     // 0x0EB9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PoseInt;                                           // 0x0EBC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OffsetTranslate;                                   // 0x0EC0(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               OffsetRotate;                                      // 0x0ECC(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_ModifyBone_AE51F624415A5BC37D7F2FABCBE3FBE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_LegIK_FCD7422A4E3CE397C446C0A397266FEA();
	void MenuScreenDispatcher__DelegateSignature();
	void ExecuteUbergraph_MenuScreen_Athena(int32 EntryPoint, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_GetCurveValue_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetCurveValue_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_GetCurveValue_ReturnValue12, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float K2Node_Event_DeltaTimeX);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByEnum_38DE62F34079A9ED5E5B85BBCBAD2C22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByInt_6443F71D474774C8ECFB2A9F1ACC1D7A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByInt_287AF5964C1BE390191EF89CB53D768D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_LegIK_3BACE47B4A5EF86B449B81BE7045ADA2();
	void AnimNotify_LeftB();
	void AnimNotify_playFacialAnim();
	void BlueprintBeginPlay();
	void UserFocus();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MenuScreen_Athena_C">();
	}
	static class UMenuScreen_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMenuScreen_Athena_C>();
	}
};

}


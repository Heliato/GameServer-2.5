#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MTXButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MTXButton.MTXButton_C
// 0x0028 (0x0238 - 0x0210)
class UMTXButton_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UCommonNumericTextBlock*                Amount;                                            // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Button;                                            // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextPlus;                                          // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          HidePlusButton;                                    // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          LargeSize;                                         // 0x0231(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_MTXButton(int32 EntryPoint, class UCommonUIContext* CallFunc_GetContext_ReturnValue, TDelegate<void(bool bUsingGamepad)> K2Node_CreateDelegate_OutputDelegate, const struct FFortPrivateAccountInfo& K2Node_CustomEvent_NewInfo, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button, EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue12, const struct FFortPrivateAccountInfo& CallFunc_GetLocalAccountInfo_Result, float CallFunc_Conv_IntToFloat_ReturnValue, bool K2Node_CustomEvent_bUsingGamepad, TDelegate<void(const struct FFortPrivateAccountInfo& NewInfo)> K2Node_CreateDelegate_OutputDelegate1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Destruct();
	void HandleInputActionChnaged(bool bUsingGamepad);
	void BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Param_Button);
	void HandleLocalAccountInfoChanged(const struct FFortPrivateAccountInfo& NewInfo);
	void Construct();
	void UpdateAmount(struct FFortPrivateAccountInfo& FortPrivateAccountInfo, float CallFunc_Conv_IntToFloat_ReturnValue);
	class UWidget* Get_Button_ToolTipWidget_0(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue12, class FText K2Node_Select_Default, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void UpdateState(int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsInZone_ReturnValue, ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable1, int32 K2Node_Select1_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MTXButton_C">();
	}
	static class UMTXButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMTXButton_C>();
	}
};

}


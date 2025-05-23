#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KeybindWidget

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KeybindWidget.KeybindWidget_C
// 0x0548 (0x07B0 - 0x0268)
class UKeybindWidget_C final  : public UFortKeybindWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 _Image__Keybind;                                   // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 _Image__Shadow;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderFrame;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               HoldOverlay;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               InnerRoot;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               KeyTextOverlay;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxBackplate;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextKeybind;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               TextSizeMinBox;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFortBrushSize                                Brush_Size;                                        // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2A3B[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortMultiSizeBrush                    Frame_MultiBrush;                                  // 0x02D0(0x02D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeFont                     MultiFont;                                         // 0x05A0(0x0210)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_KeybindWidget(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable1, float Temp_float_Variable12, float Temp_float_Variable123, float Temp_float_Variable1234, float Temp_float_Variable12345, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, EFortBrushSize Temp_byte_Variable12, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, class FText CallFunc_GetKeyTextForAction_ButtonActionType, class FText CallFunc_GetKeyTextForAction_ReturnValue, int32 Temp_int_Variable, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_Multiply_FloatFloat_ReturnValue1, int32 Temp_int_Variable1, float CallFunc_Multiply_FloatFloat_ReturnValue12, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, const struct FSlateBrush& CallFunc_GetBrushForKey_Brush, bool CallFunc_GetBrushForKey_ReturnValue, bool Temp_bool_Variable1, class FText CallFunc_GetText_ReturnValue, int32 K2Node_Select1_Default, bool CallFunc_TextIsEmpty_ReturnValue, ESlateVisibility K2Node_Select12_Default, bool CallFunc_Key_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Destruct();
	void UpdateFrameSize();
	void PreConstruct(bool IsDesignTime);
	void Update();
	void Construct();
	void Get_Brush_Size(EFortBrushSize* Param_Brush_Size);
	void Set_Brush_Size(EFortBrushSize Param_Brush_Size);
	void Get_Bound_Action(class FName* Action);
	void ShowHoldBackPlate(EFortBrushSize Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable1, float Temp_float_Variable12, float Temp_float_Variable123, float Temp_float_Variable1234, float Temp_float_Variable12345, bool Temp_bool_Variable, float Temp_float_Variable123456, float Temp_float_Variable1234567, bool CallFunc_IsHoldKeybind_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, float K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select1_Default, float CallFunc_Add_FloatFloat_ReturnValue1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeybindWidget_C">();
	}
	static class UKeybindWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeybindWidget_C>();
	}
};

}


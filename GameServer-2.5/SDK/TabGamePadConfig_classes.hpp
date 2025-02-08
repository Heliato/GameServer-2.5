#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabGamePadConfig

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TabGamePadConfig.TabGamePadConfig_C
// 0x0048 (0x02A0 - 0x0258)
class UTabGamePadConfig_C final  : public UFortGameOptions
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(Transient, DuplicateTransient)
	class URotatorSelector_C*                     ControllerPlatformConfig;                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     GamepadConfig;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGamepadMappingInfo_C*                  GamepadMappingInfo;                                // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxControllerPlatform;                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsCombatMode;                                      // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38DD[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         InputPresets;                                      // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         ControllerPlatformMappingIndex;                    // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ControllerConfiguration;                           // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TabGamePadConfig(int32 EntryPoint, TDelegate<void(int32 Selected_Index)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable1, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable1, const class FString& K2Node_Select_Default, ECommonInputType Temp_byte_Variable, ECommonInputType Temp_byte_Variable1, ECommonInputType K2Node_Select1_Default, int32 K2Node_CustomEvent_Selected_Index12, int32 K2Node_CustomEvent_Selected_Index1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, const class FString& CallFunc_Array_Get_Item, TDelegate<void(int32 Selected_Index)> K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsPS4Platform_ReturnValue, bool CallFunc_IsXboxPlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 K2Node_CustomEvent_Selected_Index, TDelegate<void(int32 Selected_Index)> K2Node_CreateDelegate_OutputDelegate12);
	void ControllerPlatformConfigChanged(int32 Selected_Index);
	void UpdateOptionsTab();
	void Gamepad_Config_Changed(int32 Selected_Index);
	void CenterOnTab();
	void Configuration_Changed(int32 Selected_Index);
	void Construct();
	void Initialize_Data(const TArray<class FText>& NewLocalVar_0, class FText Temp_text_Variable, class FText Temp_text_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, TArray<class FString>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames, TArray<class FText>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames, TArray<class FText>& K2Node_MakeArray_Array, bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, class FText K2Node_Select_Default);
	void Update_Data(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetControllerPlatform_ReturnValue, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Array_Find_ReturnValue);
	void Handle_Mode_Toggled(bool CallFunc_Not_PreBool_ReturnValue);
	void HandleGamepadMappingInfoChange(int32 CallFunc_Conv_BoolToInt_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TabGamePadConfig_C">();
	}
	static class UTabGamePadConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTabGamePadConfig_C>();
	}
};

}


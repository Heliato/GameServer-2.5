#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainTabIconButton

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MainTabIconButton.MainTabIconButton_C.ExecuteUbergraph_MainTabIconButton
// 0x0100 (0x0100 - 0x0000)
struct MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33A4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UClass*                                 CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate12;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	class UClass*                                 CallFunc_GetCurrentTextStyleClass_ReturnValue1;    // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33A5[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate123;           // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33A6[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTabButtonLabelInfo                K2Node_Event_TabLabelInfo;                         // 0x0068(0x0090)(ConstParm)
	bool                                          CallFunc_GetSelected_ReturnValue;                  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSelected_ReturnValue1;                 // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MainTabIconButton.MainTabIconButton_C.SetTabLabelInfo
// 0x0090 (0x0090 - 0x0000)
struct MainTabIconButton_C_SetTabLabelInfo final 
{
public:
	struct FFortTabButtonLabelInfo                TabLabelInfo;                                      // 0x0000(0x0090)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MainTabIconButton.MainTabIconButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MainTabIconButton_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MainTabIconButton.MainTabIconButton_C.Set Text
// 0x0038 (0x0038 - 0x0000)
struct MainTabIconButton_C_Set_Text final 
{
public:
	class FText                                   Param_ButtonText;                                  // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33A7[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33A8[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;              // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainTabIconButton.MainTabIconButton_C.Set Icon
// 0x0078 (0x0078 - 0x0000)
struct MainTabIconButton_C_Set_Icon final 
{
public:
	struct FSlateBrush                            Param_IconBrush;                                   // 0x0000(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainTabIconButton.MainTabIconButton_C.SetTutorialBorderStyle
// 0x0008 (0x0008 - 0x0000)
struct MainTabIconButton_C_SetTutorialBorderStyle final 
{
public:
	class UClass*                                 BorderStyle;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainTabIconButton.MainTabIconButton_C.Update Bang State
// 0x0028 (0x0028 - 0x0000)
struct MainTabIconButton_C_Update_Bang_State final 
{
public:
	bool                                          Param_bBangEnabled;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortUIFeature                                UIFeature;                                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33A9[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   UIFeatureRevealText;                               // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue1;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MainTabIconButton.MainTabIconButton_C.SetTutorialNameID
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) MainTabIconButton_C_SetTutorialNameID final 
{
public:
	class FName                                   InTutorialNameID;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainTabIconButton.MainTabIconButton_C.StopTabCallout
// 0x0010 (0x0010 - 0x0000)
struct MainTabIconButton_C_StopTabCallout final 
{
public:
	class UClass*                                 CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetCurrentTextStyleClass_ReturnValue1;    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


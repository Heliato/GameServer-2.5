#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TalkingHeadWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function TalkingHeadWidget.TalkingHeadWidget_C.ExecuteUbergraph_TalkingHeadWidget
// 0x0030 (0x0030 - 0x0000)
struct TalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3584[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UTexture2D* Image, class FText Title, class FText Subtitle, EFortAnnouncementDisplayPreference DisplayPreference)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadImage
// 0x0008 (0x0008 - 0x0000)
struct TalkingHeadWidget_C_SetTalkingHeadImage final 
{
public:
	class UTexture2D*                             Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadName
// 0x0018 (0x0018 - 0x0000)
struct TalkingHeadWidget_C_SetTalkingHeadName final 
{
public:
	class FText                                   Title;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadSubtitle
// 0x0018 (0x0018 - 0x0000)
struct TalkingHeadWidget_C_SetTalkingHeadSubtitle final 
{
public:
	class FText                                   Subtitle;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadBegin
// 0x0040 (0x0040 - 0x0000)
struct TalkingHeadWidget_C_HandleTalkingHeadBegin final 
{
public:
	class UTexture2D*                             Image;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Title;                                             // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Subtitle;                                          // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	EFortAnnouncementDisplayPreference            DisplayPreference;                                 // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable12;                              // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortAnnouncementDisplayPreference            Temp_byte_Variable123;                             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


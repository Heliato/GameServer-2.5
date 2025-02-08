#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestInfo_BulletListEntry

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C
// 0x0020 (0x0230 - 0x0210)
class UQuestInfo_BulletListEntry_C final  : public UCommonUserWidget
{
public:
	class UImage*                                 ImageBorder;                                       // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageEntryIcon;                                    // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxIcon;                                       // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextBoxEntryText;                                  // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void InitBullet(class FText EntryText);
	void InitBrush(class FText EntryText, const struct FSlateBrush& EntryIconBrush, const struct FVector2D& CallFunc_CalcBrushSize_ReturnValue);
	struct FVector2D CalcBrushSize(const struct FVector2D& InImageSize, float Min, float Scale, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X1, float CallFunc_BreakVector2D_Y1, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_BreakVector2D_X12, float CallFunc_BreakVector2D_Y12, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void ShowBorder();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestInfo_BulletListEntry_C">();
	}
	static class UQuestInfo_BulletListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestInfo_BulletListEntry_C>();
	}
};

}


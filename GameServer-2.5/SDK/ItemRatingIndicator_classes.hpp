#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemRatingIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemRatingIndicator.ItemRatingIndicator_C
// 0x0018 (0x0530 - 0x0518)
class UItemRatingIndicator_C final  : public UFortItemRatingIndicator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0518(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 PowerRatingIconImage;                              // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatNumericTextBlock_C*                PowerRatingText;                                   // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemRatingIndicator(int32 EntryPoint, struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
	void HandleViewModelChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemRatingIndicator_C">();
	}
	static class UItemRatingIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemRatingIndicator_C>();
	}
};

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookProgressWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CollectionBookProgressWidget.CollectionBookProgressWidget_C
// 0x0018 (0x0288 - 0x0270)
class UCollectionBookProgressWidget_C final  : public UFortCollectionBookProgressWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(Transient, DuplicateTransient)
	class UBP_FortMaterialProgressBar_C*          BP_FortMaterialProgressBar;                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CollectionBookProgressWidget(int32 EntryPoint, float K2Node_Event_PreviewCompletionPct, float K2Node_Event_NewCompletionPct);
	void OnCollectionBookPreviewXPChange(float PreviewCompletionPct);
	void OnCollectionBookLevelProgressionChanged(float NewCompletionPct);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CollectionBookProgressWidget_C">();
	}
	static class UCollectionBookProgressWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectionBookProgressWidget_C>();
	}
};

}


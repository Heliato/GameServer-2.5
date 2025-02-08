#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TutorialTransparentRichText

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TutorialTransparentRichText.TutorialTransparentRichText_C
// 0x0028 (0x0238 - 0x0210)
class UTutorialTransparentRichText_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UFortRichTextBlock*                     FortRichTextBlock_0;                               // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0220(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void Construct();
	void ExecuteUbergraph_TutorialTransparentRichText(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TutorialTransparentRichText_C">();
	}
	static class UTutorialTransparentRichText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTutorialTransparentRichText_C>();
	}
};

}


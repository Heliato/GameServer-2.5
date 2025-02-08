#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpeechBubbleWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SpeechBubbleWidget.SpeechBubbleWidget_C
// 0x0010 (0x0218 - 0x0208)
class USpeechBubbleWidget_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0208(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       BubbleText;                                        // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SpeechBubbleWidget(int32 EntryPoint, class UObject* K2Node_Event_InitObject, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetCurrentSentenceSpeechText_ReturnValue);
	void InitFromObject(class UObject* InitObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpeechBubbleWidget_C">();
	}
	static class USpeechBubbleWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpeechBubbleWidget_C>();
	}
};

}


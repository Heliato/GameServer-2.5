#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_NameHomeBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Announce_TutorialConversation_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Announce_NameHomeBase.Announce_NameHomeBase_C
// 0x0008 (0x0548 - 0x0540)
class AAnnounce_NameHomeBase_C final  : public AAnnounce_TutorialConversation_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Announce_NameHomeBase_C;            // 0x0540(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Announce_NameHomeBase(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, int32 K2Node_Event_SentenceIdx1, bool K2Node_SwitchInteger_CmpSuccess, int32 K2Node_Event_SentenceIdx, bool K2Node_SwitchInteger1_CmpSuccess);
	void HandleSentenceStart_UI(int32 SentenceIdx);
	void HandleSentenceStop_UI(int32 SentenceIdx);
	void InitAnnouncement();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Announce_NameHomeBase_C">();
	}
	static class AAnnounce_NameHomeBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAnnounce_NameHomeBase_C>();
	}
};

}


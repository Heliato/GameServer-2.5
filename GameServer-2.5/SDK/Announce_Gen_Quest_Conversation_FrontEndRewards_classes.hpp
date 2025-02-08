#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_Gen_Quest_Conversation_FrontEndRewards

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C
// 0x0028 (0x0400 - 0x03D8)
class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C final  : public AFortClientAnnouncement_Conversation
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(Transient, DuplicateTransient)
	UMulticastDelegateProperty_                   OnNewSentence;                                     // 0x03E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnCurrentConversationFinished;                     // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnNewSentence__DelegateSignature(const struct FFortConversationSentence& Sentence);
	void OnCurrentConversationFinished__DelegateSignature();
	void ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards(int32 EntryPoint, const struct FFortConversationSentence& K2Node_Event_FinishingSentence, int32 K2Node_Event_FinishingSentenceSentenceIndex, struct FFortConversationSentence& K2Node_Event_Sentence, int32 K2Node_Event_SentenceIndex);
	void OnSentenceStarted(struct FFortConversationSentence& Sentence, int32 SentenceIndex);
	void OnConversationFinished(const struct FFortConversationSentence& FinishingSentence, int32 FinishingSentenceSentenceIndex);
	void UserConstructionScript();
	void PlayCurrentConversation(bool CallFunc_PlayConversation_ReturnValue);
	void StopCurrentConversation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Announce_Gen_Quest_Conversation_FrontEndRewards_C">();
	}
	static class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C>();
	}
};

}


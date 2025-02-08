#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontEndRewards_Conversation_VO

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C
// 0x0028 (0x0260 - 0x0238)
class UFrontEndRewards_Conversation_VO_C final  : public UFortRewardConversationWidget
{
public:
	struct FDataTableRowHandle                    ReplayAction;                                      // 0x0238(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFortConversation*                      Conversation;                                      // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                         QuestItemRef;                                      // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C* ConversationActor;                                 // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PopulateFromConversation(class UFortConversation* Param_Conversation, bool CallFunc_IsValidConversation_ReturnValue, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate);
	void HandleReplayAction(bool* Committed, bool CallFunc_IsValid_ReturnValue);
	void StopConversation();
	void HandleNewSentence(const struct FFortConversationSentence& Sentence, class FText CallFunc_GetDataFromSentence_Text, class UTexture2D* CallFunc_GetDataFromSentence_TalkingHeadTexture);
	void HandleConversationFinished(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue1, EFortQuestRewardType CallFunc_GetRewardType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void PlayConversation(class UFortQuestItem* QuestItem, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, EFortQuestRewardType CallFunc_GetRewardType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidConversation_ReturnValue, class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C* CallFunc_CreateConversationActor_NewAnnoucement);
	void CreateConversationActor(class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C** NewAnnoucement, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C* CallFunc_FinishSpawningActor_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontEndRewards_Conversation_VO_C">();
	}
	static class UFrontEndRewards_Conversation_VO_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrontEndRewards_Conversation_VO_C>();
	}
};

}


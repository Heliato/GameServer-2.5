#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announcement_QuestUpdate

#include "Basic.hpp"

#include "Announcement_QuestUpdate_classes.hpp"
#include "Announcement_QuestUpdate_parameters.hpp"


namespace SDK
{

// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.ExecuteUbergraph_Announcement_QuestUpdate
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestUpdateEntry_C*              K2Node_CustomEvent_UpdateWidget                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UQuestUpdateEntry_C* UpdateWidget)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// class AFortClientAnnouncement*          K2Node_Event_Announcement                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAnnounce_QuestUpdate_C*          K2Node_DynamicCast_AsAnnounce_Quest_Update             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_OnReceiveQuestUpdate_Success                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAnnouncement_QuestUpdate_C::ExecuteUbergraph_Announcement_QuestUpdate(int32 EntryPoint, class UQuestUpdateEntry_C* K2Node_CustomEvent_UpdateWidget, TDelegate<void(class UQuestUpdateEntry_C* UpdateWidget)> K2Node_CreateDelegate_OutputDelegate, class AFortClientAnnouncement* K2Node_Event_Announcement, class AAnnounce_QuestUpdate_C* K2Node_DynamicCast_AsAnnounce_Quest_Update, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnReceiveQuestUpdate_Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_QuestUpdate_C", "ExecuteUbergraph_Announcement_QuestUpdate");

	Params::Announcement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_UpdateWidget = K2Node_CustomEvent_UpdateWidget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Announcement = K2Node_Event_Announcement;
	Parms.K2Node_DynamicCast_AsAnnounce_Quest_Update = K2Node_DynamicCast_AsAnnounce_Quest_Update;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_OnReceiveQuestUpdate_Success = CallFunc_OnReceiveQuestUpdate_Success;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.AllUpdatesFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestUpdateEntry_C*              UpdateWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_QuestUpdate_C::AllUpdatesFinished(class UQuestUpdateEntry_C* UpdateWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_QuestUpdate_C", "AllUpdatesFinished");

	Params::Announcement_QuestUpdate_C_AllUpdatesFinished Parms{};

	Parms.UpdateWidget = UpdateWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.UpdateWidgetData
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement*          Announcement                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_QuestUpdate_C::UpdateWidgetData(class AFortClientAnnouncement* Announcement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_QuestUpdate_C", "UpdateWidgetData");

	Params::Announcement_QuestUpdate_C_UpdateWidgetData Parms{};

	Parms.Announcement = Announcement;

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announcement_QuestUpdate

#include "Basic.hpp"


namespace SDK::Params
{

// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.ExecuteUbergraph_Announcement_QuestUpdate
// 0x0038 (0x0038 - 0x0000)
struct Announcement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3452[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestUpdateEntry_C*                    K2Node_CustomEvent_UpdateWidget;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UQuestUpdateEntry_C* UpdateWidget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class AFortClientAnnouncement*                K2Node_Event_Announcement;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAnnounce_QuestUpdate_C*                K2Node_DynamicCast_AsAnnounce_Quest_Update;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OnReceiveQuestUpdate_Success;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.AllUpdatesFinished
// 0x0008 (0x0008 - 0x0000)
struct Announcement_QuestUpdate_C_AllUpdatesFinished final 
{
public:
	class UQuestUpdateEntry_C*                    UpdateWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.UpdateWidgetData
// 0x0008 (0x0008 - 0x0000)
struct Announcement_QuestUpdate_C_UpdateWidgetData final 
{
public:
	class AFortClientAnnouncement*                Announcement;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


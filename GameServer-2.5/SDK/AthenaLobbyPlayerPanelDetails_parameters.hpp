#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLobbyPlayerPanelDetails

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.ExecuteUbergraph_AthenaLobbyPlayerPanelDetails
// 0x0080 (0x0080 - 0x0000)
struct AthenaLobbyPlayerPanelDetails_C_ExecuteUbergraph_AthenaLobbyPlayerPanelDetails final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31D9[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable1;                             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable12;                            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable123;                           // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31DA[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
};

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct AthenaLobbyPlayerPanelDetails_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshPendingInvite
// 0x0005 (0x0005 - 0x0000)
struct AthenaLobbyPlayerPanelDetails_C_RefreshPendingInvite final 
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInvitationPending_bIsInvitationPending; // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.IsInvitationPending
// 0x0078 (0x0078 - 0x0000)
struct AthenaLobbyPlayerPanelDetails_C_IsInvitationPending final 
{
public:
	bool                                          bIsInvitationPending;                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31DB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       PlayerUniqueId;                                    // 0x0008(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31DC[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidNetID_ReturnValue;                 // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasPendingPartyInvitation_ReturnValue;    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortFriendRequestStatus                      CallFunc_GetFriendRequestStatusForPlayer_ReturnValue; // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortFriendRequestStatus                      Temp_byte_Variable;                                // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable12;                              // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable123;                             // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable1234;                            // 0x0047(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable12345;                           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable123456;                          // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable1234567;                         // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select1_Default;                            // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidNetID_ReturnValue1;                // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31DD[0x1];                                     // 0x004F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       K2Node_Select12_Default;                           // 0x0050(0x0028)(HasGetValueTypeHash)
};

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnPartyInvitesCountChanged
// 0x0004 (0x0004 - 0x0000)
struct AthenaLobbyPlayerPanelDetails_C_OnPartyInvitesCountChanged final 
{
public:
	int32                                         InvitesCount;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnActiveFriendsCountUpdated
// 0x0004 (0x0004 - 0x0000)
struct AthenaLobbyPlayerPanelDetails_C_OnActiveFriendsCountUpdated final 
{
public:
	int32                                         ActiveFriendsCount;                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.InitializeContextEvents
// 0x0030 (0x0030 - 0x0000)
struct AthenaLobbyPlayerPanelDetails_C_InitializeContextEvents final 
{
public:
	TDelegate<void(int32 ActiveFriendsCount)>     K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 PartyInvitesCount)>      K2Node_CreateDelegate_OutputDelegate1;             // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue1;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.SetTeamMemberInfo
// 0x01A8 (0x01A8 - 0x0000)
struct AthenaLobbyPlayerPanelDetails_C_SetTeamMemberInfo final 
{
public:
	struct FFortTeamMemberInfo                    Param_TeamMemberInfo;                              // 0x0000(0x01A8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshBattlePassBoost
// 0x01A0 (0x01A0 - 0x0000)
struct AthenaLobbyPlayerPanelDetails_C_RefreshBattlePassBoost final 
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable12;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable123;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable12;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable1234;                            // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable12345;                           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31DE[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue1;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue1;              // 0x0038(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0050(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x0090(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D0(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array1;                           // 0x00E0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00F0(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select1_Default;                            // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31DF[0x6];                                     // 0x010A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0110(0x0018)()
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31E0[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable1;                               // 0x0130(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue1;                  // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable123;                             // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable123456;                          // 0x014B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31E1[0x4];                                     // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select12_Default;                           // 0x0150(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue1;                      // 0x0168(0x0018)()
	ESlateVisibility                              Temp_byte_Variable1234567;                         // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue12;                 // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select123_Default;                          // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1234;                            // 0x0183(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTeamMemberFriend_ReturnValue;           // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select1234_Default;                         // 0x0185(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalPlayersUniqueID_ReturnValue;       // 0x0186(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31E2[0x1];                                     // 0x0187(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortBattlePassInfo                    CallFunc_GetBattlePassInfoForPlayer_Result;        // 0x0188(0x0014)(NoDestructor)
};

}


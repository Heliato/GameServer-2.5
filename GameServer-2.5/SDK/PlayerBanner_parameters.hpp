#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerBanner

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function PlayerBanner.PlayerBanner_C.ExecuteUbergraph_PlayerBanner
// 0x0200 (0x0200 - 0x0000)
struct PlayerBanner_C_ExecuteUbergraph_PlayerBanner final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29DA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29DB[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTeamMemberInfo                    K2Node_CustomEvent_TeamMemberInfo;                 // 0x0018(0x01A8)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetBannerImage_Success;                   // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x01C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_UniqueNetIdRepl_ReturnValue;      // 0x01C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue; // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29DC[0x2];                                     // 0x01C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortPublicAccountInfo                 K2Node_CustomEvent_NewInfo;                        // 0x01C8(0x0034)(NoDestructor)
};

// Function PlayerBanner.PlayerBanner_C.Account Info Changed
// 0x0034 (0x0034 - 0x0000)
struct PlayerBanner_C_Account_Info_Changed final 
{
public:
	struct FFortPublicAccountInfo                 NewInfo;                                           // 0x0000(0x0034)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function PlayerBanner.PlayerBanner_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PlayerBanner_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerBanner.PlayerBanner_C.OnTeamMemberStateChanged
// 0x01A8 (0x01A8 - 0x0000)
struct PlayerBanner_C_OnTeamMemberStateChanged final 
{
public:
	struct FFortTeamMemberInfo                    TeamMemberInfo;                                    // 0x0000(0x01A8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerBanner.PlayerBanner_C.SetBannerImage
// 0x0058 (0x0058 - 0x0000)
struct PlayerBanner_C_SetBannerImage final 
{
public:
	struct FFortHomeBaseInfo                      Image_info;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Success;                                           // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29DD[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue1;           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerBanner.PlayerBanner_C.SetBannerIconId
// 0x00A8 (0x00A8 - 0x0000)
struct PlayerBanner_C_SetBannerIconId final 
{
public:
	class FName                                   InBannerIconId;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Object)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Option_B___If_false__use_Option_A_Variable; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29DE[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetBannerSmallIconAssetFromRowName_ReturnValue; // 0x0020(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue; // 0x0048(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UObject>                 K2Node_Select_Default;                             // 0x0070(0x0028)(HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetBannerMID_BannerMID;                   // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue1;           // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerBanner.PlayerBanner_C.SetBannerColorId
// 0x0068 (0x0068 - 0x0000)
struct PlayerBanner_C_SetBannerColorId final 
{
public:
	class FName                                   InBannerColorId;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetBannerMID_BannerMID;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29DF[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHomebaseBannerColor                   CallFunc_GetBannerColorFromRowName_ReturnValue;    // 0x0014(0x0020)(NoDestructor)
	uint8                                         Pad_29E0[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetBannerMID_BannerMID1;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetSecondaryColor_ReturnValue;            // 0x0040(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetPrimaryColor_ReturnValue;              // 0x0050(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue1;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerBanner.PlayerBanner_C.SetBannerOwner
// 0x0090 (0x0090 - 0x0000)
struct PlayerBanner_C_SetBannerOwner final 
{
public:
	struct FUniqueNetIdRepl                       OwnerId;                                           // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TDelegate<void(const struct FFortPublicAccountInfo& NewInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FFortPublicAccountInfo& NewInfo)> K2Node_CreateDelegate_OutputDelegate1;             // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FFortTeamMemberInfo& TeamMemberInfo)> K2Node_CreateDelegate_OutputDelegate12;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_UniqueNetIdRepl_ReturnValue;      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29E1[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUITeamInfo*                        CallFunc_GetLocalPlayerTeam_ReturnValue;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue1;                  // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFortTeamMemberInfo& TeamMemberInfo)> K2Node_CreateDelegate_OutputDelegate123;           // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue12;                 // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerBanner.PlayerBanner_C.GetBannerMID
// 0x0010 (0x0010 - 0x0000)
struct PlayerBanner_C_GetBannerMID final 
{
public:
	class UMaterialInstanceDynamic*               BannerMID;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerBanner.PlayerBanner_C.OnBannerIconLoaded
// 0x0020 (0x0020 - 0x0000)
struct PlayerBanner_C_OnBannerIconLoaded final 
{
public:
	class UObject*                                LoadedObject;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetBannerMID_BannerMID;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               K2Node_DynamicCast_AsTexture;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerBanner.PlayerBanner_C.OnSurroundIconLoaded
// 0x0020 (0x0020 - 0x0000)
struct PlayerBanner_C_OnSurroundIconLoaded final 
{
public:
	class UObject*                                LoadedObject;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               K2Node_DynamicCast_AsTexture;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29E2[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerBanner.PlayerBanner_C.RefreshSurround
// 0x0088 (0x0088 - 0x0000)
struct PlayerBanner_C_RefreshSurround final 
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29E3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAthenaSeasonBannerLevel               CallFunc_GetSeasonBannerInfo_ReturnValue;          // 0x0008(0x0050)()
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAssetNull_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29E4[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_DynamicCast_AsMaterial_Interface;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29E5[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Object)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
};

// Function PlayerBanner.PlayerBanner_C.ToggleBannerMask
// 0x0020 (0x0020 - 0x0000)
struct PlayerBanner_C_ToggleBannerMask final 
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29E6[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable1;                              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29E7[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetBannerMID_BannerMID;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerBanner.PlayerBanner_C.SetBannerIconAndColor
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) PlayerBanner_C_SetBannerIconAndColor final 
{
public:
	class FName                                   IconId;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ColorId;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerBanner.PlayerBanner_C.SetBannerIconAndColorFromProfile
// 0x00F0 (0x00F0 - 0x0000)
struct PlayerBanner_C_SetBannerIconAndColorFromProfile final 
{
public:
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue1;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue12;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortAthenaLoadout                     CallFunc_GetLoadoutForPlayer_ReturnValue;          // 0x0018(0x0078)()
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;                   // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29E8[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue1;           // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortHomeBaseInfo                      CallFunc_GetHomeBaseInfoForPlayer_Result;          // 0x00A8(0x0040)()
	bool                                          CallFunc_SetBannerImage_Success;                   // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerBanner.PlayerBanner_C.SetupSurround
// 0x0020 (0x0020 - 0x0000)
struct PlayerBanner_C_SetupSurround final 
{
public:
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0000(0x0010)(IsPlainOldData, NoDestructor)
	class USizeBoxSlot*                           K2Node_DynamicCast_AsSize_Box_Slot;                // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


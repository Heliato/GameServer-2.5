#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaPlayersLeftWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C.ExecuteUbergraph_AthenaPlayersLeftWidget
// 0x0020 (0x0020 - 0x0000)
struct AthenaPlayersLeftWidget_C_ExecuteUbergraph_AthenaPlayersLeftWidget final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AE4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_PlayersText;                          // 0x0008(0x0018)(ConstParm)
};

// Function AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C.SetPlayersLeftText
// 0x0018 (0x0018 - 0x0000)
struct AthenaPlayersLeftWidget_C_SetPlayersLeftText final 
{
public:
	class FText                                   PlayersText;                                       // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}


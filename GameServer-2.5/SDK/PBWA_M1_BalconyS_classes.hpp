#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBWA_M1_BalconyS

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PBWA_M1_BalconyS.PBWA_M1_BalconyS_C
// 0x0008 (0x0DC0 - 0x0DB8)
class APBWA_M1_BalconyS_C final  : public ABuildingFloor
{
public:
	uint8                                         Pad_42A9[0x8];                                     // 0x0DB8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_M1_BalconyS_C">();
	}
	static class APBWA_M1_BalconyS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_M1_BalconyS_C>();
	}
};

}


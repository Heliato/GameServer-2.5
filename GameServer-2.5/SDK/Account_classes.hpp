#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Account

#include "Basic.hpp"

#include "Account_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class Account.OnlineAccountCommon
// 0x0838 (0x0860 - 0x0028)
class UOnlineAccountCommon : public UObject
{
public:
	uint8                                         Pad_1D4E[0x10];                                    // 0x0028(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 AvailabilityServiceGameName;                       // 0x0038(0x0010)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bRequireLightswitchAtStartup;                      // 0x0048(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1D4F[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 EulaKey;                                           // 0x0050(0x0010)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FWebEnvUrl>                     WebCreateEpicAccountUrl;                           // 0x0060(0x0010)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	bool                                          bShouldGrantFreeAccess;                            // 0x0070(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1D50[0x1];                                     // 0x0071(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bUseGameSubAccessRedemption;                       // 0x0072(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bAllowHomeSharingAccess;                           // 0x0073(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1D51[0x7EC];                                   // 0x0074(0x07EC)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OnlineAccountCommon">();
	}
	static class UOnlineAccountCommon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnlineAccountCommon>();
	}
};

// Class Account.ExternalAccountProvider
// 0x0010 (0x0038 - 0x0028)
class UExternalAccountProvider final  : public UObject
{
public:
	TArray<struct FExternalAccountServiceConfig>  Services;                                          // 0x0028(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ExternalAccountProvider">();
	}
	static class UExternalAccountProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UExternalAccountProvider>();
	}
};

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheaterMapViewer

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TheaterMapViewer.TheaterMapViewer_C
// 0x0008 (0x0618 - 0x0610)
class ATheaterMapViewer_C final  : public AFortTheaterMapViewer
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0610(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TheaterMapViewer_C">();
	}
	static class ATheaterMapViewer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATheaterMapViewer_C>();
	}
};

}


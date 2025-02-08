#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_IngameMap_SceneCaptureBlurryNew

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C
// 0x0008 (0x0338 - 0x0330)
class AB_IngameMap_SceneCaptureBlurryNew_C final  : public ASceneCapture2D
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_B_IngameMap_SceneCaptureBlurryNew(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_IngameMap_SceneCaptureBlurryNew_C">();
	}
	static class AB_IngameMap_SceneCaptureBlurryNew_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_IngameMap_SceneCaptureBlurryNew_C>();
	}
};

}


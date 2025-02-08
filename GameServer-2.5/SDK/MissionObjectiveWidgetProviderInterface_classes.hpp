#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionObjectiveWidgetProviderInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C
// 0x0000 (0x0028 - 0x0028)
class IMissionObjectiveWidgetProviderInterface_C final  : public IInterface
{
public:
	void GetObjectiveContentWidgetClass(class UClass** Objective_WIdget_Class);
	void GetObjectiveBulletIcon(struct FSlateBrush* BulletIcon);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionObjectiveWidgetProviderInterface_C">();
	}
	static class IMissionObjectiveWidgetProviderInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMissionObjectiveWidgetProviderInterface_C>();
	}
};

}


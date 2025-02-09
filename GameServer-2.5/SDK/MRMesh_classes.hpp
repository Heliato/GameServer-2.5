#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MRMesh

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class MRMesh.MeshReconstructorBase
// 0x0000 (0x0028 - 0x0028)
class UMeshReconstructorBase final  : public UObject
{
public:
	struct FMRMeshConfiguration ConnectMRMesh(class UMRMeshComponent* Mesh);
	void DisconnectMRMesh();
	void PauseReconstruction();
	void StartReconstruction();
	void StopReconstruction();

	bool IsReconstructionPaused() const;
	bool IsReconstructionStarted() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshReconstructorBase">();
	}
	static class UMeshReconstructorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshReconstructorBase>();
	}
};

// Class MRMesh.MRMeshComponent
// 0x0050 (0x06B0 - 0x0660)
class UMRMeshComponent final  : public UPrimitiveComponent
{
public:
	uint8                                         Pad_1F9B[0x8];                                     // 0x0660(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Material;                                          // 0x0668(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMeshReconstructorBase*                 MeshReconstructor;                                 // 0x0670(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bEnableCollision;                                  // 0x0678(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1F9C[0x7];                                     // 0x0679(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBodySetup*>                     BodySetups;                                        // 0x0680(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1F9D[0x20];                                    // 0x0690(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ConnectReconstructor(class UMeshReconstructorBase* Reconstructor);

	class UMeshReconstructorBase* GetReconstructor() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MRMeshComponent">();
	}
	static class UMRMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMRMeshComponent>();
	}
};

}


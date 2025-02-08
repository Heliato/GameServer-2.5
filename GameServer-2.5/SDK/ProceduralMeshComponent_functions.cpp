#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProceduralMeshComponent

#include "Basic.hpp"

#include "ProceduralMeshComponent_classes.hpp"
#include "ProceduralMeshComponent_parameters.hpp"


namespace SDK
{

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>                  Vertices                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                           Triangles                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>                UVs                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>                  Normals                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>         Tangents                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::CalculateTangentsForMesh(TArray<struct FVector>& Vertices, TArray<int32>& Triangles, TArray<struct FVector2D>& UVs, TArray<struct FVector>* Normals, TArray<struct FProcMeshTangent>* Tangents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetProceduralMeshLibrary", "CalculateTangentsForMesh");

	Params::KismetProceduralMeshLibrary_CalculateTangentsForMesh Parms{};

	Parms.Vertices = std::move(Vertices);
	Parms.Triangles = std::move(Triangles);
	Parms.UVs = std::move(UVs);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	if (Tangents != nullptr)
		*Tangents = std::move(Parms.Tangents);
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                           Triangles                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                                   Vert0                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Vert1                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Vert2                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Vert3                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::ConvertQuadToTriangles(TArray<int32>& Triangles, int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetProceduralMeshLibrary", "ConvertQuadToTriangles");

	Params::KismetProceduralMeshLibrary_ConvertQuadToTriangles Parms{};

	Parms.Triangles = std::move(Triangles);
	Parms.Vert0 = Vert0;
	Parms.Vert1 = Vert1;
	Parms.Vert2 = Vert2;
	Parms.Vert3 = Vert3;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Triangles = std::move(Parms.Triangles);
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMeshComponent*             StaticMeshComponent                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   LODIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UProceduralMeshComponent*         ProcMeshComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bCreateCollision                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int32 LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetProceduralMeshLibrary", "CopyProceduralMeshFromStaticMeshComponent");

	Params::KismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent Parms{};

	Parms.StaticMeshComponent = StaticMeshComponent;
	Parms.LODIndex = LODIndex;
	Parms.ProcMeshComponent = ProcMeshComponent;
	Parms.bCreateCollision = bCreateCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                                   NumX                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   NumY                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bWinding                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                           Triangles                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::CreateGridMeshTriangles(int32 NumX, int32 NumY, bool bWinding, TArray<int32>* Triangles)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshTriangles");

	Params::KismetProceduralMeshLibrary_CreateGridMeshTriangles Parms{};

	Parms.NumX = NumX;
	Parms.NumY = NumY;
	Parms.bWinding = bWinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                          BoxRadius                                              (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>                  Vertices                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                           Triangles                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector>                  Normals                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>                UVs                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>         Tangents                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int32>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetProceduralMeshLibrary", "GenerateBoxMesh");

	Params::KismetProceduralMeshLibrary_GenerateBoxMesh Parms{};

	Parms.BoxRadius = std::move(BoxRadius);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Vertices != nullptr)
		*Vertices = std::move(Parms.Vertices);

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	if (UVs != nullptr)
		*UVs = std::move(Parms.UVs);

	if (Tangents != nullptr)
		*Tangents = std::move(Parms.Tangents);
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UProceduralMeshComponent*         InProcMesh                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   SectionIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>                  Vertices                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                           Triangles                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector>                  Normals                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>                UVs                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>         Tangents                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int32 SectionIndex, TArray<struct FVector>* Vertices, TArray<int32>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetProceduralMeshLibrary", "GetSectionFromProceduralMesh");

	Params::KismetProceduralMeshLibrary_GetSectionFromProceduralMesh Parms{};

	Parms.InProcMesh = InProcMesh;
	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Vertices != nullptr)
		*Vertices = std::move(Parms.Vertices);

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	if (UVs != nullptr)
		*UVs = std::move(Parms.UVs);

	if (Tangents != nullptr)
		*Tangents = std::move(Parms.Tangents);
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UStaticMesh*                      InMesh                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   LODIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   SectionIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>                  Vertices                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                           Triangles                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector>                  Normals                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>                UVs                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>         Tangents                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(class UStaticMesh* InMesh, int32 LODIndex, int32 SectionIndex, TArray<struct FVector>* Vertices, TArray<int32>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetProceduralMeshLibrary", "GetSectionFromStaticMesh");

	Params::KismetProceduralMeshLibrary_GetSectionFromStaticMesh Parms{};

	Parms.InMesh = InMesh;
	Parms.LODIndex = LODIndex;
	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Vertices != nullptr)
		*Vertices = std::move(Parms.Vertices);

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	if (UVs != nullptr)
		*UVs = std::move(Parms.UVs);

	if (Tangents != nullptr)
		*Tangents = std::move(Parms.Tangents);
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UProceduralMeshComponent*         InProcMesh                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          PlanePosition                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          PlaneNormal                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bCreateOtherHalf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UProceduralMeshComponent*         OutOtherHalfProcMesh                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EProcMeshSliceCapOption                 CapOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*               CapMaterial                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent** OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetProceduralMeshLibrary", "SliceProceduralMesh");

	Params::KismetProceduralMeshLibrary_SliceProceduralMesh Parms{};

	Parms.InProcMesh = InProcMesh;
	Parms.PlanePosition = std::move(PlanePosition);
	Parms.PlaneNormal = std::move(PlaneNormal);
	Parms.bCreateOtherHalf = bCreateOtherHalf;
	Parms.CapOption = CapOption;
	Parms.CapMaterial = CapMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutOtherHalfProcMesh != nullptr)
		*OutOtherHalfProcMesh = Parms.OutOtherHalfProcMesh;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FVector>                  ConvexVerts                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::AddCollisionConvexMesh(const TArray<struct FVector>& ConvexVerts)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralMeshComponent", "AddCollisionConvexMesh");

	Params::ProceduralMeshComponent_AddCollisionConvexMesh Parms{};

	Parms.ConvexVerts = std::move(ConvexVerts);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
// (Final, Native, Public, BlueprintCallable)

void UProceduralMeshComponent::ClearAllMeshSections()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralMeshComponent", "ClearAllMeshSections");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
// (Final, Native, Public, BlueprintCallable)

void UProceduralMeshComponent::ClearCollisionConvexMeshes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralMeshComponent", "ClearCollisionConvexMeshes");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   SectionIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::ClearMeshSection(int32 SectionIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralMeshComponent", "ClearMeshSection");

	Params::ProceduralMeshComponent_ClearMeshSection Parms{};

	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                                   SectionIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>                  Vertices                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                           Triangles                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>                  Normals                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>                UV0                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FColor>                   VertexColors                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>         Tangents                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    bCreateCollision                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::CreateMeshSection(int32 SectionIndex, TArray<struct FVector>& Vertices, TArray<int32>& Triangles, TArray<struct FVector>& Normals, TArray<struct FVector2D>& UV0, TArray<struct FColor>& VertexColors, TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralMeshComponent", "CreateMeshSection");

	Params::ProceduralMeshComponent_CreateMeshSection Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = std::move(Vertices);
	Parms.Triangles = std::move(Triangles);
	Parms.Normals = std::move(Normals);
	Parms.UV0 = std::move(UV0);
	Parms.VertexColors = std::move(VertexColors);
	Parms.Tangents = std::move(Tangents);
	Parms.bCreateCollision = bCreateCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                                   SectionIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>                  Vertices                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                           Triangles                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>                  Normals                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>                UV0                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>                UV1                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>                UV2                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>                UV3                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>             VertexColors                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>         Tangents                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    bCreateCollision                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::CreateMeshSection_LinearColor(int32 SectionIndex, TArray<struct FVector>& Vertices, TArray<int32>& Triangles, TArray<struct FVector>& Normals, TArray<struct FVector2D>& UV0, TArray<struct FVector2D>& UV1, TArray<struct FVector2D>& UV2, TArray<struct FVector2D>& UV3, TArray<struct FLinearColor>& VertexColors, TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralMeshComponent", "CreateMeshSection_LinearColor");

	Params::ProceduralMeshComponent_CreateMeshSection_LinearColor Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = std::move(Vertices);
	Parms.Triangles = std::move(Triangles);
	Parms.Normals = std::move(Normals);
	Parms.UV0 = std::move(UV0);
	Parms.UV1 = std::move(UV1);
	Parms.UV2 = std::move(UV2);
	Parms.UV3 = std::move(UV3);
	Parms.VertexColors = std::move(VertexColors);
	Parms.Tangents = std::move(Tangents);
	Parms.bCreateCollision = bCreateCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   SectionIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bNewVisibility                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralMeshComponent", "SetMeshSectionVisible");

	Params::ProceduralMeshComponent_SetMeshSectionVisible Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.bNewVisibility = bNewVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                                   SectionIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>                  Vertices                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>                  Normals                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>                UV0                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FColor>                   VertexColors                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>         Tangents                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::UpdateMeshSection(int32 SectionIndex, TArray<struct FVector>& Vertices, TArray<struct FVector>& Normals, TArray<struct FVector2D>& UV0, TArray<struct FColor>& VertexColors, TArray<struct FProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralMeshComponent", "UpdateMeshSection");

	Params::ProceduralMeshComponent_UpdateMeshSection Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = std::move(Vertices);
	Parms.Normals = std::move(Normals);
	Parms.UV0 = std::move(UV0);
	Parms.VertexColors = std::move(VertexColors);
	Parms.Tangents = std::move(Tangents);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                                   SectionIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>                  Vertices                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>                  Normals                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>                UV0                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>                UV1                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>                UV2                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>                UV3                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>             VertexColors                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>         Tangents                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::UpdateMeshSection_LinearColor(int32 SectionIndex, TArray<struct FVector>& Vertices, TArray<struct FVector>& Normals, TArray<struct FVector2D>& UV0, TArray<struct FVector2D>& UV1, TArray<struct FVector2D>& UV2, TArray<struct FVector2D>& UV3, TArray<struct FLinearColor>& VertexColors, TArray<struct FProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralMeshComponent", "UpdateMeshSection_LinearColor");

	Params::ProceduralMeshComponent_UpdateMeshSection_LinearColor Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = std::move(Vertices);
	Parms.Normals = std::move(Normals);
	Parms.UV0 = std::move(UV0);
	Parms.UV1 = std::move(UV1);
	Parms.UV2 = std::move(UV2);
	Parms.UV3 = std::move(UV3);
	Parms.VertexColors = std::move(VertexColors);
	Parms.Tangents = std::move(Tangents);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UProceduralMeshComponent::GetNumSections() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralMeshComponent", "GetNumSections");

	Params::ProceduralMeshComponent_GetNumSections Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   SectionIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UProceduralMeshComponent::IsMeshSectionVisible(int32 SectionIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralMeshComponent", "IsMeshSectionVisible");

	Params::ProceduralMeshComponent_IsMeshSectionVisible Parms{};

	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}


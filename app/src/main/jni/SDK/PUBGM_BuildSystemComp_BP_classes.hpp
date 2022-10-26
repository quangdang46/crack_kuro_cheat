#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BuildSystemComp_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BuildSystemComp_BP.BuildSystemComp_BP_C
// 0x000B (0x034B - 0x0340)
class UBuildSystemComp_BP_C : public USTBuildSystemComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0004) (Transient, DuplicateTransient)
	class UUAEDataTable*                               DataTable;                                                // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPNHDebugDraw;                                            // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCPODebugDraw;                                            // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOverlapPlace;                                            // 0x034A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BuildSystemComp_BP.BuildSystemComp_BP_C");
		return pStaticClass;
	}


	struct FRotator GetNewDestRotation(const struct FRotator& DestRotation, class AActor* CacheActor);
	bool IsLocationValid(const struct FVector& Location, float MaxBuildDist);
	struct FVector GetNewDestLocation(const struct FVector& DestLocation, class AActor* CacheActor, const struct FVector& ViewLocation);
	bool BPProcessNothingHitTrace(const struct FVector& DestLocation, const struct FRotator& DestRotation, float MaxBuildDist, int buildIndex, struct FVector* OutLocation);
	bool BPCheckPlacement(const struct FRotator& ControlRot, const struct FVector& BoxExtent, const struct FBuildingData& CurBuildData, const struct FVector& ViewLocation, TArray<struct FHitResult>* HitArray, struct FVector* OutLocation, bool* bHasForbiddenObject);
	bool ProccessNothingHitTraceOverlap(float* MaxBuildDist, int* buildIndex, struct FVector* DestLocation, struct FRotator* DestRotation, struct FVector* OutLocation, struct FVector* ViewLocation);
	bool CheckPlacementOverlap(TArray<struct FHitResult>* HitArray, struct FVector* OutLocation, struct FVector* BoxExtent, struct FBuildingData* CurBuildData, struct FRotator* BuildRotation, struct FRotator* ControlRot, struct FVector* ViewLocation, bool* HasForbiddenObject);
	bool ShouldEnableDoubleTouchMode();
	bool IsCanPlaceBuildingBP(int* InBuildID);
	void ReceiveBeginPlay();
	void InitBuildDataFromDataTable();
	void OnConstructionComplete_Event_1(bool bWasSuccessful, TEnumAsByte<enum EBuildingActionType> ConstructionType, bool bIsFromServer);
	void OnInsufficientMaterial_Event_1(TEnumAsByte<enum EBuildingActionType> BuildType);
	void RegisterUIEvents();
	void CustomEvent_2(float FloatValue);
	void CustomEvent_3(float FloatValue);
	void UpdateParameters();
	void CustomEvent_4(int IntValue);
	void CustomEvent_5(int IntValue);
	void CustomEvent_1(float FloatValue);
	void LuaReceiveBeginPlay();
	void TryAttachToMoveablePlatform(class AActor** SpawnedBuilding, struct FVector* BuildLocation);
	void ExecuteUbergraph_BuildSystemComp_BP(int EntryPoint);
};


}


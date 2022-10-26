// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BuildSystemComp_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.GetNewDestRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                DestRotation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  CacheActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UBuildSystemComp_BP_C::GetNewDestRotation(const struct FRotator& DestRotation, class AActor* CacheActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.GetNewDestRotation");

	UBuildSystemComp_BP_C_GetNewDestRotation_Params params;
	params.DestRotation = DestRotation;
	params.CacheActor = CacheActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.IsLocationValid
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          MaxBuildDist                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildSystemComp_BP_C::IsLocationValid(const struct FVector& Location, float MaxBuildDist)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.IsLocationValid");

	UBuildSystemComp_BP_C_IsLocationValid_Params params;
	params.Location = Location;
	params.MaxBuildDist = MaxBuildDist;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.GetNewDestLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 DestLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  CacheActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ViewLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBuildSystemComp_BP_C::GetNewDestLocation(const struct FVector& DestLocation, class AActor* CacheActor, const struct FVector& ViewLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.GetNewDestLocation");

	UBuildSystemComp_BP_C_GetNewDestLocation_Params params;
	params.DestLocation = DestLocation;
	params.CacheActor = CacheActor;
	params.ViewLocation = ViewLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.BPProcessNothingHitTrace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 DestLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                DestRotation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          MaxBuildDist                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            buildIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildSystemComp_BP_C::BPProcessNothingHitTrace(const struct FVector& DestLocation, const struct FRotator& DestRotation, float MaxBuildDist, int buildIndex, struct FVector* OutLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.BPProcessNothingHitTrace");

	UBuildSystemComp_BP_C_BPProcessNothingHitTrace_Params params;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;
	params.MaxBuildDist = MaxBuildDist;
	params.buildIndex = buildIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;

	return params.ReturnValue;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.BPCheckPlacement
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>      HitArray                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 BoxExtent                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FBuildingData           CurBuildData                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FRotator                ControlRot                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ViewLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)
// bool                           bHasForbiddenObject            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildSystemComp_BP_C::BPCheckPlacement(const struct FRotator& ControlRot, const struct FVector& BoxExtent, const struct FBuildingData& CurBuildData, const struct FVector& ViewLocation, TArray<struct FHitResult>* HitArray, struct FVector* OutLocation, bool* bHasForbiddenObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.BPCheckPlacement");

	UBuildSystemComp_BP_C_BPCheckPlacement_Params params;
	params.BoxExtent = BoxExtent;
	params.CurBuildData = CurBuildData;
	params.ControlRot = ControlRot;
	params.ViewLocation = ViewLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (HitArray != nullptr)
		*HitArray = params.HitArray;
	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (bHasForbiddenObject != nullptr)
		*bHasForbiddenObject = params.bHasForbiddenObject;

	return params.ReturnValue;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.ProccessNothingHitTraceOverlap
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 DestLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                DestRotation                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float*                         MaxBuildDist                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)
// int*                           buildIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ViewLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildSystemComp_BP_C::ProccessNothingHitTraceOverlap(float* MaxBuildDist, int* buildIndex, struct FVector* DestLocation, struct FRotator* DestRotation, struct FVector* OutLocation, struct FVector* ViewLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.ProccessNothingHitTraceOverlap");

	UBuildSystemComp_BP_C_ProccessNothingHitTraceOverlap_Params params;
	params.MaxBuildDist = MaxBuildDist;
	params.buildIndex = buildIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DestLocation != nullptr)
		*DestLocation = params.DestLocation;
	if (DestRotation != nullptr)
		*DestRotation = params.DestRotation;
	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (ViewLocation != nullptr)
		*ViewLocation = params.ViewLocation;

	return params.ReturnValue;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.CheckPlacementOverlap
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>      HitArray                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)
// struct FVector                 BoxExtent                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FBuildingData           CurBuildData                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FRotator                BuildRotation                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                ControlRot                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ViewLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           HasForbiddenObject             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildSystemComp_BP_C::CheckPlacementOverlap(TArray<struct FHitResult>* HitArray, struct FVector* OutLocation, struct FVector* BoxExtent, struct FBuildingData* CurBuildData, struct FRotator* BuildRotation, struct FRotator* ControlRot, struct FVector* ViewLocation, bool* HasForbiddenObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.CheckPlacementOverlap");

	UBuildSystemComp_BP_C_CheckPlacementOverlap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (HitArray != nullptr)
		*HitArray = params.HitArray;
	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
	if (CurBuildData != nullptr)
		*CurBuildData = params.CurBuildData;
	if (BuildRotation != nullptr)
		*BuildRotation = params.BuildRotation;
	if (ControlRot != nullptr)
		*ControlRot = params.ControlRot;
	if (ViewLocation != nullptr)
		*ViewLocation = params.ViewLocation;
	if (HasForbiddenObject != nullptr)
		*HasForbiddenObject = params.HasForbiddenObject;

	return params.ReturnValue;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.ShouldEnableDoubleTouchMode
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildSystemComp_BP_C::ShouldEnableDoubleTouchMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.ShouldEnableDoubleTouchMode");

	UBuildSystemComp_BP_C_ShouldEnableDoubleTouchMode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.IsCanPlaceBuildingBP
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           InBuildID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildSystemComp_BP_C::IsCanPlaceBuildingBP(int* InBuildID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.IsCanPlaceBuildingBP");

	UBuildSystemComp_BP_C_IsCanPlaceBuildingBP_Params params;
	params.InBuildID = InBuildID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBuildSystemComp_BP_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.ReceiveBeginPlay");

	UBuildSystemComp_BP_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.InitBuildDataFromDataTable
// (Event, Public, BlueprintEvent)

void UBuildSystemComp_BP_C::InitBuildDataFromDataTable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.InitBuildDataFromDataTable");

	UBuildSystemComp_BP_C_InitBuildDataFromDataTable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.OnConstructionComplete_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EBuildingActionType> ConstructionType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFromServer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComp_BP_C::OnConstructionComplete_Event_1(bool bWasSuccessful, TEnumAsByte<enum EBuildingActionType> ConstructionType, bool bIsFromServer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.OnConstructionComplete_Event_1");

	UBuildSystemComp_BP_C_OnConstructionComplete_Event_1_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.ConstructionType = ConstructionType;
	params.bIsFromServer = bIsFromServer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.OnInsufficientMaterial_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum EBuildingActionType> BuildType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComp_BP_C::OnInsufficientMaterial_Event_1(TEnumAsByte<enum EBuildingActionType> BuildType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.OnInsufficientMaterial_Event_1");

	UBuildSystemComp_BP_C_OnInsufficientMaterial_Event_1_Params params;
	params.BuildType = BuildType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.RegisterUIEvents
// (BlueprintCallable, BlueprintEvent)

void UBuildSystemComp_BP_C::RegisterUIEvents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.RegisterUIEvents");

	UBuildSystemComp_BP_C_RegisterUIEvents_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FloatValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComp_BP_C::CustomEvent_2(float FloatValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.CustomEvent_2");

	UBuildSystemComp_BP_C_CustomEvent_2_Params params;
	params.FloatValue = FloatValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FloatValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComp_BP_C::CustomEvent_3(float FloatValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.CustomEvent_3");

	UBuildSystemComp_BP_C_CustomEvent_3_Params params;
	params.FloatValue = FloatValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.UpdateParameters
// (BlueprintCallable, BlueprintEvent)

void UBuildSystemComp_BP_C::UpdateParameters()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.UpdateParameters");

	UBuildSystemComp_BP_C_UpdateParameters_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IntValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComp_BP_C::CustomEvent_4(int IntValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.CustomEvent_4");

	UBuildSystemComp_BP_C_CustomEvent_4_Params params;
	params.IntValue = IntValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.CustomEvent_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IntValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComp_BP_C::CustomEvent_5(int IntValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.CustomEvent_5");

	UBuildSystemComp_BP_C_CustomEvent_5_Params params;
	params.IntValue = IntValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FloatValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComp_BP_C::CustomEvent_1(float FloatValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.CustomEvent_1");

	UBuildSystemComp_BP_C_CustomEvent_1_Params params;
	params.FloatValue = FloatValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.LuaReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void UBuildSystemComp_BP_C::LuaReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.LuaReceiveBeginPlay");

	UBuildSystemComp_BP_C_LuaReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.TryAttachToMoveablePlatform
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 SpawnedBuilding                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                BuildLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBuildSystemComp_BP_C::TryAttachToMoveablePlatform(class AActor** SpawnedBuilding, struct FVector* BuildLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.TryAttachToMoveablePlatform");

	UBuildSystemComp_BP_C_TryAttachToMoveablePlatform_Params params;
	params.SpawnedBuilding = SpawnedBuilding;
	params.BuildLocation = BuildLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.ExecuteUbergraph_BuildSystemComp_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComp_BP_C::ExecuteUbergraph_BuildSystemComp_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystemComp_BP.BuildSystemComp_BP_C.ExecuteUbergraph_BuildSystemComp_BP");

	UBuildSystemComp_BP_C_ExecuteUbergraph_BuildSystemComp_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}


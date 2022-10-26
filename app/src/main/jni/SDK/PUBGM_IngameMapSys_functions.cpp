// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_IngameMapSys_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IngameMapSys.IngameMapSys_C.CheckNeedMiniMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bNeed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIngameMapSys_C::CheckNeedMiniMap(bool* bNeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function IngameMapSys.IngameMapSys_C.CheckNeedMiniMap");

	UIngameMapSys_C_CheckNeedMiniMap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bNeed != nullptr)
		*bNeed = params.bNeed;
}

// Function IngameMapSys.IngameMapSys_C.CheckUseNewMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Use                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIngameMapSys_C::CheckUseNewMap(bool* Use)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function IngameMapSys.IngameMapSys_C.CheckUseNewMap");

	UIngameMapSys_C_CheckUseNewMap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Use != nullptr)
		*Use = params.Use;
}

// Function IngameMapSys.IngameMapSys_C.CheckCloseMiniMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           needClose                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIngameMapSys_C::CheckCloseMiniMap(bool* needClose)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function IngameMapSys.IngameMapSys_C.CheckCloseMiniMap");

	UIngameMapSys_C_CheckCloseMiniMap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (needClose != nullptr)
		*needClose = params.needClose;
}

// Function IngameMapSys.IngameMapSys_C.OpenOrHideEntireMap
// (Public, BlueprintCallable, BlueprintEvent)

void UIngameMapSys_C::OpenOrHideEntireMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function IngameMapSys.IngameMapSys_C.OpenOrHideEntireMap");

	UIngameMapSys_C_OpenOrHideEntireMap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function IngameMapSys.IngameMapSys_C.GetMapDataPath
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AGameStateBase*          GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EMapType>     MapType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)

void UIngameMapSys_C::GetMapDataPath(class AGameStateBase* GameState, TEnumAsByte<enum EMapType> MapType, struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function IngameMapSys.IngameMapSys_C.GetMapDataPath");

	UIngameMapSys_C_GetMapDataPath_Params params;
	params.GameState = GameState;
	params.MapType = MapType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}

// Function IngameMapSys.IngameMapSys_C.GetShowMakerLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bShow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIngameMapSys_C::GetShowMakerLocation(bool* bShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function IngameMapSys.IngameMapSys_C.GetShowMakerLocation");

	UIngameMapSys_C_GetShowMakerLocation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}

// Function IngameMapSys.IngameMapSys_C.SetShowMakerLocation
// (Public, BlueprintCallable, BlueprintEvent)

void UIngameMapSys_C::SetShowMakerLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function IngameMapSys.IngameMapSys_C.SetShowMakerLocation");

	UIngameMapSys_C_SetShowMakerLocation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function IngameMapSys.IngameMapSys_C.GetPlayerColorByIndexC
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UIngameMapSys_C::GetPlayerColorByIndexC(int Index, struct FLinearColor* Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function IngameMapSys.IngameMapSys_C.GetPlayerColorByIndexC");

	UIngameMapSys_C_GetPlayerColorByIndexC_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}

}


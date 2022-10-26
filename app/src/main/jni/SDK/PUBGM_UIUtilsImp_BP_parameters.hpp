#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_UIUtilsImp_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UIUtilsImp_BP.UIUtilsImp_BP_C.GetSettingConfigSaveGameData
struct UUIUtilsImp_BP_C_GetSettingConfigSaveGameData_Params
{
	class USaveGame*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UIUtilsImp_BP.UIUtilsImp_BP_C.OnAsyncLoadOtherAsset
struct UUIUtilsImp_BP_C_OnAsyncLoadOtherAsset_Params
{
	class UObject**                                    AsyAsset;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage**                                     TarImage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              KeepSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIUtilsImp_BP.UIUtilsImp_BP_C.ExecuteUbergraph_UIUtilsImp_BP
struct UUIUtilsImp_BP_C_ExecuteUbergraph_UIUtilsImp_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}


#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_PetUtils_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PetUtils.PetUtils_C.GetPetLevelCfg
struct UPetUtils_C_GetPetLevelCfg_Params
{
	struct FGameModePlayerPetInfo                      PetInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_PetLevelTable_type               Out_Row;                                                  // (Parm, OutParm)
};

}


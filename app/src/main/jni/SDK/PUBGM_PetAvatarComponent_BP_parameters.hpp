#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_PetAvatarComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetHasEquippedItem
struct UPetAvatarComponent_BP_C_PetHasEquippedItem_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetUnequipItemById
struct UPetAvatarComponent_BP_C_PetUnequipItemById_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetEquipItemById
struct UPetAvatarComponent_BP_C_PetEquipItemById_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.MakeAvatarTableData
struct UPetAvatarComponent_BP_C_MakeAvatarTableData_Params
{
	struct FItemDefineID                               InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAvatarTableData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}


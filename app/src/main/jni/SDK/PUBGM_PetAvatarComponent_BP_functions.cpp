// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_PetAvatarComponent_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetHasEquippedItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPetAvatarComponent_BP_C::PetHasEquippedItem(int ID, bool* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetHasEquippedItem");

	UPetAvatarComponent_BP_C_PetHasEquippedItem_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}

// Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetUnequipItemById
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPetAvatarComponent_BP_C::PetUnequipItemById(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetUnequipItemById");

	UPetAvatarComponent_BP_C_PetUnequipItemById_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetEquipItemById
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPetAvatarComponent_BP_C::PetEquipItemById(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetEquipItemById");

	UPetAvatarComponent_BP_C_PetEquipItemById_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.MakeAvatarTableData
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           InItemID                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAvatarTableData        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAvatarTableData UPetAvatarComponent_BP_C::MakeAvatarTableData(struct FItemDefineID* InItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.MakeAvatarTableData");

	UPetAvatarComponent_BP_C_MakeAvatarTableData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InItemID != nullptr)
		*InItemID = params.InItemID;

	return params.ReturnValue;
}

}


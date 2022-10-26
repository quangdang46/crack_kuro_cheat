// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_MinitvAvatarComponent_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MinitvAvatarComponent_BP.MinitvAvatarComponent_BP_C.MakeAvatarTableData
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           InItemID                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAvatarTableData        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAvatarTableData UMinitvAvatarComponent_BP_C::MakeAvatarTableData(struct FItemDefineID* InItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MinitvAvatarComponent_BP.MinitvAvatarComponent_BP_C.MakeAvatarTableData");

	UMinitvAvatarComponent_BP_C_MakeAvatarTableData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InItemID != nullptr)
		*InItemID = params.InItemID;

	return params.ReturnValue;
}

// Function MinitvAvatarComponent_BP.MinitvAvatarComponent_BP_C.RayEquipItemById
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinitvAvatarComponent_BP_C::RayEquipItemById(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MinitvAvatarComponent_BP.MinitvAvatarComponent_BP_C.RayEquipItemById");

	UMinitvAvatarComponent_BP_C_RayEquipItemById_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}


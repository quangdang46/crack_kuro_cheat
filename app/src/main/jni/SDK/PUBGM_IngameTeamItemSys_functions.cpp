// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_IngameTeamItemSys_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IngameTeamItemSys.IngameTeamItemSys_C.GetItemAddonMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TMap<struct FString, struct FString> AddonMap                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TMap<struct FString, struct FString> Path                           (Parm, OutParm, ZeroConstructor)

void UIngameTeamItemSys_C::GetItemAddonMap(TMap<struct FString, struct FString> AddonMap, TMap<struct FString, struct FString>* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function IngameTeamItemSys.IngameTeamItemSys_C.GetItemAddonMap");

	UIngameTeamItemSys_C_GetItemAddonMap_Params params;
	params.AddonMap = AddonMap;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}

}


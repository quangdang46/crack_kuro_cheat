// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_UAELobbyGamePawnMode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UAELobbyGamePawnMode.UAELobbyGamePawnMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AUAELobbyGamePawnMode_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAELobbyGamePawnMode.UAELobbyGamePawnMode_C.UserConstructionScript");

	AUAELobbyGamePawnMode_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}


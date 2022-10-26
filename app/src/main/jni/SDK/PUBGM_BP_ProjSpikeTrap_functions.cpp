// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_ProjSpikeTrap_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ProjSpikeTrap.BP_ProjSpikeTrap_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjSpikeTrap_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ProjSpikeTrap.BP_ProjSpikeTrap_C.UserConstructionScript");

	ABP_ProjSpikeTrap_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ProjSpikeTrap.BP_ProjSpikeTrap_C.ReceiveProjectileBouncedEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ProjSpikeTrap_C::ReceiveProjectileBouncedEvent(struct FHitResult* ImpactResult, struct FVector* ImpactVelocity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ProjSpikeTrap.BP_ProjSpikeTrap_C.ReceiveProjectileBouncedEvent");

	ABP_ProjSpikeTrap_C_ReceiveProjectileBouncedEvent_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ProjSpikeTrap.BP_ProjSpikeTrap_C.ExecuteUbergraph_BP_ProjSpikeTrap
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjSpikeTrap_C::ExecuteUbergraph_BP_ProjSpikeTrap(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ProjSpikeTrap.BP_ProjSpikeTrap_C.ExecuteUbergraph_BP_ProjSpikeTrap");

	ABP_ProjSpikeTrap_C_ExecuteUbergraph_BP_ProjSpikeTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}


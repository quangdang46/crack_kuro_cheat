// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_Grenade_StickyBomb_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Grenade_StickyBomb.BP_Grenade_StickyBomb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_StickyBomb_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_Grenade_StickyBomb.BP_Grenade_StickyBomb_C.UserConstructionScript");

	ABP_Grenade_StickyBomb_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_Grenade_StickyBomb.BP_Grenade_StickyBomb_C.ReceiveProjectileExplodedEvent
// (Event, Protected, BlueprintEvent)

void ABP_Grenade_StickyBomb_C::ReceiveProjectileExplodedEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_Grenade_StickyBomb.BP_Grenade_StickyBomb_C.ReceiveProjectileExplodedEvent");

	ABP_Grenade_StickyBomb_C_ReceiveProjectileExplodedEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_Grenade_StickyBomb.BP_Grenade_StickyBomb_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Grenade_StickyBomb_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_Grenade_StickyBomb.BP_Grenade_StickyBomb_C.ReceiveBeginPlay");

	ABP_Grenade_StickyBomb_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_Grenade_StickyBomb.BP_Grenade_StickyBomb_C.ExecuteUbergraph_BP_Grenade_StickyBomb
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_StickyBomb_C::ExecuteUbergraph_BP_Grenade_StickyBomb(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_Grenade_StickyBomb.BP_Grenade_StickyBomb_C.ExecuteUbergraph_BP_Grenade_StickyBomb");

	ABP_Grenade_StickyBomb_C_ExecuteUbergraph_BP_Grenade_StickyBomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}


// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_ActorFilter_ProjGrenade_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActorFilter_ProjGrenade.ActorFilter_ProjGrenade_C.IsTargetBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FActorFilterParams      FilterParams                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor**                 InHitActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 InTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActorFilter_ProjGrenade_C::IsTargetBlock(class AActor** InHitActor, class AActor** InTarget, struct FActorFilterParams* FilterParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ActorFilter_ProjGrenade.ActorFilter_ProjGrenade_C.IsTargetBlock");

	UActorFilter_ProjGrenade_C_IsTargetBlock_Params params;
	params.InHitActor = InHitActor;
	params.InTarget = InTarget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FilterParams != nullptr)
		*FilterParams = params.FilterParams;

	return params.ReturnValue;
}

}


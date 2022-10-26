// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_AutoAimingComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AutoAimingComponent.BP_AutoAimingComponent_C.CheckInAngle
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraBaseCharacter**  MyPawn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraBaseCharacter**  EnemyPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxAngle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AutoAimingComponent_C::CheckInAngle(class ASTExtraBaseCharacter** MyPawn, class ASTExtraBaseCharacter** EnemyPawn, float* MaxAngle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_AutoAimingComponent.BP_AutoAimingComponent_C.CheckInAngle");

	UBP_AutoAimingComponent_C_CheckInAngle_Params params;
	params.MyPawn = MyPawn;
	params.EnemyPawn = EnemyPawn;
	params.MaxAngle = MaxAngle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_AutoAimingComponent.BP_AutoAimingComponent_C.CheckSmoke
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                StartPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class ASTExtraPlayerCharacter** Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AutoAimingComponent_C::CheckSmoke(struct FVector* StartPoint, class ASTExtraPlayerCharacter** Pawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_AutoAimingComponent.BP_AutoAimingComponent_C.CheckSmoke");

	UBP_AutoAimingComponent_C_CheckSmoke_Params params;
	params.StartPoint = StartPoint;
	params.Pawn = Pawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_AutoAimingComponent.BP_AutoAimingComponent_C.CanEnemeyRaycastReach
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                StartPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class ASTExtraPlayerCharacter** Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AutoAimingComponent_C::CanEnemeyRaycastReach(struct FVector* StartPoint, class ASTExtraPlayerCharacter** Pawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_AutoAimingComponent.BP_AutoAimingComponent_C.CanEnemeyRaycastReach");

	UBP_AutoAimingComponent_C_CanEnemeyRaycastReach_Params params;
	params.StartPoint = StartPoint;
	params.Pawn = Pawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

}


// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_PetComponent_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PetComponent_BP.PetComponent_BP_C.IsFppMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPetComponent_BP_C::IsFppMode(bool* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetComponent_BP.PetComponent_BP_C.IsFppMode");

	UPetComponent_BP_C_IsFppMode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}

// Function PetComponent_BP.PetComponent_BP_C.GetPetOwnerPlayerPawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_PlayerPawn_C*        Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPetComponent_BP_C::GetPetOwnerPlayerPawn(class ABP_PlayerPawn_C** Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetComponent_BP.PetComponent_BP_C.GetPetOwnerPlayerPawn");

	UPetComponent_BP_C_GetPetOwnerPlayerPawn_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}

// Function PetComponent_BP.PetComponent_BP_C.GetPetPawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABasePetCharacter_BP_C*  Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPetComponent_BP_C::GetPetPawn(class ABasePetCharacter_BP_C** Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetComponent_BP.PetComponent_BP_C.GetPetPawn");

	UPetComponent_BP_C_GetPetPawn_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}

// Function PetComponent_BP.PetComponent_BP_C.SetPetPawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraPetCharacter*    InPetPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraPetCharacter*    Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPetComponent_BP_C::SetPetPawn(class ASTExtraPetCharacter* InPetPawn, class ASTExtraPetCharacter** Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetComponent_BP.PetComponent_BP_C.SetPetPawn");

	UPetComponent_BP_C_SetPetPawn_Params params;
	params.InPetPawn = InPetPawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}

// Function PetComponent_BP.PetComponent_BP_C.SetPetOwnerPlayerPawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraBaseCharacter*   InPlayerPawn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraBaseCharacter*   Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPetComponent_BP_C::SetPetOwnerPlayerPawn(class ASTExtraBaseCharacter* InPlayerPawn, class ASTExtraBaseCharacter** Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetComponent_BP.PetComponent_BP_C.SetPetOwnerPlayerPawn");

	UPetComponent_BP_C_SetPetOwnerPlayerPawn_Params params;
	params.InPlayerPawn = InPlayerPawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}

// Function PetComponent_BP.PetComponent_BP_C.ResetAttachTrans
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPetComponent_BP_C::ResetAttachTrans()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetComponent_BP.PetComponent_BP_C.ResetAttachTrans");

	UPetComponent_BP_C_ResetAttachTrans_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PetComponent_BP.PetComponent_BP_C.SpawnPetWithInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameModePlayerPetInfo  Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UPetComponent_BP_C::SpawnPetWithInfo(const struct FGameModePlayerPetInfo& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetComponent_BP.PetComponent_BP_C.SpawnPetWithInfo");

	UPetComponent_BP_C_SpawnPetWithInfo_Params params;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PetComponent_BP.PetComponent_BP_C.SpawnPet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  PetClass                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPetComponent_BP_C::SpawnPet(class UClass* PetClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetComponent_BP.PetComponent_BP_C.SpawnPet");

	UPetComponent_BP_C_SpawnPet_Params params;
	params.PetClass = PetClass;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PetComponent_BP.PetComponent_BP_C.RemovePet
// (BlueprintCallable, BlueprintEvent)

void UPetComponent_BP_C::RemovePet()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetComponent_BP.PetComponent_BP_C.RemovePet");

	UPetComponent_BP_C_RemovePet_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PetComponent_BP.PetComponent_BP_C.PlayerStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPawnState                     State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EPawnStateChangeType> changeType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPetComponent_BP_C::PlayerStateChange(EPawnState State, TEnumAsByte<enum EPawnStateChangeType> changeType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetComponent_BP.PetComponent_BP_C.PlayerStateChange");

	UPetComponent_BP_C_PlayerStateChange_Params params;
	params.State = State;
	params.changeType = changeType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PetComponent_BP.PetComponent_BP_C.OnOwnerPlayerPossessed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameModePlayerPetInfo  PetInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPetComponent_BP_C::OnOwnerPlayerPossessed(const struct FGameModePlayerPetInfo& PetInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetComponent_BP.PetComponent_BP_C.OnOwnerPlayerPossessed");

	UPetComponent_BP_C_OnOwnerPlayerPossessed_Params params;
	params.PetInfo = PetInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PetComponent_BP.PetComponent_BP_C.OnOwnerDetachedVehicle
// (BlueprintCallable, BlueprintEvent)

void UPetComponent_BP_C::OnOwnerDetachedVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetComponent_BP.PetComponent_BP_C.OnOwnerDetachedVehicle");

	UPetComponent_BP_C_OnOwnerDetachedVehicle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PetComponent_BP.PetComponent_BP_C.OnRep_PetPawn
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UPetComponent_BP_C::OnRep_PetPawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetComponent_BP.PetComponent_BP_C.OnRep_PetPawn");

	UPetComponent_BP_C_OnRep_PetPawn_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PetComponent_BP.PetComponent_BP_C.OnRep_PetOwnerPlayerPawn
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UPetComponent_BP_C::OnRep_PetOwnerPlayerPawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetComponent_BP.PetComponent_BP_C.OnRep_PetOwnerPlayerPawn");

	UPetComponent_BP_C_OnRep_PetOwnerPlayerPawn_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PetComponent_BP.PetComponent_BP_C.ExecuteUbergraph_PetComponent_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPetComponent_BP_C::ExecuteUbergraph_PetComponent_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetComponent_BP.PetComponent_BP_C.ExecuteUbergraph_PetComponent_BP");

	UPetComponent_BP_C_ExecuteUbergraph_PetComponent_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PetComponent_BP.PetComponent_BP_C.OnRepPetPawnCalled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPetComponent_BP_C::OnRepPetPawnCalled__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetComponent_BP.PetComponent_BP_C.OnRepPetPawnCalled__DelegateSignature");

	UPetComponent_BP_C_OnRepPetPawnCalled__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}


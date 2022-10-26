// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_ThrowComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ThrowComponent.BP_ThrowComponent_C.SetPawnStateDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraBaseCharacter*   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ThrowComponent_C::SetPawnStateDisabled(class ASTExtraBaseCharacter* Pawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ThrowComponent.BP_ThrowComponent_C.SetPawnStateDisabled");

	UBP_ThrowComponent_C_SetPawnStateDisabled_Params params;
	params.Pawn = Pawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ThrowComponent.BP_ThrowComponent_C.InitializeNewProjectile
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AEliteProjectile**       NewProjectile                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDrop                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ExplosionDelay                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ThrowComponent_C::InitializeNewProjectile(class AEliteProjectile** NewProjectile, bool* bDrop, float* ExplosionDelay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ThrowComponent.BP_ThrowComponent_C.InitializeNewProjectile");

	UBP_ThrowComponent_C_InitializeNewProjectile_Params params;
	params.NewProjectile = NewProjectile;
	params.bDrop = bDrop;
	params.ExplosionDelay = ExplosionDelay;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ThrowComponent.BP_ThrowComponent_C.ReceiveThrowStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EThrowState*                   NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EThrowState*                   PrevState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ThrowComponent_C::ReceiveThrowStateChanged(EThrowState* NewState, EThrowState* PrevState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ThrowComponent.BP_ThrowComponent_C.ReceiveThrowStateChanged");

	UBP_ThrowComponent_C_ReceiveThrowStateChanged_Params params;
	params.NewState = NewState;
	params.PrevState = PrevState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ThrowComponent.BP_ThrowComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_ThrowComponent_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ThrowComponent.BP_ThrowComponent_C.ReceiveBeginPlay");

	UBP_ThrowComponent_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ThrowComponent.BP_ThrowComponent_C.ThrowCanceledDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UThrowComponent*         ThrowComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ThrowComponent_C::ThrowCanceledDelegate_Event_1(class UThrowComponent* ThrowComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ThrowComponent.BP_ThrowComponent_C.ThrowCanceledDelegate_Event_1");

	UBP_ThrowComponent_C_ThrowCanceledDelegate_Event_1_Params params;
	params.ThrowComponent = ThrowComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ThrowComponent.BP_ThrowComponent_C.ExecuteUbergraph_BP_ThrowComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ThrowComponent_C::ExecuteUbergraph_BP_ThrowComponent(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ThrowComponent.BP_ThrowComponent_C.ExecuteUbergraph_BP_ThrowComponent");

	UBP_ThrowComponent_C_ExecuteUbergraph_BP_ThrowComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}


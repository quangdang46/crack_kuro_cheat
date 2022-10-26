// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_STExtraWheeledVehicle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.HandleRepCandidateAvatar
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::HandleRepCandidateAvatar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.HandleRepCandidateAvatar");

	ABP_STExtraWheeledVehicle_C_HandleRepCandidateAvatar_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.HandleSeatChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        LastSeatType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LastSeatIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        NewSeatType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewSeatIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraWheeledVehicle_C::HandleSeatChanged(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType LastSeatType, int LastSeatIndex, ESTExtraVehicleSeatType NewSeatType, int NewSeatIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.HandleSeatChanged");

	ABP_STExtraWheeledVehicle_C_HandleSeatChanged_Params params;
	params.Character = Character;
	params.LastSeatType = LastSeatType;
	params.LastSeatIndex = LastSeatIndex;
	params.NewSeatType = NewSeatType;
	params.NewSeatIndex = NewSeatIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.HandleAvatarEquiped
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::HandleAvatarEquiped()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.HandleAvatarEquiped");

	ABP_STExtraWheeledVehicle_C_HandleAvatarEquiped_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.HandleSeatOccupiersChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::HandleSeatOccupiersChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.HandleSeatOccupiersChanged");

	ABP_STExtraWheeledVehicle_C_HandleSeatOccupiersChanged_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.HandleDriverChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraPlayerCharacter* LastDriver                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraPlayerCharacter* NewDriver                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraWheeledVehicle_C::HandleDriverChanged(class ASTExtraPlayerCharacter* LastDriver, class ASTExtraPlayerCharacter* NewDriver)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.HandleDriverChanged");

	ABP_STExtraWheeledVehicle_C_HandleDriverChanged_Params params;
	params.LastDriver = LastDriver;
	params.NewDriver = NewDriver;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnClientVehicleHealthStateChangedToDestory
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::OnClientVehicleHealthStateChangedToDestory()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnClientVehicleHealthStateChangedToDestory");

	ABP_STExtraWheeledVehicle_C_OnClientVehicleHealthStateChangedToDestory_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.CreateDMI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::CreateDMI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.CreateDMI");

	ABP_STExtraWheeledVehicle_C_CreateDMI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.SetDMIParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Dim                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraWheeledVehicle_C::SetDMIParam(class UMaterialInstanceDynamic* Dim, const struct FName& Name, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.SetDMIParam");

	ABP_STExtraWheeledVehicle_C_SetDMIParam_Params params;
	params.Dim = Dim;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.UpdateExhaustFx
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ExhaustName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraWheeledVehicle_C::UpdateExhaustFx(const struct FName& ExhaustName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.UpdateExhaustFx");

	ABP_STExtraWheeledVehicle_C_UpdateExhaustFx_Params params;
	params.ExhaustName = ExhaustName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnClientVehicleHealthStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESTExtraVehicleHealthState     VehicleHealthState             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraWheeledVehicle_C::OnClientVehicleHealthStateChanged(ESTExtraVehicleHealthState VehicleHealthState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnClientVehicleHealthStateChanged");

	ABP_STExtraWheeledVehicle_C_OnClientVehicleHealthStateChanged_Params params;
	params.VehicleHealthState = VehicleHealthState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.UserConstructionScript");

	ABP_STExtraWheeledVehicle_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ReceiveBeginPlay");

	ABP_STExtraWheeledVehicle_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatAttachDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIdx                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraWheeledVehicle_C::BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatAttachDelegate__DelegateSignature(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatAttachDelegate__DelegateSignature");

	ABP_STExtraWheeledVehicle_C_BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatAttachDelegate__DelegateSignature_Params params;
	params.Character = Character;
	params.SeatType = SeatType;
	params.SeatIdx = SeatIdx;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnEngineStart
// (Event, Public, BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::OnEngineStart()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnEngineStart");

	ABP_STExtraWheeledVehicle_C_OnEngineStart_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnEngineStop
// (Event, Public, BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::OnEngineStop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnEngineStop");

	ABP_STExtraWheeledVehicle_C_OnEngineStop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnSetTailLightValue
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         LightValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraWheeledVehicle_C::OnSetTailLightValue(float* LightValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnSetTailLightValue");

	ABP_STExtraWheeledVehicle_C_OnSetTailLightValue_Params params;
	params.LightValue = LightValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnBoostingChanged
// (Event, Public, BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::OnBoostingChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnBoostingChanged");

	ABP_STExtraWheeledVehicle_C_OnBoostingChanged_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.VehicleMeshChanged
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::VehicleMeshChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.VehicleMeshChanged");

	ABP_STExtraWheeledVehicle_C_VehicleMeshChanged_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BPPlayOverlapDamageCameraShake
// (Event, Public, BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::BPPlayOverlapDamageCameraShake()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BPPlayOverlapDamageCameraShake");

	ABP_STExtraWheeledVehicle_C_BPPlayOverlapDamageCameraShake_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraWheeledVehicle_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ReceiveActorBeginOverlap");

	ABP_STExtraWheeledVehicle_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.AdvanceVehicleMeshChanged
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::AdvanceVehicleMeshChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.AdvanceVehicleMeshChanged");

	ABP_STExtraWheeledVehicle_C_AdvanceVehicleMeshChanged_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_1_DriverChangeDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ASTExtraPlayerCharacter* OldChara                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraPlayerCharacter* NewChara                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraWheeledVehicle_C::BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_1_DriverChangeDelegate__DelegateSignature(class ASTExtraPlayerCharacter* OldChara, class ASTExtraPlayerCharacter* NewChara)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_1_DriverChangeDelegate__DelegateSignature");

	ABP_STExtraWheeledVehicle_C_BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_1_DriverChangeDelegate__DelegateSignature_Params params;
	params.OldChara = OldChara;
	params.NewChara = NewChara;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatOccupiersChangedDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatOccupiersChangedDelegate__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatOccupiersChangedDelegate__DelegateSignature");

	ABP_STExtraWheeledVehicle_C_BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatOccupiersChangedDelegate__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_VehicleAvatarEquiped__DelegateSignature
// (BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_VehicleAvatarEquiped__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_VehicleAvatarEquiped__DelegateSignature");

	ABP_STExtraWheeledVehicle_C_BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_VehicleAvatarEquiped__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_VehicleLoadedFPPMesh__DelegateSignature
// (BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_VehicleLoadedFPPMesh__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_VehicleLoadedFPPMesh__DelegateSignature");

	ABP_STExtraWheeledVehicle_C_BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_VehicleLoadedFPPMesh__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatChangeDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        LastSeatType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LastSeatIdx                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        NewSeatType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewSeatIdx                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraWheeledVehicle_C::BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatChangeDelegate__DelegateSignature(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType LastSeatType, int LastSeatIdx, ESTExtraVehicleSeatType NewSeatType, int NewSeatIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatChangeDelegate__DelegateSignature");

	ABP_STExtraWheeledVehicle_C_BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatChangeDelegate__DelegateSignature_Params params;
	params.Character = Character;
	params.LastSeatType = LastSeatType;
	params.LastSeatIdx = LastSeatIdx;
	params.NewSeatType = NewSeatType;
	params.NewSeatIdx = NewSeatIdx;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_OnServerAvatarEquipedDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_OnServerAvatarEquipedDelegate__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_OnServerAvatarEquipedDelegate__DelegateSignature");

	ABP_STExtraWheeledVehicle_C_BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_OnServerAvatarEquipedDelegate__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ExecuteUbergraph_BP_STExtraWheeledVehicle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraWheeledVehicle_C::ExecuteUbergraph_BP_STExtraWheeledVehicle(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ExecuteUbergraph_BP_STExtraWheeledVehicle");

	ABP_STExtraWheeledVehicle_C_ExecuteUbergraph_BP_STExtraWheeledVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}


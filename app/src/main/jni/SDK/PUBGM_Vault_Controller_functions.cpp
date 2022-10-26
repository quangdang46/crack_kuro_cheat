// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_Vault_Controller_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Vault_Controller.Vault_Controller_C.SetPlayerStartPositionInternal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InStartPosition                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           UseInputStart                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::SetPlayerStartPositionInternal(const struct FVector& InStartPosition, bool UseInputStart)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.SetPlayerStartPositionInternal");

	UVault_Controller_C_SetPlayerStartPositionInternal_Params params;
	params.InStartPosition = InStartPosition;
	params.UseInputStart = UseInputStart;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.GetPlayerStartPositionInternal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRelationLoc                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartPos                       (Parm, OutParm, IsPlainOldData)

void UVault_Controller_C::GetPlayerStartPositionInternal(bool bRelationLoc, struct FVector* StartPos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetPlayerStartPositionInternal");

	UVault_Controller_C_GetPlayerStartPositionInternal_Params params;
	params.bRelationLoc = bRelationLoc;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (StartPos != nullptr)
		*StartPos = params.StartPos;
}

// Function Vault_Controller.Vault_Controller_C.PrintStartPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Prefix                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UVault_Controller_C::PrintStartPosition(const struct FString& Prefix, const struct FVector& Position)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.PrintStartPosition");

	UVault_Controller_C_PrintStartPosition_Params params;
	params.Prefix = Prefix;
	params.Position = Position;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.IsVaultOnBase
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldVault                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::IsVaultOnBase(bool* ShouldVault)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.IsVaultOnBase");

	UVault_Controller_C_IsVaultOnBase_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ShouldVault != nullptr)
		*ShouldVault = params.ShouldVault;
}

// Function Vault_Controller.Vault_Controller_C.PrintHeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          shouldheight                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NowHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::PrintHeight(float shouldheight, float NowHeight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.PrintHeight");

	UVault_Controller_C_PrintHeight_Params params;
	params.shouldheight = shouldheight;
	params.NowHeight = NowHeight;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.GetRealStartZHeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ResStartZ                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::GetRealStartZHeight(float* ResStartZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetRealStartZHeight");

	UVault_Controller_C_GetRealStartZHeight_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ResStartZ != nullptr)
		*ResStartZ = params.ResStartZ;
}

// Function Vault_Controller.Vault_Controller_C.GetDataStartPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartPos                       (Parm, OutParm, IsPlainOldData)

void UVault_Controller_C::GetDataStartPosition(struct FVector* StartPos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetDataStartPosition");

	UVault_Controller_C_GetDataStartPosition_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (StartPos != nullptr)
		*StartPos = params.StartPos;
}

// Function Vault_Controller.Vault_Controller_C.PrintDebugString
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          shoulddis                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          nowdis                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ZOffset                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::PrintDebugString(float shoulddis, float nowdis, float ZOffset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.PrintDebugString");

	UVault_Controller_C_PrintDebugString_Params params;
	params.shoulddis = shoulddis;
	params.nowdis = nowdis;
	params.ZOffset = ZOffset;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.EnsurePawnClientLeaveVault
// (Public, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::EnsurePawnClientLeaveVault()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.EnsurePawnClientLeaveVault");

	UVault_Controller_C_EnsurePawnClientLeaveVault_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.JumpVaultCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::JumpVaultCheck(bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.JumpVaultCheck");

	UVault_Controller_C_JumpVaultCheck_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function Vault_Controller.Vault_Controller_C.SetShouldAdjustHeight
// (Public, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::SetShouldAdjustHeight()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.SetShouldAdjustHeight");

	UVault_Controller_C_SetShouldAdjustHeight_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.SetNowUseFpsVault
// (Public, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::SetNowUseFpsVault()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.SetNowUseFpsVault");

	UVault_Controller_C_SetNowUseFpsVault_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.ServerCrossingBlockCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          distoblock                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          blockheight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                movedir                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::ServerCrossingBlockCheck(const struct FVector& StartPos, float distoblock, float blockheight, const struct FRotator& movedir, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.ServerCrossingBlockCheck");

	UVault_Controller_C_ServerCrossingBlockCheck_Params params;
	params.StartPos = StartPos;
	params.distoblock = distoblock;
	params.blockheight = blockheight;
	params.movedir = movedir;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function Vault_Controller.Vault_Controller_C.UpdateMoveMode
// (Public, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::UpdateMoveMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.UpdateMoveMode");

	UVault_Controller_C_UpdateMoveMode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.GetVaultKeyByBlockHeight
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVault_Controller_C::GetVaultKeyByBlockHeight(float* Height)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetVaultKeyByBlockHeight");

	UVault_Controller_C_GetVaultKeyByBlockHeight_Params params;
	params.Height = Height;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Vault_Controller.Vault_Controller_C.fpsVaultGetRotaion
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                rotion                         (Parm, OutParm, IsPlainOldData)

void UVault_Controller_C::fpsVaultGetRotaion(struct FRotator* rotion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.fpsVaultGetRotaion");

	UVault_Controller_C_fpsVaultGetRotaion_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (rotion != nullptr)
		*rotion = params.rotion;
}

// Function Vault_Controller.Vault_Controller_C.SetFpsVaultSpeed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::SetFpsVaultSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.SetFpsVaultSpeed");

	UVault_Controller_C_SetFpsVaultSpeed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.FpsVaultGetTppAnimationInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 AnimationName                  (Parm, OutParm, ZeroConstructor)
// float                          animationTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::FpsVaultGetTppAnimationInfo(struct FString* AnimationName, float* animationTime, float* PlayRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.FpsVaultGetTppAnimationInfo");

	UVault_Controller_C_FpsVaultGetTppAnimationInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AnimationName != nullptr)
		*AnimationName = params.AnimationName;
	if (animationTime != nullptr)
		*animationTime = params.animationTime;
	if (PlayRate != nullptr)
		*PlayRate = params.PlayRate;
}

// Function Vault_Controller.Vault_Controller_C.FpsGetTotalTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          TotalTime                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::FpsGetTotalTime(float* TotalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.FpsGetTotalTime");

	UVault_Controller_C_FpsGetTotalTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TotalTime != nullptr)
		*TotalTime = params.TotalTime;
}

// Function Vault_Controller.Vault_Controller_C.FpsTestLimitPostion
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 nowpostion                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::FpsTestLimitPostion(const struct FVector& nowpostion, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.FpsTestLimitPostion");

	UVault_Controller_C_FpsTestLimitPostion_Params params;
	params.nowpostion = nowpostion;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function Vault_Controller.Vault_Controller_C.FpsVaultTrigger
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::FpsVaultTrigger()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.FpsVaultTrigger");

	UVault_Controller_C_FpsVaultTrigger_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.FpsVaultServerCheating
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 playerpos                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 topPos                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::FpsVaultServerCheating(const struct FVector& playerpos, const struct FVector& topPos, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.FpsVaultServerCheating");

	UVault_Controller_C_FpsVaultServerCheating_Params params;
	params.playerpos = playerpos;
	params.topPos = topPos;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function Vault_Controller.Vault_Controller_C.FpsVaultStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 topPos                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          offsetMaxX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          offsetMaxY                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isjump                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                palyerRtion                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          blocklength                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::FpsVaultStart(const struct FVector& StartPos, const struct FVector& topPos, float offsetMaxX, float offsetMaxY, bool isjump, const struct FRotator& palyerRtion, float blocklength)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.FpsVaultStart");

	UVault_Controller_C_FpsVaultStart_Params params;
	params.StartPos = StartPos;
	params.topPos = topPos;
	params.offsetMaxX = offsetMaxX;
	params.offsetMaxY = offsetMaxY;
	params.isjump = isjump;
	params.palyerRtion = palyerRtion;
	params.blocklength = blocklength;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.FpsVaultGetNowPostion
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          nowPastTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 nowpostion                     (Parm, OutParm, IsPlainOldData)
// bool                           IsGet                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::FpsVaultGetNowPostion(float nowPastTime, struct FVector* nowpostion, bool* IsGet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.FpsVaultGetNowPostion");

	UVault_Controller_C_FpsVaultGetNowPostion_Params params;
	params.nowPastTime = nowPastTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (nowpostion != nullptr)
		*nowpostion = params.nowpostion;
	if (IsGet != nullptr)
		*IsGet = params.IsGet;
}

// Function Vault_Controller.Vault_Controller_C.FpsVualtUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::FpsVualtUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.FpsVualtUpdate");

	UVault_Controller_C_FpsVualtUpdate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.SetStopForwardDis
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          shoulddis                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::SetStopForwardDis(float shoulddis, float* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.SetStopForwardDis");

	UVault_Controller_C_SetStopForwardDis_Params params;
	params.shoulddis = shoulddis;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function Vault_Controller.Vault_Controller_C.DealBrokenWindows
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::DealBrokenWindows()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.DealBrokenWindows");

	UVault_Controller_C_DealBrokenWindows_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.VaultFromCPP
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVault_Controller_C::VaultFromCPP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.VaultFromCPP");

	UVault_Controller_C_VaultFromCPP_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Vault_Controller.Vault_Controller_C.CheckVaultWindows
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CheckStart                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 CheckEnd                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UVault_Controller_C::CheckVaultWindows(const struct FVector& CheckStart, const struct FVector& CheckEnd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.CheckVaultWindows");

	UVault_Controller_C_CheckVaultWindows_Params params;
	params.CheckStart = CheckStart;
	params.CheckEnd = CheckEnd;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.EnableCulling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::EnableCulling(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.EnableCulling");

	UVault_Controller_C_EnableCulling_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.GetCliblastCheckDis
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::GetCliblastCheckDis(float* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetCliblastCheckDis");

	UVault_Controller_C_GetCliblastCheckDis_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function Vault_Controller.Vault_Controller_C.NowStateCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           sprint                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Walk                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           stand                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::NowStateCheck(bool sprint, bool Walk, bool stand, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.NowStateCheck");

	UVault_Controller_C_NowStateCheck_Params params;
	params.sprint = sprint;
	params.Walk = Walk;
	params.stand = stand;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function Vault_Controller.Vault_Controller_C.CheckNowisJumpAnimation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          thcikLength                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ishasAnimation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::CheckNowisJumpAnimation(float Height, float thcikLength, bool* Result, bool* ishasAnimation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.CheckNowisJumpAnimation");

	UVault_Controller_C_CheckNowisJumpAnimation_Params params;
	params.Height = Height;
	params.thcikLength = thcikLength;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (ishasAnimation != nullptr)
		*ishasAnimation = params.ishasAnimation;
}

// Function Vault_Controller.Vault_Controller_C.CheckIsValidByHeightCheckDis
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          NowHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          checkDis                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isVaild                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::CheckIsValidByHeightCheckDis(float NowHeight, float checkDis, bool* isVaild)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.CheckIsValidByHeightCheckDis");

	UVault_Controller_C_CheckIsValidByHeightCheckDis_Params params;
	params.NowHeight = NowHeight;
	params.checkDis = checkDis;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (isVaild != nullptr)
		*isVaild = params.isVaild;
}

// Function Vault_Controller.Vault_Controller_C.IsValidVault
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::IsValidVault(bool* IsValid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.IsValidVault");

	UVault_Controller_C_IsValidVault_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}

// Function Vault_Controller.Vault_Controller_C.GetTestObjectChannels
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<TEnumAsByte<enum EObjectTypeQuery>> Channels                       (Parm, OutParm, ZeroConstructor)

void UVault_Controller_C::GetTestObjectChannels(TArray<TEnumAsByte<enum EObjectTypeQuery>>* Channels)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetTestObjectChannels");

	UVault_Controller_C_GetTestObjectChannels_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Channels != nullptr)
		*Channels = params.Channels;
}

// Function Vault_Controller.Vault_Controller_C.UpdateMontageSpeed
// (Public, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::UpdateMontageSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.UpdateMontageSpeed");

	UVault_Controller_C_UpdateMontageSpeed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.ServerCheckBlockDis
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 HitPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          blockdis                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          blockheight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          blocklength                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  checkActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::ServerCheckBlockDis(const struct FVector& HitPoint, const struct FString& Key, const struct FVector& StartPos, float blockdis, float blockheight, float blocklength, class AActor* checkActor, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.ServerCheckBlockDis");

	UVault_Controller_C_ServerCheckBlockDis_Params params;
	params.HitPoint = HitPoint;
	params.Key = Key;
	params.StartPos = StartPos;
	params.blockdis = blockdis;
	params.blockheight = blockheight;
	params.blocklength = blocklength;
	params.checkActor = checkActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function Vault_Controller.Vault_Controller_C.GetNowOppSideDis
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::GetNowOppSideDis(float* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetNowOppSideDis");

	UVault_Controller_C_GetNowOppSideDis_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function Vault_Controller.Vault_Controller_C.CheckUpLengthBlock
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::CheckUpLengthBlock(bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.CheckUpLengthBlock");

	UVault_Controller_C_CheckUpLengthBlock_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function Vault_Controller.Vault_Controller_C.GetCrossMaxBlockDisOffsset
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::GetCrossMaxBlockDisOffsset(bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetCrossMaxBlockDisOffsset");

	UVault_Controller_C_GetCrossMaxBlockDisOffsset_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function Vault_Controller.Vault_Controller_C.SetLimitPostion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          XValue                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ZVaule                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::SetLimitPostion(float XValue, float ZVaule)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.SetLimitPostion");

	UVault_Controller_C_SetLimitPostion_Params params;
	params.XValue = XValue;
	params.ZVaule = ZVaule;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.CheckForward
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::CheckForward(bool* IsActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.CheckForward");

	UVault_Controller_C_CheckForward_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}

// Function Vault_Controller.Vault_Controller_C.CheckHeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (Parm, OutParm, IsPlainOldData)

void UVault_Controller_C::CheckHeight(float Height, bool* IsActive, struct FVector* Point)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.CheckHeight");

	UVault_Controller_C_CheckHeight_Params params;
	params.Height = Height;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
	if (Point != nullptr)
		*Point = params.Point;
}

// Function Vault_Controller.Vault_Controller_C.GetJumpLengthByHeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::GetJumpLengthByHeight(float Height, float* Length)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetJumpLengthByHeight");

	UVault_Controller_C_GetJumpLengthByHeight_Params params;
	params.Height = Height;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Length != nullptr)
		*Length = params.Length;
}

// Function Vault_Controller.Vault_Controller_C.printReason
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UVault_Controller_C::printReason(const struct FString& Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.printReason");

	UVault_Controller_C_printReason_Params params;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.PrintEnable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::PrintEnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.PrintEnable");

	UVault_Controller_C_PrintEnable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.CacultLimitData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::CacultLimitData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.CacultLimitData");

	UVault_Controller_C_CacultLimitData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.GetCrossMaxBlockDisForward
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::GetCrossMaxBlockDisForward(bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetCrossMaxBlockDisForward");

	UVault_Controller_C_GetCrossMaxBlockDisForward_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function Vault_Controller.Vault_Controller_C.GetPlayerStartZ
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::GetPlayerStartZ(float* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetPlayerStartZ");

	UVault_Controller_C_GetPlayerStartZ_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function Vault_Controller.Vault_Controller_C.GetCrossBlockMaxFallingHeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::GetCrossBlockMaxFallingHeight()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetCrossBlockMaxFallingHeight");

	UVault_Controller_C_GetCrossBlockMaxFallingHeight_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.ForwardTestObjectType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::ForwardTestObjectType(class AActor* Actor, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.ForwardTestObjectType");

	UVault_Controller_C_ForwardTestObjectType_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function Vault_Controller.Vault_Controller_C.SetEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::SetEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.SetEnd");

	UVault_Controller_C_SetEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.SetVaultData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          dis                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 VaultKey                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  checkActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          crossmaxFalling                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          crossmaxDis                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                movedir                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UVault_Controller_C::SetVaultData(float dis, float Height, float Length, const struct FString& VaultKey, const struct FVector& StartPos, class AActor* checkActor, float crossmaxFalling, float crossmaxDis, const struct FVector& HitPoint, const struct FRotator& movedir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.SetVaultData");

	UVault_Controller_C_SetVaultData_Params params;
	params.dis = dis;
	params.Height = Height;
	params.Length = Length;
	params.VaultKey = VaultKey;
	params.StartPos = StartPos;
	params.checkActor = checkActor;
	params.crossmaxFalling = crossmaxFalling;
	params.crossmaxDis = crossmaxDis;
	params.HitPoint = HitPoint;
	params.movedir = movedir;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.UpdatePostion2
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::UpdatePostion2()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.UpdatePostion2");

	UVault_Controller_C_UpdatePostion2_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.GetNowData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInFalling                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsGet                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::GetNowData(bool IsInFalling, bool* IsGet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetNowData");

	UVault_Controller_C_GetNowData_Params params;
	params.IsInFalling = IsInFalling;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsGet != nullptr)
		*IsGet = params.IsGet;
}

// Function Vault_Controller.Vault_Controller_C.CheckCanVault
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::CheckCanVault(bool* IsActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.CheckCanVault");

	UVault_Controller_C_CheckCanVault_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}

// Function Vault_Controller.Vault_Controller_C.StartVault
// (BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::StartVault()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.StartVault");

	UVault_Controller_C_StartVault_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UVault_Controller_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.ReceiveBeginPlay");

	UVault_Controller_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.JumpVault
// (BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::JumpVault()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.JumpVault");

	UVault_Controller_C_JumpVault_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.VaultServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          dis                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 VaultKey                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  checkActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          crossblockMaxFall              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          crossblockMaxDis               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  WindowActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                movedir                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UVault_Controller_C::VaultServer(float dis, float Height, float Length, const struct FString& VaultKey, const struct FVector& StartPos, class AActor* checkActor, float crossblockMaxFall, float crossblockMaxDis, const struct FVector& HitPoint, class AActor* WindowActor, const struct FRotator& movedir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.VaultServer");

	UVault_Controller_C_VaultServer_Params params;
	params.dis = dis;
	params.Height = Height;
	params.Length = Length;
	params.VaultKey = VaultKey;
	params.StartPos = StartPos;
	params.checkActor = checkActor;
	params.crossblockMaxFall = crossblockMaxFall;
	params.crossblockMaxDis = crossblockMaxDis;
	params.HitPoint = HitPoint;
	params.WindowActor = WindowActor;
	params.movedir = movedir;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.vaultAll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          dis                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 VaultKey                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  checkActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          crossmaxFalling                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          crossmaxDis                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                movedir                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UVault_Controller_C::vaultAll(float dis, float Height, float Length, const struct FString& VaultKey, const struct FVector& StartPos, class AActor* checkActor, float crossmaxFalling, float crossmaxDis, const struct FVector& HitPoint, const struct FRotator& movedir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.vaultAll");

	UVault_Controller_C_vaultAll_Params params;
	params.dis = dis;
	params.Height = Height;
	params.Length = Length;
	params.VaultKey = VaultKey;
	params.StartPos = StartPos;
	params.checkActor = checkActor;
	params.crossmaxFalling = crossmaxFalling;
	params.crossmaxDis = crossmaxDis;
	params.HitPoint = HitPoint;
	params.movedir = movedir;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.jumpfromUI
// (BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::jumpfromUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.jumpfromUI");

	UVault_Controller_C_jumpfromUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.VaultFail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UVault_Controller_C::VaultFail(const struct FString& Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.VaultFail");

	UVault_Controller_C_VaultFail_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.UpdateVault_BluePrint
// (Event, Public, BlueprintEvent)

void UVault_Controller_C::UpdateVault_BluePrint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.UpdateVault_BluePrint");

	UVault_Controller_C_UpdateVault_BluePrint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.interrupted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPawnState                     State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPawnState                     InterruptedBy                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::interrupted(EPawnState State, EPawnState InterruptedBy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.interrupted");

	UVault_Controller_C_interrupted_Params params;
	params.State = State;
	params.InterruptedBy = InterruptedBy;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.vaultLeave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPawnState                     State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::vaultLeave(EPawnState State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.vaultLeave");

	UVault_Controller_C_vaultLeave_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.DsCheckStopVault
// (BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::DsCheckStopVault()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.DsCheckStopVault");

	UVault_Controller_C_DsCheckStopVault_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.StopVault
// (BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::StopVault()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.StopVault");

	UVault_Controller_C_StopVault_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.FpsVaultToAll
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                topPos                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         crossblockMaxFall              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         crossblockMaxDis               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isjump                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               movedir                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         blobkthick                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::FpsVaultToAll(struct FVector* StartPos, struct FVector* topPos, float* crossblockMaxFall, float* crossblockMaxDis, bool* isjump, struct FRotator* movedir, float* blobkthick)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.FpsVaultToAll");

	UVault_Controller_C_FpsVaultToAll_Params params;
	params.StartPos = StartPos;
	params.topPos = topPos;
	params.crossblockMaxFall = crossblockMaxFall;
	params.crossblockMaxDis = crossblockMaxDis;
	params.isjump = isjump;
	params.movedir = movedir;
	params.blobkthick = blobkthick;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.FpsVaultServer
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                topPos                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         crossblockMaxFall              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         crossblockMaxDis               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isjump                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               movedir                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         blobkthick                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::FpsVaultServer(struct FVector* StartPos, struct FVector* topPos, float* crossblockMaxFall, float* crossblockMaxDis, bool* isjump, struct FRotator* movedir, float* blobkthick)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.FpsVaultServer");

	UVault_Controller_C_FpsVaultServer_Params params;
	params.StartPos = StartPos;
	params.topPos = topPos;
	params.crossblockMaxFall = crossblockMaxFall;
	params.crossblockMaxDis = crossblockMaxDis;
	params.isjump = isjump;
	params.movedir = movedir;
	params.blobkthick = blobkthick;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Vault_Controller.Vault_Controller_C.ExecuteUbergraph_Vault_Controller
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::ExecuteUbergraph_Vault_Controller(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.ExecuteUbergraph_Vault_Controller");

	UVault_Controller_C_ExecuteUbergraph_Vault_Controller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}


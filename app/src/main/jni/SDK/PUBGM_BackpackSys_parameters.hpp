#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BackpackSys_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BackpackSys.BackpackSys_C.IsLocalpositionInBorder
struct UBackpackSys_C_IsLocalpositionInBorder_Params
{
	struct FVector2D                                   LocalCoordinate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UWidget*                                     Border;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackSys.BackpackSys_C.GetAddExtraWidget
struct UBackpackSys_C_GetAddExtraWidget_Params
{
	TMap<struct FString, struct FString>               WidgetMap;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BackpackSys.BackpackSys_C.CheckNeedVehicleBackPack
struct UBackpackSys_C_CheckNeedVehicleBackPack_Params
{
	bool                                               need;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackSys.BackpackSys_C.IsGunSupportAttachByDefine
struct UBackpackSys_C_IsGunSupportAttachByDefine_Params
{
	struct FItemDefineID                               gunDefine;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FItemDefineID                               attachDefine;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               support;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackSys.BackpackSys_C.IsGunSupportAttachByRes
struct UBackpackSys_C_IsGunSupportAttachByRes_Params
{
	int                                                gunResID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AttachResID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               support;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackSys.BackpackSys_C.GetWeaponSupportSocket
struct UBackpackSys_C_GetWeaponSupportSocket_Params
{
	int                                                WeaponId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<EWeaponAttachmentSocketType>                socketList;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BackpackSys.BackpackSys_C.GetWeaponSupportAttachResID
struct UBackpackSys_C_GetWeaponSupportAttachResID_Params
{
	int                                                WeaponId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        attachID;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BackpackSys.BackpackSys_C.GetWeaponAttachPosByResID
struct UBackpackSys_C_GetWeaponAttachPosByResID_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponAttachmentSocketType                        socket;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackSys.BackpackSys_C.AddToWeaponAttachPos
struct UBackpackSys_C_AddToWeaponAttachPos_Params
{
	int                                                attachID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	EWeaponAttachmentSocketType                        socket;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}


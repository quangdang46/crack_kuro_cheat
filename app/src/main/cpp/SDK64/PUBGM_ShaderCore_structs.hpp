#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ShaderCore.ShaderGroupDesc
// 0x0038
struct FShaderGroupDesc
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             Exclude;                                                  // 0x0018(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             Include;                                                  // 0x0028(0x0010) (ZeroConstructor, Config)
};

}


#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_QuantumDevKit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class QuantumDevKit.QuantumFirebaseRemoteConfig
// 0x0068 (0x0090 - 0x0028)
class UQuantumFirebaseRemoteConfig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FString>                             QueryConfigNamesArray;                                    // 0x0030(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class QuantumDevKit.QuantumFirebaseRemoteConfig");
		return pStaticClass;
	}


	EQuantumFirebaseRemoteConfigStatus GetStatus();
	struct FString GetRemoteConfig(const struct FString& ConfigNameToQuery);
	static class UQuantumFirebaseRemoteConfig* GetInstance();
};


}


#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_SurviveLoadingScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SurviveLoadingScreen.SurviveLoadingSettings
// 0x0020 (0x0058 - 0x0038)
class USurviveLoadingSettings : public UDeveloperSettings
{
public:
	TArray<struct FSoftObjectPath>                     Images;                                                   // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FSoftObjectPath>                     Videos;                                                   // 0x0048(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class SurviveLoadingScreen.SurviveLoadingSettings");
		return pStaticClass;
	}

};


}


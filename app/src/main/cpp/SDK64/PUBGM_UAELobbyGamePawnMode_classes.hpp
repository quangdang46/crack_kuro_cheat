#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_UAELobbyGamePawnMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UAELobbyGamePawnMode.UAELobbyGamePawnMode_C
// 0x0008 (0x0470 - 0x0468)
class AUAELobbyGamePawnMode_C : public AUAELobbyGameMode
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass UAELobbyGamePawnMode.UAELobbyGamePawnMode_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}


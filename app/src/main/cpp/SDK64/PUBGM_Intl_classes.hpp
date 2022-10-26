#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Intl_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Intl.StatManager
// 0x0110 (0x0138 - 0x0028)
class UStatManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0028(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Intl.StatManager");
		return pStaticClass;
	}


	void ReportEventWithString(EStatEventType EventType, const struct FString& _eventBody, bool isRealTime);
	void ReportEventWithParam(EStatEventType EventType, TMap<struct FString, struct FString> _params, bool isRealTime);
	void ReportEventWithNoParam(EStatEventType EventType, bool isRealTime);
	static class UStatManager* GetInstance();
};


}


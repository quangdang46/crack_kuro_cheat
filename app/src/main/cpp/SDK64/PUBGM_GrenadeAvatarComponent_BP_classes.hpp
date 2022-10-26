#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_GrenadeAvatarComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C
// 0x00D0 (0x0558 - 0x0488)
class UGrenadeAvatarComponent_BP_C : public UGrenadeAvatarComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0488(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0490(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.ExplodeEffect
	unsigned char                                      UnknownData01[0x28];                                      // 0x04B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.ExplodeSound
	unsigned char                                      UnknownData02[0x28];                                      // 0x04E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GrenadeFuzeAkSoundEvent
	unsigned char                                      UnknownData03[0x28];                                      // 0x0508(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GrenadeThrowAkSoundEvent
	unsigned char                                      UnknownData04[0x28];                                      // 0x0530(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GrenadeWallCollideAkSoundEvent

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C");
		return pStaticClass;
	}


	int GetDefaultAvatarID(int* InAvatarID);
	struct FString GetItemAvatarHandlePath(int* ItemId);
	class UBackpackCommonAvatarHandle* GetItemAvatarHandle(int* ItemId);
	void GrenadeAvatarEquiped();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GrenadeAvatarComponent_BP(int EntryPoint);
};


}


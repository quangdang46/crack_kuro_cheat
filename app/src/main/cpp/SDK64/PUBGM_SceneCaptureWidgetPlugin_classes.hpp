#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_SceneCaptureWidgetPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SceneCaptureWidgetPlugin.WidgetCaptureComponent2D
// 0x0020 (0x0960 - 0x0940)
class UWidgetCaptureComponent2D : public USceneCaptureComponent2D
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0940(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class SceneCaptureWidgetPlugin.WidgetCaptureComponent2D");
		return pStaticClass;
	}

};


// Class SceneCaptureWidgetPlugin.SceneCaptureCameraActor
// 0x0010 (0x0940 - 0x0930)
class ASceneCaptureCameraActor : public ACameraActor
{
public:
	class UWidgetCaptureComponent2D*                   SceneCaptureComponent;                                    // 0x0930(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0938(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class SceneCaptureWidgetPlugin.SceneCaptureCameraActor");
		return pStaticClass;
	}

};


// Class SceneCaptureWidgetPlugin.SceneCaptureWidget
// 0x00E0 (0x01E0 - 0x0100)
class USceneCaptureWidget : public UWidget
{
public:
	struct FSlateBrush                                 Brush;                                                    // 0x0100(0x00B8) (Edit, BlueprintVisible, BlueprintReadOnly)
	class ASceneCaptureCameraActor*                    SceneCaptureCameraActor;                                  // 0x01B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x01C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class SceneCaptureWidgetPlugin.SceneCaptureWidget");
		return pStaticClass;
	}


	void SetSceneCaptureCameraActor(class ASceneCaptureCameraActor* InSceneCaptureCameraActor);
};


}


#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_PandoraComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PandoraComponent.PandoraBpFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPandoraBpFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraBpFunctionLibrary");
		return pStaticClass;
	}


	static void Tnm2Test(const struct FString& errMsg, int iId, int iType, bool bSend);
	static void SetGameInstance(class UGameInstance* Instance);
	static struct FString OnClickOpenPop();
	static struct FString OnClickInit();
	static struct FString OnClickClose();
	static void LogoutPandora();
	static bool InitPandora(const struct FString& InOpenId, const struct FString& InRoleId, const struct FString& InAppId, const struct FString& InPlatId, const struct FString& InAccType, const struct FString& InArea, const struct FString& InPartion, const struct FString& InCloudTest, const struct FString& InAccessToken, const struct FString& InSdkVersion, const struct FString& InGameVersion);
	static struct FString GetHappyMessage();
};


// Class PandoraComponent.PandoraInterface
// 0x0000 (0x0028 - 0x0028)
class UPandoraInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraInterface");
		return pStaticClass;
	}

};


// Class PandoraComponent.PandoraRichTextBox
// 0x0320 (0x0420 - 0x0100)
class UPandoraRichTextBox : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x0100(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0118(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x0128(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                Color;                                                    // 0x0180(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<enum ETextJustify>                     Justification;                                            // 0x0190(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AutoWrapText;                                             // 0x0191(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0192(0x0002) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x0194(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x0198(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              LineHeightPercentage;                                     // 0x01A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
	TArray<class URichTextBlockDecorator*>             Decorators;                                               // 0x01B0(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x260];                                     // 0x01C0(0x0260) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraRichTextBox");
		return pStaticClass;
	}


	void SetText(const struct FText& InText);
	struct FText GetText();
};


// Class PandoraComponent.PandoraSceneComponent
// 0x0000 (0x02D0 - 0x02D0)
class UPandoraSceneComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraSceneComponent");
		return pStaticClass;
	}

};


// Class PandoraComponent.PandoraLuaActor
// 0x0078 (0x0410 - 0x0398)
class APandoraLuaActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0398(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x03F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0400(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaActor");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaPawn
// 0x0078 (0x0470 - 0x03F8)
class APandoraLuaPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x03F8(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0450(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0460(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaPawn");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaCharacter
// 0x0080 (0x0850 - 0x07D0)
class APandoraLuaCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x07D0(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0828(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0838(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0848(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaCharacter");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaController
// 0x0078 (0x0478 - 0x0400)
class APandoraLuaController : public AController
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0400(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0458(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0468(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaController");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaPlayerController
// 0x0078 (0x0778 - 0x0700)
class APandoraLuaPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0700(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0758(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0768(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaPlayerController");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaGameModeBase
// 0x0078 (0x04A0 - 0x0428)
class APandoraLuaGameModeBase : public AGameModeBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0428(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0480(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0490(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaGameModeBase");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaHUD
// 0x0078 (0x04F8 - 0x0480)
class APandoraLuaHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0480(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x04D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x04E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaHUD");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UPandoraLuaBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaBlueprintLibrary");
		return pStaticClass;
	}


	static struct FString GetStringFromVar(const struct FPandoraLuaBPVar& Value, int Index);
	static class UObject* GetObjectFromVar(const struct FPandoraLuaBPVar& Value, int Index);
	static float GetNumberFromVar(const struct FPandoraLuaBPVar& Value, int Index);
	static int GetIntFromVar(const struct FPandoraLuaBPVar& Value, int Index);
	static bool GetBoolFromVar(const struct FPandoraLuaBPVar& Value, int Index);
	static struct FPandoraLuaBPVar CreateVarFromString(const struct FString& Value);
	static struct FPandoraLuaBPVar CreateVarFromObject(class UObject* Value);
	static struct FPandoraLuaBPVar CreateVarFromNumber(float Value);
	static struct FPandoraLuaBPVar CreateVarFromInt(int Value);
	static struct FPandoraLuaBPVar CreateVarFromBool(bool Value);
	static struct FPandoraLuaBPVar CallToLuaWithArgs(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args, const struct FString& StateName);
	static struct FPandoraLuaBPVar CallToLua(const struct FString& FunctionName, const struct FString& StateName);
};


// Class PandoraComponent.PandoraLuaDelegate
// 0x0010 (0x0038 - 0x0028)
class UPandoraLuaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaDelegate");
		return pStaticClass;
	}


	void EventTrigger();
};


// Class PandoraComponent.PandoraLuaUserWidget
// 0x00B0 (0x02C8 - 0x0218)
class UPandoraLuaUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0218(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0270(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0280(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0290(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaUserWidget");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


}


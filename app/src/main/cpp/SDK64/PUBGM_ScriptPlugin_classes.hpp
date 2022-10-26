#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_ScriptPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ScriptPlugin.NetInterface
// 0x0000 (0x0028 - 0x0028)
class UNetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ScriptPlugin.NetInterface");
		return pStaticClass;
	}

};


// Class ScriptPlugin.LuaContext
// 0x0018 (0x03B0 - 0x0398)
class ALuaContext : public AActor
{
public:
	class ULuaStateWrapper*                            OwningLuaStateWrapper;                                    // 0x0398(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     OwningObject;                                             // 0x03A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UScriptContextComponent*                     ScriptContextComponent;                                   // 0x03A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ScriptPlugin.LuaContext");
		return pStaticClass;
	}

};


// Class ScriptPlugin.ScriptProfiler
// 0x0020 (0x0048 - 0x0028)
class UScriptProfiler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptProfiler");
		return pStaticClass;
	}

};


// Class ScriptPlugin.LuaStateWrapper
// 0x00D0 (0x00F8 - 0x0028)
class ULuaStateWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0028(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ScriptPlugin.LuaStateWrapper");
		return pStaticClass;
	}

};


// Class ScriptPlugin.ScriptBlueprint
// 0x0020 (0x00F8 - 0x00D8)
class UScriptBlueprint : public UBlueprint
{
public:
	TArray<unsigned char>                              ByteCode;                                                 // 0x00D8(0x0010) (ZeroConstructor)
	struct FString                                     SourceCode;                                               // 0x00E8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptBlueprint");
		return pStaticClass;
	}

};


// Class ScriptPlugin.ScriptBlueprintGeneratedClass
// 0x0030 (0x0308 - 0x02D8)
class UScriptBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	TArray<unsigned char>                              ByteCode;                                                 // 0x02D8(0x0010) (ZeroConstructor)
	struct FString                                     SourceCode;                                               // 0x02E8(0x0010) (ZeroConstructor)
	TArray<class UProperty*>                           ScriptProperties;                                         // 0x02F8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptBlueprintGeneratedClass");
		return pStaticClass;
	}

};


// Class ScriptPlugin.ScriptContext
// 0x0008 (0x0030 - 0x0028)
class UScriptContext : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptContext");
		return pStaticClass;
	}


	void CallScriptFunction(const struct FString& FunctionName);
};


// Class ScriptPlugin.ScriptContextComponent
// 0x0010 (0x0120 - 0x0110)
class UScriptContextComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	class ULuaStateWrapper*                            OwningLuaStateWrapper;                                    // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptContextComponent");
		return pStaticClass;
	}


	void PushScriptArrayIndexData(const struct FString& ParamName, int Index);
	void PushOneScriptPropertyValues(const struct FString& ParamName);
	void PushAllScriptPropertyValues();
	void FetchScriptArrayIndexData(const struct FString& ParamName, int Index);
	void FetchOneScriptPropertyValues(const struct FString& ParamName);
	void FetchAllScriptPropertyValues();
	void CallScriptFunctionWithoutFetch(const struct FString& FunctionName);
	void CallScriptFunction(const struct FString& FunctionName);
};


// Class ScriptPlugin.ScriptHelperNetInterface
// 0x0000 (0x0028 - 0x0028)
class UScriptHelperNetInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptHelperNetInterface");
		return pStaticClass;
	}


	static int SendPacket_LuaState();
	static void Disconnect(TScriptInterface<class UNetInterface>* NetInterface);
	static void Connect(int Timeout, TScriptInterface<class UNetInterface>* NetInterface);
};


// Class ScriptPlugin.ScriptPluginComponent
// 0x0008 (0x0030 - 0x0028)
class UScriptPluginComponent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptPluginComponent");
		return pStaticClass;
	}


	bool CallScriptFunction(const struct FString& FunctionName);
};


// Class ScriptPlugin.ScriptTestActor
// 0x0018 (0x03B0 - 0x0398)
class AScriptTestActor : public AActor
{
public:
	struct FString                                     TestString;                                               // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              TestValue;                                                // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TestBool;                                                 // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptTestActor");
		return pStaticClass;
	}


	float TestFunction(float InValue, float InFactor, bool bMultiply);
};


// Class ScriptPlugin.LuaClassBaseObj
// 0x0000 (0x0398 - 0x0398)
class ALuaClassBaseObj : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ScriptPlugin.LuaClassBaseObj");
		return pStaticClass;
	}


	struct FString ItsATest(const struct FPlayerInfo& Player1, TArray<int> nums, int X, const struct FString& Q, TArray<struct FPlayerInfo> Player2);
	void HandleUIMessage(const struct FString& UIMessage);
	struct FString GetGameStatus();
};


}


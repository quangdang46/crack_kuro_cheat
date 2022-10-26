#include <stdio.h>
#include <iostream>
#include <vector>
#include <dlfcn.h>

#include "SDK.hpp"
using namespace SDK;

class KuroAPI {
    bool (*fn_Initialize)(const char *, TNameEntryArray **names, FUObjectArray **objs);
    AActor *(*fn_getLocalActor)();
    std::vector<AActor *> (*fn_getActors)(bool playerOnly);
public:
    void Setup(void *handle) {
        fn_Initialize = decltype(fn_Initialize)(dlsym(handle, "Initialize"));
        LOGI("fn_Initialize: %p", fn_Initialize);
        fn_getLocalActor = decltype(fn_getLocalActor)(dlsym(handle, "getLocalActor"));
        LOGI("fn_getLocalActor: %p", fn_getLocalActor);
        fn_getActors = decltype(fn_getActors)(dlsym(handle, "getActors"));
        LOGI("fn_getActors: %p", fn_getActors);
    }

    bool Initialize(const char *key, TNameEntryArray **names, FUObjectArray **objs) {
        return fn_Initialize(key, names, objs);
    }

    AActor *getLocalActor() {
        return fn_getLocalActor();
    }

    std::vector<AActor *> getActors(bool playerOnly = false) {
        return fn_getActors(playerOnly);
    }
};

bool InitAPI(KuroAPI **k_api) {
    if (!k_api) {
        return false;
    }
    KuroAPI *api = *k_api;

    void *kuro = dlopen("libkuro.so", RTLD_NOW | RTLD_GLOBAL);
    LOGI("kuro: %p", kuro);
    if (!kuro) {
        return false;
    }

    api->Setup(kuro);
    dlclose(kuro);

    return true;

}


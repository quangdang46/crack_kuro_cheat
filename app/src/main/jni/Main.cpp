#include "Includes.h"
#include "PUBGM.h"

void native_onSendConfig(JNIEnv *env, jobject thiz, jstring s, jstring v) {
    const char *config = env->GetStringUTFChars(s, 0);
    const char *value = env->GetStringUTFChars(v, 0);

    if (!strcmp(config, "INIT_ITEMS_DATA")) {
        itemData = json::parse(value);
    } else if (!strcmp(config, "ESP::ITEMS")) {
        u_long itemId = strtoul(value, 0, 0);
        itemConfig[itemId] = !itemConfig[itemId];
    } else {
        Config[config] = (u_long) strtoul(value, 0, 0);
    }
}

jclass (*orig_FindClass)(JNIEnv *env, const char *name);
int Register1(JNIEnv *env) {
    JNINativeMethod methods[] = {{"onSendConfig", "(Ljava/lang/String;Ljava/lang/String;)V", (void *) native_onSendConfig},
                                 {"onCanvasDraw", "(Landroid/graphics/Canvas;IIF)V",         (void *) native_onCanvasDraw}};


    jclass clazz = env->FindClass("com/pubgm/Floating");
    if (!clazz)
        return -1;

    if (env->RegisterNatives(clazz, methods, sizeof(methods) / sizeof(methods[0])) != 0)
        return -1;

    return 0;
}

int Register2(JNIEnv *env) {
    JNINativeMethod methods[] = {{"Init",  "(Landroid/content/Context;)V",                   (void *) native_Init},
                                 {"Check", "(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;", (void *) native_Check}};

    jclass clazz = env->FindClass("com/pubgm/Launcher");
    if (!clazz)
        return -1;

    if (env->RegisterNatives(clazz, methods, sizeof(methods) / sizeof(methods[0])) != 0)
        return -1;

    return 0;
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
    JNIEnv *env;
    vm->GetEnv((void **) &env, JNI_VERSION_1_6);

    if (Register1(env) != 0)
        return -1;

    if (Register2(env) != 0)
        return -1;

    return JNI_VERSION_1_6;
}
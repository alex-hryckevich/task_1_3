#include <iostream>
#include "MyClass.h"

JNIEXPORT jstring JNICALL Java_com_company_MyClass_stringFromC
(JNIEnv *env, jobject thisObject) {
    std::string hello = "Its working!";
    return env->NewStringUTF(hello.c_str());
}

JNIEXPORT jint JNICALL Java_com_company_MyClass_intFromC
(JNIEnv *env, jobject thisObject) {
    jint val = 999;
    return val;
}

JNIEXPORT jstring JNICALL Java_com_company_MyClass_stringToC
(JNIEnv *env, jobject thisObject, jstring thisStr) {

    const char* sx = (env)->GetStringUTFChars(thisStr, NULL);

    char msg[160] = "PEW PEW PEW";
    jstring result;

    strcat_s(msg, sx);
    (env)->ReleaseStringUTFChars(thisStr, sx);
    puts(msg);
    result = (env)->NewStringUTF(msg);
    return result;
}

JNIEXPORT jint JNICALL Java_com_company_MyClass_intToC
(JNIEnv* env, jobject thisObject, jint thisInt) {
    return thisInt * 1;
}
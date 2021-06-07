//
// Created by HARITHA on 03/06/2021.
//
#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_package_name_Keys_apiKey(JNIEnv *env, jobject object) {
    std::string api_key = "AAAAzILvTf8:APA91bF_olzZkaOaQDthrcvuIzFsiaO2pCLOLGqCNOdTahAQBwxsirSZo7-tsCsEBy5uurRBj5fmofNkcyVS4xOgjFGAyRTkA8xgHYrmdnNTW6DdIG4CdC8oOpN7E6bUFwQ_C_IZyuNJ";
    return env->NewStringUTF(api_key.c_str());
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_apikey_MainActivity_00024Keys_apiKey(JNIEnv *env, jobject thiz) {
    // TODO: implement apiKey()
    //Keys.apiKey()
}
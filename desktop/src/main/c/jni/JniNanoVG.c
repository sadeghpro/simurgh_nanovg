#include <jni.h>
#ifdef __APPLE__
    #define GLFW_INCLUDE_GLCOREARB
#endif
#define NANOVG_GL3_IMPLEMENTATION

#include "../nanovg/src/nanovg.h"
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT void JNICALL Java_dev_simurgh_core_jni_nanovg_NanoVG_nvgBeginFrame(JNIEnv *env, jclass clazz, jlong context, jfloat windowWidth, jfloat windowHeight, jfloat devicePixelRatio) {
    nvgBeginFrame((NVGcontext *) context, windowWidth, windowHeight, devicePixelRatio);
}

JNIEXPORT void JNICALL Java_dev_simurgh_core_jni_nanovg_NanoVG_nvgBeginPath(JNIEnv *env, jclass clazz, jlong context) {
nvgBeginPath((NVGcontext *) context);
}

JNIEXPORT void JNICALL Java_dev_simurgh_core_jni_nanovg_NanoVG_nvgRoundedRect(JNIEnv *env, jclass clazz, jlong context, jfloat x, jfloat y, jfloat w, jfloat h, jfloat radius) {
    nvgRoundedRect((NVGcontext *) context, x, y, w, h, radius);
}

JNIEXPORT void JNICALL Java_dev_simurgh_core_jni_nanovg_NanoVG_nvgRoundedRectVarying(JNIEnv *env, jclass clazz, jlong context, jfloat x, jfloat y, jfloat w, jfloat h,
                                                                           float radiusTopLeft, float radiusTopRight, float radiusBottomRight, float radiusBottomLeft) {
    nvgRoundedRectVarying((NVGcontext *) context, x, y, w, h, radiusTopLeft, radiusTopLeft, radiusBottomRight, radiusBottomLeft);
}

JNIEXPORT void JNICALL Java_dev_simurgh_core_jni_nanovg_NanoVG_nvgFillColor(JNIEnv *env, jclass clazz, jlong context, jfloat r, jfloat g, jfloat b, jfloat a) {
    nvgFillColor((NVGcontext *) context, nvgRGBAf(r, g, b, a));
}

JNIEXPORT void JNICALL Java_dev_simurgh_core_jni_nanovg_NanoVG_nvgFill(JNIEnv *env, jclass clazz, jlong context) {
    nvgFill((NVGcontext *) context);
}

JNIEXPORT void JNICALL Java_dev_simurgh_core_jni_nanovg_NanoVG_nvgEndFrame(JNIEnv *env, jclass clazz, jlong context) {
    nvgEndFrame((NVGcontext *) context);
}

#ifdef __cplusplus
}
#endif

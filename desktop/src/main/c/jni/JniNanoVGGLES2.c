#include <jni.h>

#define NANOVG_GLES2_IMPLEMENTATION

#include <GLES2/gl2.h>
#include "../nanovg/src/nanovg.h"
#include "../nanovg/src/nanovg_gl.h"
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_dev_simurgh_core_jni_nanovg_NanoVGGLES2_nvgCreate(JNIEnv *env, jclass clazz, jint flags) {
    return (jlong)nvgCreateGLES2(flags);
}

#ifdef __cplusplus
}
#endif

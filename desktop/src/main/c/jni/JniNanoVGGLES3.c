#include <jni.h>

#define NANOVG_GLES3_IMPLEMENTATION

#include <OpenGLES/ES3/glext.h>
#include "../nanovg/src/nanovg.h"
#include "../nanovg/src/nanovg_gl.h"
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_dev_simurgh_nanovg_NanoVGGLES3_nvgCreate(JNIEnv *env, jclass clazz, jint flags) {
    return (jlong)nvgCreateGLES3(flags);
}

#ifdef __cplusplus
}
#endif

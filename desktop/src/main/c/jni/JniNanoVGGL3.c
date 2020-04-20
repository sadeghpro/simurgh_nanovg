#include <jni.h>
#ifdef __APPLE__
    #define GLFW_INCLUDE_GLCOREARB
#endif
#define NANOVG_GL3_IMPLEMENTATION

#ifdef NANOVG_GLEW
    #include "glew.h"
//    if(glewInit() != GLEW_OK) {
//		printf("Could not init glew.\n");
//		return -1;
//	}
#endif
#include "glfw3.h"
#include <stdio.h>
#include "../nanovg/src/nanovg.h"
#include "../nanovg/src/nanovg_gl.h"
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_ir_simurgh_nanovg_NanoVGGL3_nvgCreate(JNIEnv *env, jclass clazz, jint flags) {
    printf("test from c");
    return (jlong)nvgCreateGL3(flags);
}

#ifdef __cplusplus
}
#endif

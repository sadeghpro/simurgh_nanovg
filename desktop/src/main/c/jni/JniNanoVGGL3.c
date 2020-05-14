#include <jni.h>
#ifdef __APPLE__
    #define GLFW_INCLUDE_GLCOREARB
#endif
#define NANOVG_GL3_IMPLEMENTATION

#ifdef NANOVG_GLEW
    #include "glew.h"
#endif
#include "glfw3.h"
#include <stdio.h>
#include "../nanovg/src/nanovg.h"
#include "../nanovg/src/nanovg_gl.h"
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_dev_simurgh_nanovg_NanoVGGL3_nvgCreate(JNIEnv *env, jclass clazz, jint flags) {
#ifdef NANOVG_GLEW
    glewExperimental = GL_TRUE;
	if(glewInit() != GLEW_OK) {
		printf("Could not init glew.\n");
		return -1;
	}
	// GLEW generates GL error because it calls glGetString(GL_EXTENSIONS), we'll consume it here.
	glGetError();
#endif
    return (jlong)nvgCreateGL3(flags);
}

#ifdef __cplusplus
}
#endif

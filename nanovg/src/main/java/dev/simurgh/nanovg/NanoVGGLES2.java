package dev.simurgh.nanovg;

public class NanoVGGLES2 {

    public static final int
            NVG_ANTIALIAS       = 1<<0,
            NVG_STENCIL_STROKES = 1<<1,
            NVG_DEBUG           = 1<<2;

    public static native long nvgCreate(int flag);
}

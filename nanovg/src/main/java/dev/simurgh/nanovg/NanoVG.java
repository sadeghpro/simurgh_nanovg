package dev.simurgh.nanovg;


public class NanoVG {

    public native static void nvgBeginFrame(long context, float windowWidth, float windowHeight, float devicePixelRatio);
    public native static void nvgBeginPath(long context);
    public native static void nvgRoundedRectVarying(long context, float x, float y, float w, float h, float radiusTopLeft, float radiusTopRight, float radiusBottomRight, float radiusBottomLeft);
    public native static void nvgRoundedRect(long context, float x, float y, float w, float h, float radius);
    public native static void nvgFillColor(long context, float r, float g, float b, float a);
    public static void nvgFillColor(long context, NVGColor color) {
        nvgFillColor(context, color.getR(), color.getG(), color.getB(), color.getA());
    }
    public native static void nvgFill(long context);
    public native static void nvgEndFrame(long context);
}

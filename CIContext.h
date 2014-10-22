@interface CIContext : NSObject
{
	pointer _priv;
}

+ _initWithInternalRepresentation:
+ _gpuContextCheck
+ _colorspace
+ initWithEAGLContext:
+ initWithEAGLContext:options:
+ render:toCVPixelBuffer:bounds:colorSpace:
+ render:toIOSurface:bounds:colorSpace:
+ render:toBitmap:rowBytes:bounds:format:colorSpace:
+ _isEAGLBackedContext
+ drawImage:inRect:fromRect:
+ createCGImage:fromRect:format:colorSpace:
+ render:toCVPixelBuffer:
+ _insertEventMarker:
+ drawImage:atPoint:fromRect:
+ render:toTexture:bounds:colorSpace:
+ createIOSurface:
+ createCGImage:fromRect:format:
+ maximumInputImageSize
+ maximumOutputImageSize
+ inputImageMaximumSize
+ outputImageMaximumSize
+ dealloc
+ init
+ createCGImage:fromRect:
+ lock
+ unlock
+ createIOSurface:fromRect:
- _initWithInternalRepresentation:
- _gpuContextCheck
- _colorspace
- initWithEAGLContext:
- initWithEAGLContext:options:
- render:toCVPixelBuffer:bounds:colorSpace:
- render:toIOSurface:bounds:colorSpace:
- render:toBitmap:rowBytes:bounds:format:colorSpace:
- _isEAGLBackedContext
- drawImage:inRect:fromRect:
- createCGImage:fromRect:format:colorSpace:
- render:toCVPixelBuffer:
- _insertEventMarker:
- drawImage:atPoint:fromRect:
- render:toTexture:bounds:colorSpace:
- createIOSurface:
- createCGImage:fromRect:format:
- maximumInputImageSize
- maximumOutputImageSize
- inputImageMaximumSize
- outputImageMaximumSize
- dealloc
- init
- createCGImage:fromRect:
- lock
- unlock
- createIOSurface:fromRect:
@end
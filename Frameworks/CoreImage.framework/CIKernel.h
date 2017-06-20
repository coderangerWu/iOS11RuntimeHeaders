/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIKernel : NSObject {
    void * _priv;
}

@property (readonly) NSString *name;
@property (nonatomic) bool perservesAlpha;

+ (id)betterString:(id)arg1;
+ (id)colorMatrixBiasKernel;
+ (id)hashForString:(id)arg1;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 error:(id*)arg3;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputPixelFormat:(int)arg3 error:(id*)arg4;
+ (id)kernelWithString:(id)arg1;
+ (id)kernelsWithString:(id)arg1;
+ (id)kernelsWithString:(id)arg1 messageLog:(id)arg2;
+ (id)modifiedKernelStringForFosl:(id)arg1;

- (SEL)ROISelector;
- (id)_initWithDict:(id)arg1;
- (id)_initWithFirstKernelFromString:(id)arg1 withCruftCompatibility:(bool)arg2;
- (id)_initWithInternalRepresentation:(void*)arg1;
- (void*)_internalRepresentation;
- (bool)_isValidOutputPixelFormat:(int)arg1;
- (int)_outputFormatUsingDictionary:(id)arg1 andKernel:(struct Kernel { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; char *x3; char *x4; bool x5; struct SerialIntArray {} *x6; struct SerialStringArray {} *x7; struct __CFString {} *x8; bool x9; bool x10; bool x11; int x12; }*)arg2;
- (int)_outputPixelFormatFromExplicitAttributes:(id)arg1;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 arguments:(id)arg3;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 arguments:(id)arg3 options:(id)arg4;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)name;
- (id)parameters;
- (bool)perservesAlpha;
- (void)setPerservesAlpha:(bool)arg1;
- (void)setROISelector:(SEL)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBlendModeFilter : CIFilter {
    CIImage * inputBackgroundImage;
    CIImage * inputImage;
}

@property (nonatomic, retain) CIImage *inputBackgroundImage;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_extent;
- (id)_kernel;
- (id)inputBackgroundImage;
- (id)inputImage;
- (id)outputImage;
- (void)setInputBackgroundImage:(id)arg1;
- (void)setInputImage:(id)arg1;

@end

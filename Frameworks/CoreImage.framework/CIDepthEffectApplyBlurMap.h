/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDepthEffectApplyBlurMap : CIFilter {
    CIImage * inputBlurMap;
    AVCameraCalibrationData * inputCalibrationData;
    CIImage * inputImage;
    NSNumber * inputLumaNoiseScale;
    NSNumber * inputScale;
    NSDictionary * inputTuningParameters;
}

@property (retain) CIImage *inputBlurMap;
@property (nonatomic, retain) AVCameraCalibrationData *inputCalibrationData;
@property (retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputLumaNoiseScale;
@property (nonatomic, retain) NSNumber *inputScale;
@property (nonatomic, retain) NSDictionary *inputTuningParameters;

+ (id)customAttributes;

- (id)inputBlurMap;
- (id)inputCalibrationData;
- (id)inputImage;
- (id)inputLumaNoiseScale;
- (id)inputScale;
- (id)inputTuningParameters;
- (id)outputImage;
- (void)setInputBlurMap:(id)arg1;
- (void)setInputCalibrationData:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLumaNoiseScale:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end
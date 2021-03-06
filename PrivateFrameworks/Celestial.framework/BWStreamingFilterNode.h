/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStreamingFilterNode : BWNode <BWDetectedFacesFilterDelegate, BWRendererResourceProvider> {
    bool  _attachesInputPixelBufferAfterRendering;
    BWFigVideoCaptureDevice * _captureDevice;
    NSObject<OS_dispatch_queue> * _captureDeviceQueue;
    BWColorLookupCache * _colorLookupCache;
    BWRenderListAnimator * _currentAnimator;
    BWRenderList * _currentRenderList;
    bool  _depthDataDeliveryEnabled;
    int  _frameratesByThermalPressureLevel;
    float  _lastDeviceFramerate;
    bool  _metadataProcessingEnabled;
    BWRenderListAnimator * _nextAnimator;
    BWRenderList * _nextRenderList;
    bool  _preparedToBecomeLive;
    NSObject<OS_dispatch_queue> * _processorPreparationQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _renderListLock;
    BWRenderListProcessor * _renderListProcessor;
    int  _thermalPressureNotificationToken;
    bool  _thermalThrottlingEnabled;
    BWNodeOutput * _videoOutputProvidingRenderingPool;
}

@property (nonatomic) bool attachesInputPixelBufferAfterRendering;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDepthDataDeliveryEnabled, nonatomic) bool depthDataDeliveryEnabled;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMetadataProcessingEnabled, nonatomic) bool metadataProcessingEnabled;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)_registerForThermalNotificationsAndSetInitialDeviceFramerate;
- (void)_setDeviceFramerate:(int)arg1;
- (void)_updateThermalPressureLevelAndSetDeviceFramerate;
- (bool)attachesInputPixelBufferAfterRendering;
- (void)changeToFilters:(id)arg1 animated:(bool)arg2;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)filterDetectedFacesInSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)initWithCaptureDevice:(id)arg1 usingDepth:(bool)arg2 videoOutputProvidingRenderingPool:(id)arg3;
- (bool)isDepthDataDeliveryEnabled;
- (bool)isMetadataProcessingEnabled;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)provideColorLookupCache;
- (id)provideCoreImageFilterRenderer;
- (id)provideMetalFilterRenderer;
- (id)provideStillImageMetalBlurMapRenderer;
- (id)provideStillImageMetalSDOFRenderer;
- (id)provideStreamingCVAFilterRenderer;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAttachesInputPixelBufferAfterRendering:(bool)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setMetadataProcessingEnabled:(bool)arg1;
- (id)videoInput;
- (id)videoOutput;

@end

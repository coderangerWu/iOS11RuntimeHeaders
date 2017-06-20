/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVideoSDOFNode : BWNode <BWDetectedFacesFilterDelegate> {
    struct __CVBuffer { } * _alphaBuffer;
    bool  _alwaysPreviewSDOFEffect;
    float  _deltaShift;
    NSMutableDictionary * _detectedFacesVisibility;
    BWFigVideoCaptureDevice * _device;
    NSObject<OS_dispatch_queue> * _deviceQueue;
    struct opaqueCMFormatDescription { } * _formatDescription;
    int  _frameratesByThermalPressureLevel;
    int  _framesSinceLastStableFocus;
    struct _OpaqueCVAFusion { } * _fusionRef;
    float  _lastDeviceFramerate;
    BWRamp * _lensApertureRamp;
    struct { struct __CVBuffer {} *x1; unsigned int x2; bool x3; } * _mostRecentRelativeShiftBuffer;
    float  _rawFocusShift;
    bool  _receivedFirstFrameWithDepth;
    struct { 
        struct __CVBuffer {} *buffer; 
        unsigned int readCount; 
        bool lockedForWriting; 
    }  _relativeShiftBuffers;
    int  _relativeShiftBuffersLock;
    NSObject<OS_dispatch_group> * _renderingGroup;
    bool  _sdofEffectEnabled;
    BWPixelBufferPool * _sdofOutputPool;
    bool  _setupDone;
    unsigned long long  _shiftHeight;
    unsigned long long  _shiftWidth;
    int  _thermalPressureNotificationToken;
    bool  _thermalThrottlingEnabled;
    struct _OpaqueCVAVideoMatting { } * _videoMattingRef;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BWPixelBufferPool *sdofOutputPool;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)_filterFacesVisibility:(id)arg1;
- (struct { struct __CVBuffer {} *x1; unsigned int x2; bool x3; }*)_lockRelativeShiftBufferForWriting:(bool)arg1;
- (void)_registerForThermalNotificationsAndSetInitialDeviceFramerate;
- (void)_setDeviceFramerate:(int)arg1;
- (int)_setupCVA;
- (void)_unlockRelativeShiftBuffer:(struct { struct __CVBuffer {} *x1; unsigned int x2; bool x3; }*)arg1 updated:(bool)arg2;
- (void)_updateThermalPressureLevelAndSetDeviceFramerate;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)filterDetectedFacesInSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)initWithCaptureDevice:(id)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)sdofOutputPool;
- (void)setSdofOutputPool:(id)arg1;

@end
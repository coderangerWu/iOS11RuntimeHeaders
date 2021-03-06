/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFigVideoCaptureDevice : BWCaptureDevice <BWZoomCompletionDelegate> {
    float  _ISO;
    NSArray * _activePortTypes;
    int  _aeFrameWaitCount;
    int  _aeRequestCount;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _aeRequestTime;
    bool  _aeStable;
    bool  _allowAEStableNotifications;
    bool  _allowAWBStableNotifications;
    bool  _attachMetadataFlatDictionary;
    NSDictionary * _attributes;
    float  _autoFlashNormalizedSNRThreshold;
    int  _autoImageControlMode;
    bool  _autoTorchEnabled;
    bool  _autoTorchStatsCheckedForVideoRecording;
    NSMutableDictionary * _autofocusCachedPropertiesDictionary;
    struct OpaqueFigSampleBufferProcessor { } * _autofocusProcessor;
    NSObject<OS_dispatch_queue> * _autofocusProcessorQueue;
    struct OpaqueFigSimpleMutex { } * _autofocusStatusMutex;
    bool  _awbStable;
    bool  _bravoDualPhotoDeliveryEnabled;
    BWBravoStreamSelector * _bravoStreamSelector;
    BWFigVideoCaptureStream * _bravoTelephotoCaptureStream;
    NSString * _bravoTelephotoNonLocalizedName;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedExposureRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedFocusRect;
    NSMutableDictionary * _cameraInfoByPortType;
    int  _cameraModeForGyroCalibration;
    BWFigVideoCaptureStream * _captureStream;
    NSArray * _captureStreams;
    int  _clientPID;
    struct OpaqueCMClock { } * _clock;
    int (* _createAutofocusSampleBufferProcessorFunction;
    int  _currentBiasedExposureCompletedID;
    struct { 
        double integrationTime; 
        float normalizedSNR; 
        float baseISO; 
        double exposureBias; 
        float gain; 
        unsigned int conversionGain; 
        unsigned int readNoise_1x; 
        unsigned int readNoise_8x; 
        unsigned int aeAvg; 
        unsigned char aeLimitsReached; 
        unsigned char aeStable; 
        int afStatus; 
        int focusingMethod; 
        unsigned int motionDataStatus; 
        float synchronizedStreamsTelephotoGain; 
        unsigned char synchronizedStreamsTelephotoAEStable; 
        double synchronizedStreamsTelephotoIntegrationTime; 
        int synchronizedStreamsTelephotoAFStatus; 
        int synchronizedStreamsTelephotoFocusingMethod; 
        int synchronizedStreamsTelephotoAFStationaryCount; 
        float synchronizedStreamsTelephotoFocusDistance; 
        float synchronizedStreamsTelephotoLensMakersFocusDistance; 
        int synchronizedStreamsTelephotoGravityAdjustedFocusPosition; 
        int synchronizedStreamsTelephotoLuxLevel; 
        int synchronizedStreamsWideFocusPosition; 
        float synchronizedStreamsWideFocusDistance; 
        float synchronizedStreamsWideLensMakersFocusDistance; 
        int synchronizedStreamsWideAFStatus; 
        int synchronizedStreamsWideAFStationaryCount; 
        int synchronizedStreamsWideLuxLevel; 
        int synchronizedStreamsWideGravityAdjustedFocusPosition; 
        long long frameCount; 
    }  _currentFrameStatistics;
    int  _currentImageControlMode;
    int  _currentManualExposureCompletedID;
    int  _currentManualFocusCompletedID;
    int  _currentManualWhiteBalanceCompletedID;
    BWFigVideoCaptureStream * _currentMasterCaptureStream;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _currentMasterCaptureStreamLock;
    bool  _depthDataDeliveryEnabled;
    float  _depthMaxFrameRate;
    struct OpaqueFigCaptureDevice { } * _device;
    BWDeviceMotionActivityDetector * _deviceMotionActivityDetector;
    int  _deviceReleaseBehavior;
    struct { 
        float redGain; 
        float greenGain; 
        float blueGain; 
    }  _deviceWhiteBalanceGains;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _exposureDuration;
    float  _exposureTargetBias;
    float  _exposureTargetOffset;
    bool  _feature1Enabled;
    struct OpaqueFigSampleBufferProcessor { } * _feature1Processor;
    NSObject<OS_dispatch_queue> * _feature1ProcessorQueue;
    int  _flashModeForSceneMonitoring;
    bool  _flashScene;
    NSObject<OS_dispatch_queue> * _focusAndExposureUpdateQueue;
    bool  _focusPixelsEnabled;
    bool  _forcePostingForSceneDetectionNotifications;
    int  _frameStatisticsLock;
    struct { 
        float redGain; 
        float greenGain; 
        float blueGain; 
    }  _grayWorldWhiteBalanceGains;
    bool  _hasFlash;
    bool  _hasNightMode;
    int  _hdrModeForSceneMonitoring;
    bool  _hdrScene;
    struct { 
        int width; 
        int height; 
    }  _ispOutputDimensions;
    struct { 
        int width; 
        int height; 
    }  _lastISPCropDimensions;
    float  _lastRequestedZoomFactor;
    float  _lensPosition;
    bool  _lowLightBoostActive;
    int  _lowLightBoostLock;
    bool  _lowLightBoostSupportedForFormat;
    struct OpaqueFigSimpleMutex { } * _manualPropertyMutex;
    struct { 
        int width; 
        int height; 
    }  _maxISPCropDimensions;
    float  _maxISPZoomFactor;
    int  _maxSkippedFramesForStillImageCaptureRetry;
    float  _maxTorchLevel;
    struct OpaqueFigFlatDictionaryKeySpec { } * _metadataKeySpec;
    NSDictionary * _moduleInfoByPortType;
    float  _newISPZoomFactor;
    NSString * _nonLocalizedName;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    int  _numberOfCompletedStillCaptures;
    NSMutableDictionary * _observedProperties;
    struct CGSize { 
        double width; 
        double height; 
    }  _overscanPercentage;
    BWRamp * _parallaxMitigationRamp;
    int  _parallaxMitigationRampDuration;
    int  _parallaxMitigationRampShape;
    float  _parallaxMitigationStrength;
    int  _parallaxMitigationStrengthLock;
    struct __CFString { } * _portType;
    int  _position;
    id /* block */  _prepareToCaptureStillImageNowCompletionHandler;
    bool  _quadraHighResStillImageCaptureEnabled;
    float  _quadraLowLightResampledNormalizedSNRThreshold;
    float  _rampDefaultBravoSnapDistanceFraction;
    bool  _retryCaptureStillImageNow;
    bool  _sdofAEStableAfterStartStreaming;
    float  _sdofBackgroundShiftSumFiltered;
    int  _sdofEffectStatus;
    bool  _sdofFocusAdjusting;
    bool  _sdofFocusLocked;
    bool  _sdofFocusStableAfterStartStreaming;
    float  _sdofInvalidShiftRatioFiltered;
    int  _sdofLastFocusingMethod;
    int  _sdofLock;
    int  _sdofNumFramesSinceAEBecameStable;
    int  _sdofNumFramesSinceFocusBecameStable;
    int  _sdofNumFramesSinceFocusLocked;
    bool  _sdofOneShotFocusInProgress;
    bool  _sdofSceneIsTooDark;
    bool  _sdofSceneMonitoringEnabled;
    bool  _sdofSceneTooDarkExposureThresholdReached;
    float  _sdofSceneTooDarkGainHysteresisLag;
    float  _sdofSceneTooDarkGainThreshold;
    float  _sdofSceneTooDarkInvalidShiftRatioHysteresisLag;
    float  _sdofSceneTooDarkInvalidShiftRatioThreshold;
    bool  _sdofSceneTooDarkMonitoringEnabled;
    bool  _sdofSubjectIsTooClose;
    int  _sdofSubjectTooCloseLastWideFocusPosition;
    bool  _sdofSubjectTooCloseMonitoringEnabled;
    float  _sdofSubjectTooCloseWideFocusDistanceHysteresisLag;
    float  _sdofSubjectTooCloseWideFocusDistanceThreshold;
    int  _sdofSubjectTooCloseWideFocusPositionHysteresisLag;
    int  _sdofSubjectTooCloseWideFocusPositionThreshold;
    float  _sdofSubjectTooFarBackgroundShiftRollOffInvalidShiftRatioEnd;
    float  _sdofSubjectTooFarBackgroundShiftRollOffInvalidShiftRatioStart;
    bool  _sdofSubjectTooFarBackgroundShiftSumIsTooLow;
    float  _sdofSubjectTooFarBackgroundShiftSumTooLowHysteresisLag;
    float  _sdofSubjectTooFarBackgroundShiftSumTooLowThreshold;
    int  _sdofSubjectTooFarBackgroundShiftTooLowNumFrames;
    bool  _sdofSubjectTooFarDistanceThresholdReached;
    float  _sdofSubjectTooFarFocusDistanceHysteresisLag;
    float  _sdofSubjectTooFarFocusDistanceThreshold;
    int  _sdofSubjectTooFarFocusPositionHysteresisLag;
    int  _sdofSubjectTooFarFocusPositionInfinityThreshold;
    int  _sdofSubjectTooFarFocusPositionThreshold;
    int  _sdofSubjectTooFarLastTeleFocusPosition;
    bool  _sdofSubjectTooFarMonitoringEnabled;
    bool  _sdofSubjectTooFarUseTeleForFocusDistance;
    bool  _sdofUseFocusPositionInsteadOfFocusDistance;
    bool  _sdofUsingMasterSlaveAF;
    NSDictionary * _sensorIDDictionaryByPortType;
    bool  _shallowDepthOfFieldEffectEnabled;
    int  _sisModeForSceneMonitoring;
    bool  _sisScene;
    int  _skippedFramesCountForStillImageCaptureRetry;
    bool  _stereoFusionEnabled;
    bool  _stillImageCaptureEnabled;
    bool  _stillImageCaptureNowAfterAutofocusTimeoutSupported;
    NSDictionary * _stillImageCaptureNowOptions;
    BWStillImageCaptureSettings * _stillImageCaptureSettings;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stillImageCaptureStateLock;
    FigStateMachine * _stillImageCaptureStateMachine;
    NSDictionary * _stillImageCaptureStreamProperties;
    int  _stillImageContrastBasedAutofocusTimeout;
    NSObject<OS_dispatch_queue> * _stillImageDispatchQueue;
    bool  _stillImageGNRHDREnabled;
    bool  _stillImageISPChromaNoiseReductionEnabled;
    bool  _stillImageISPMultiBandNoiseReductionEnabled;
    int  _stillImagePhaseDetectionAutofocusTimeout;
    double  _stillImageStabilizationIntegrationTimeThreshold;
    struct OpaqueFigCaptureStream { } * _stream;
    BWFigVideoCaptureStream * _streamVolatility;
    NSDictionary * _supportedProperties;
    bool  _supportsHDR;
    bool  _supportsSIS;
    BWFigVideoCaptureStream * _synchronizationSlaveCaptureStream;
    bool  _synchronizationSlaveHasBeenStarted;
    bool  _synchronizationSourceHasBeenStarted;
    int  _synchronizedStreamsElevatedMasterToSlaveFrameRateRatio;
    int  _synchronizedStreamsElevatedSlaveFrameRate;
    float  _synchronizedStreamsElevatedSlaveFrameRateLowerBoundZoomFactor;
    float  _synchronizedStreamsElevatedSlaveFrameRateUpperBoundZoomFactor;
    int  _synchronizedStreamsNominalMasterToSlaveFrameRateRatio;
    int  _synchronizedStreamsNominalSlaveFrameRate;
    float  _synchronizedStreamsOISSISStereoFusionTeleMinGain;
    double  _synchronizedStreamsOISSISStereoFusionTeleMinIntegrationTime;
    NSObject<OS_dispatch_semaphore> * _synchronizedStreamsStartStopSemaphore;
    float  _synchronizedStreamsStereoFusionLowerBoundZoomFactor;
    float  _synchronizedStreamsStereoFusionUpperBoundZoomFactor;
    double  _synchronizedStreamsStillImageStabilizationTeleIntegrationTimeThreshold;
    bool  _synchronizedStreamsSwitchOverInProgress;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _synchronizedStreamsSwitchOverLock;
    bool  _synchronizedStreamsSwitchOverLockCameraWhenFocusScanCompletes;
    int  _synchronizedStreamsSwitchOverNewCameraSelectionBehavior;
    float  _synchronizedStreamsTeleMaxAEGain;
    int  _synchronizedStreamsTeleToWideFocusPosition;
    bool  _torchActive;
    float  _torchLevel;
    struct OpaqueFigSimpleMutex { } * _torchLock;
    bool  _useAutoImageControlMode;
    bool  _usingMultipleStreamOutputs;
    NSMutableDictionary * _whiteBalanceGains;
    NSMutableArray * _whiteBalanceGainsOrderedKeys;
    NSObject<OS_dispatch_queue> * _whiteBalanceGainsQueue;
    int  _whiteBalanceModeForExif;
    BWZoomCommandHandler * _zoomCommandHandler;
    int  _zoomFactorLock;
    NSObject<OS_dispatch_queue> * _zoomFactorUpdateQueue;
}

@property (readonly) NSArray *activePortTypes;
@property (readonly) NSDictionary *cameraInfoByPortTypeForSBPs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceReleaseBehavior;
@property (readonly) unsigned long long hash;
@property (readonly) NSDictionary *moduleInfoByPortType;
@property (readonly) NSDictionary *sensorIDDictionaryByPortType;
@property (readonly) Class superclass;

+ (struct __CFString { }*)_autofocusProcessorImageControlModeFromImageControlMode:(int)arg1;
+ (void)initialize;
+ (void)unregisterCallbacksForClient:(int)arg1;

- (float)ISO;
- (void)_addAutofocusAndDiagnosticMetadata:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_addCoreMediaMetadataAttachmentsToStillImageSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 fromTimeMachine:(bool)arg2;
- (void)_addExifWhiteBalanceMetadata:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_addFeature1ToMetadata:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_addLensMakersFocusDistanceMetadata:(struct opaqueCMSampleBuffer { }*)arg1 captureStream:(id)arg2;
- (void)_addStillImageSettingsToStillImageSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)_attachMetadataFlatDictionaryToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (struct OpaqueFigSampleBufferProcessor { }*)_autofocusProcessor;
- (int)_bravoCameraForOISOrSISCaptureType:(int)arg1 stereoFusionMode:(int)arg2 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; unsigned char x16; double x17; int x18; int x19; int x20; float x21; float x22; int x23; int x24; int x25; float x26; float x27; int x28; int x29; int x30; int x31; long long x32; }*)arg3 zoomFactor:(float)arg4 stereoFusionLowerBoundZoomFactor:(float)arg5 stereoFusionUpperBoundZoomFactor:(float)arg6;
- (int)_captureStillImageNowOnStreamWithOptions:(id)arg1 captureStreamProperties:(id)arg2;
- (void)_captureStillImageNowWithSettings:(id)arg1;
- (void)_convertNoiseReductionAndSharpeningConfiguration:(id)arg1 toStillImageCaptureOptions:(id)arg2 captureStreamSettings:(id)arg3 forMasterStream:(bool)arg4;
- (int)_convertStillImageCaptureSettings:(id)arg1 masterCaptureStreamPortType:(id)arg2 synchronizedStreamsEnabled:(bool)arg3 toStillImageCaptureNowOptions:(id*)arg4 captureStreamPropertyValues:(id*)arg5;
- (int)_copyAutofocusProcessorProperty:(struct __CFString { }*)arg1 propertyValueOut:(void*)arg2;
- (int)_copyAutofocusProcessorPropertyInternal:(struct __CFString { }*)arg1 propertyValueOut:(void*)arg2;
- (int)_currentStillImageSceneTypeForcingFlashSceneDetectionEnabled:(bool)arg1 forcingHDRSceneDetectionEnabled:(bool)arg2 forcingSISSceneDetectionEnabled:(bool)arg3;
- (void)_deviceDidStopStreaming;
- (void)_deviceWillStartStreaming;
- (id)_initWithFigCaptureDeviceRef:(struct OpaqueFigCaptureDevice { }*)arg1 attributes:(id)arg2 synchronizedStreamsAttributes:(id)arg3 forPID:(int)arg4 createAutofocusSampleBufferProcessorFunction:(int (*)arg5 cameraParameters:(id)arg6;
- (float)_ispAppliedZoomFromSampleBufferMetadataDictionary:(id)arg1;
- (void)_postManualControlRequestCompletedWithName:(id)arg1 requestID:(int)arg2 timeDictionary:(id)arg3 additionalPayloadItems:(id)arg4;
- (void)_postNotificationWithName:(id)arg1 payloadNewPropertyValue:(id)arg2;
- (void)_postNotificationWithPayload:(id)arg1 notificationPayload:(id)arg2;
- (void)_resetStillImageCaptureRequestState;
- (void)_serviceAutoTorchNotification:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; unsigned char x16; double x17; int x18; int x19; int x20; float x21; float x22; int x23; int x24; int x25; float x26; float x27; int x28; int x29; int x30; int x31; long long x32; }*)arg1;
- (void)_serviceBravoStreamSelectionWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 fromCaptureStream:(id)arg2 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; unsigned char x16; double x17; int x18; int x19; int x20; float x21; float x22; int x23; int x24; int x25; float x26; float x27; int x28; int x29; int x30; int x31; long long x32; }*)arg3;
- (void)_serviceCompletedRequestNotifications:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_serviceLowLightBoostActiveNotification:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_servicePropertyChangeNotifications:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_serviceRetryStillImageCaptureUsingFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; unsigned char x16; double x17; int x18; int x19; int x20; float x21; float x22; int x23; int x24; int x25; float x26; float x27; int x28; int x29; int x30; int x31; long long x32; }*)arg1;
- (void)_serviceSDOFSceneMonitoringWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; unsigned char x16; double x17; int x18; int x19; int x20; float x21; float x22; int x23; int x24; int x25; float x26; float x27; int x28; int x29; int x30; int x31; long long x32; }*)arg2;
- (void)_serviceZoomForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 updateISPZoom:(bool)arg2;
- (int)_setAutofocusProcessorImageControlModeProperty:(int)arg1;
- (int)_setAutofocusProcessorProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (int)_setAutofocusProcessorPropertyInternal:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (int)_setExposureModeAutoWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setISPZoomFactorSynchronously:(float)arg1;
- (void)_setNewISPZoomFactorOnStream;
- (int)_setupAutofocusSampleBufferProcessor;
- (int)_setupFeature1SampleBufferProcessor;
- (void)_setupStillImageCaptureStateMachine;
- (bool)_shouldUseSphereForStillImageCaptureTakingIntoAccountExposureDuration:(bool)arg1 deviceMotionActivity:(bool)arg2;
- (unsigned int)_stillImageCaptureInProgressSubstateForFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; unsigned char x16; double x17; int x18; int x19; int x20; float x21; float x22; int x23; int x24; int x25; float x26; float x27; int x28; int x29; int x30; int x31; long long x32; }*)arg1 captureType:(int)arg2 masterCaptureStreamPortType:(id)arg3 stereoFusionCapture:(bool)arg4;
- (void)_stillImageCaptureStateMachineDidTransitionToInProgress;
- (id)_stillImageDispatchQueue;
- (int)_stillImageSceneTypeForFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; unsigned char x16; double x17; int x18; int x19; int x20; float x21; float x22; int x23; int x24; int x25; float x26; float x27; int x28; int x29; int x30; int x31; long long x32; }*)arg1 flashMode:(int)arg2 hdrMode:(int)arg3 sisMode:(int)arg4;
- (void)_teardownAutoFocusSampleBufferProcessor;
- (void)_teardownFeature1SampleBufferProcessor;
- (void)_terminateCaptureAndEmitStillImageCaptureError:(int)arg1 stillImageCaptureNowOptions:(id)arg2 stillImageCaptureStreamProperties:(id)arg3;
- (int)_updateAutoFocusRectIfNeededForZoomFactor:(float)arg1;
- (void)_updateBravoStreamSelectionBehaviorForMasterStream:(id)arg1 forceNotification:(bool)arg2;
- (void)_updateBravoSwitchOverStateForAutofocusProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (int)_updateExposureRectIfNeededForZoomFactor:(float)arg1;
- (void)_updateExposureStateForAutofocusProperty:(struct __CFString { }*)arg1;
- (void)_updateFaceDetectionStateForAutofocusProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (void)_updateFrameRateForSlaveCaptureStream:(id)arg1 zoomFactor:(float)arg2;
- (void)_updateISPCropForZoomFactor:(float)arg1;
- (void)_updateImageControlModeStateForAutofocusProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (void)_updateSDOFEffectStatus:(int)arg1;
- (void)_updateSDOFFocusStateForAutofocusProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (void)_updateWhiteBalanceStateForAutofocusProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (void)_updateZoomCapabilitiesForActiveFormatIndex:(long long)arg1;
- (id)activePortTypes;
- (int)autoImageControlMode;
- (bool)bravoDualPhotoDeliveryEnabled;
- (int)bravoStreamSelectionBehavior;
- (id)bravoTelephotoCaptureStream;
- (id)cameraInfoByPortTypeForSBPs;
- (int)cameraModeForGyroCalibration;
- (int)captureStillImageNowWithSettings:(id)arg1;
- (id)captureStream;
- (void)captureStream:(id)arg1 willDiscardVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)captureStream:(id)arg1 willEmitStillImageSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromTimeMachine:(bool)arg3;
- (void)captureStream:(id)arg1 willEmitVideoPreviewSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)captureStream:(id)arg1 willEmitVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)captureStreamDidChangeActiveFormatIndex:(id)arg1;
- (void)captureStreamDidCompleteStillImageCapture:(id)arg1;
- (void)captureStreamDidStartStreaming:(id)arg1;
- (void)captureStreamDidStopStreaming:(id)arg1;
- (void)captureStreamWillStartStreaming:(id)arg1;
- (void)captureStreamWillStopStreaming:(id)arg1;
- (id)captureStreams;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (bool)depthDataDeliveryEnabled;
- (float)depthMaxFrameRate;
- (int)deviceReleaseBehavior;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGains;
- (void)disposeFigCaptureDevice;
- (void)drainNotifications;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;
- (float)exposureTargetBias;
- (float)exposureTargetOffset;
- (bool)focusPixelsEnabled;
- (id)fvcd_streamObservation;
- (void)getCurrentVideoFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; unsigned char x16; double x17; int x18; int x19; int x20; float x21; float x22; int x23; int x24; int x25; float x26; float x27; int x28; int x29; int x30; int x31; long long x32; }*)arg1;
- (struct { float x1; float x2; float x3; })grayWorldDeviceWhiteBalanceGains;
- (id)initWithAttributes:(id)arg1 synchronizedStreamsAttributes:(id)arg2 forPID:(int)arg3 clientIDOut:(int*)arg4 deviceAvailabilityChangedHandler:(id /* block */)arg5;
- (bool)isFlashScene;
- (bool)isHDRScene;
- (bool)isPropertyObserved:(id)arg1;
- (bool)isSISScene;
- (bool)isStillImageISPChromaNoiseReductionEnabled;
- (bool)isStillImageISPMultiBandNoiseReductionEnabled;
- (float)lensPosition;
- (id)masterCaptureStream;
- (float)maximumAllowedFrameRate;
- (float)maximumFrameRate;
- (float)minimumAllowedFrameRate;
- (float)minimumFrameRate;
- (id)moduleInfoByPortType;
- (struct OpaqueFigCaptureISPProcessingSession { }*)newISPProcessingSessionWithType:(int)arg1;
- (float)parallaxMitigationStrength;
- (int)position;
- (void)prepareToCaptureStillImageNow:(id /* block */)arg1;
- (bool)quadraHighResStillImageCaptureEnabled;
- (void)rampToVideoZoomFactor:(float)arg1 withRampType:(int)arg2 rate:(float)arg3 duration:(double)arg4 commandID:(int)arg5;
- (void)registerForAEMatrixMetadata;
- (int)resolveStillImageCaptureTypeFromStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; unsigned char x16; double x17; int x18; int x19; int x20; float x21; float x22; int x23; int x24; int x25; float x26; float x27; int x28; int x29; int x30; int x31; long long x32; }*)arg1 flashMode:(int)arg2 hdrMode:(int)arg3 sisMode:(int)arg4 stereoFusionMode:(int)arg5 depthDataDeliveryEnabled:(bool)arg6 bravoDualPhotoDeliveryEnabled:(bool)arg7 clientBracketMode:(int)arg8 forSceneMonitoring:(bool)arg9 captureFlags:(unsigned long long*)arg10;
- (id)sensorIDDictionaryByPortType;
- (int)setAlternateOutputSizeAndCrop:(id)arg1;
- (bool)setAutoFlashEnabled:(bool)arg1 error:(id*)arg2;
- (void)setAutoFocusSensorCalibrationData:(id)arg1;
- (int)setAutoImageControlMode:(int)arg1;
- (int)setAutomaticallyAdjustsImageControlMode:(bool)arg1;
- (int)setAutomaticallyAdjustsTorch:(bool)arg1;
- (void)setBravoDualPhotoDeliveryEnabled:(bool)arg1;
- (void)setBravoStreamSelectionBehavior:(int)arg1;
- (void)setCameraModeForGyroCalibration:(int)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setDepthMaxFrameRate:(float)arg1;
- (void)setDeviceReleaseBehavior:(int)arg1;
- (int)setExposureModeAutoWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)setExposureModeCustomWithExposureDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 minFrameRate:(double)arg2 maxFrameRate:(double)arg3 ISO:(float)arg4 requestID:(int)arg5;
- (int)setExposureModeLocked;
- (int)setExposureTargetBias:(float)arg1 requestID:(int)arg2;
- (void)setFaceDetectionConfiguration:(id)arg1;
- (int)setFaceDetectionDrivenImageProcessingMode:(int)arg1;
- (int)setFocusModeAutoWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 continuous:(bool)arg2 smooth:(bool)arg3 rangeRestrictionNear:(float)arg4 rangeRestrictionFar:(float)arg5;
- (int)setFocusModeManualWithLensPosition:(float)arg1 requestID:(int)arg2;
- (void)setFocusPixelsEnabled:(bool)arg1;
- (bool)setHDRSceneDetectionEnabled:(bool)arg1 error:(id*)arg2;
- (void)setISPZoomFactor:(float)arg1;
- (int)setImageControlMode:(int)arg1;
- (int)setLowLightBoostAutomaticallyEnabled:(bool)arg1 supportedForFormat:(bool)arg2;
- (void)setMaxTorchLevel:(float)arg1;
- (void)setMaximumFrameRate:(float)arg1;
- (void)setMinimumFrameRate:(float)arg1;
- (void)setOverscanPercentage:(struct CGSize { double x1; double x2; })arg1;
- (void)setProperty:(id)arg1 isObserved:(bool)arg2;
- (int)setProvidesStortorgetMetadata:(bool)arg1;
- (void)setQuadraHighResStillImageCaptureEnabled:(bool)arg1;
- (void)setShallowDepthOfFieldEffectEnabled:(bool)arg1;
- (void)setStereoFusionEnabled:(bool)arg1;
- (void)setStillImageCaptureEnabled:(bool)arg1;
- (void)setStillImageGNRHDREnabled:(bool)arg1;
- (void)setStillImageISPChromaNoiseReductionEnabled:(bool)arg1;
- (void)setStillImageISPMultiBandNoiseReductionEnabled:(bool)arg1;
- (int)setStillImageSceneMonitoringFlashMode:(int)arg1 hdrMode:(int)arg2 sisMode:(int)arg3;
- (void)setStillImageStabilizationSceneDetectionEnabled:(bool)arg1;
- (int)setSubjectAreaChangeMonitoringEnabled:(bool)arg1;
- (int)setTorchLevel:(float)arg1;
- (int)setWhiteBalanceModeAuto;
- (int)setWhiteBalanceModeLockedWithGains:(struct { float x1; float x2; float x3; })arg1 requestID:(int)arg2;
- (void)setZoomFactor:(float)arg1;
- (bool)shallowDepthOfFieldEffectEnabled;
- (int)shallowDepthOfFieldEffectStatus;
- (void)startupFaceDetectionIfNeeded;
- (bool)stereoFusionEnabled;
- (bool)stillImageCaptureEnabled;
- (id)stillImageCaptureSettingsWithID:(long long)arg1 captureType:(int)arg2 deliverProcessedImage:(bool)arg3 deliverOriginalImage:(bool)arg4 deliverSushiRaw:(bool)arg5 deliverBravoDualPhoto:(bool)arg6 includePreBracketedEV0ForProcessing:(bool)arg7 clientBracketSettings:(id)arg8 captureFlags:(unsigned long long)arg9 userInitiatedRequestPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg10;
- (bool)stillImageGNRHDREnabled;
- (id)supportedFormats;
- (bool)supportsProperty:(struct __CFString { }*)arg1;
- (void)unregisterForAEMatrixMetadata;
- (void)updateSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2;
- (id)zoomCommandHandler;
- (void)zoomCommandHandler:(id)arg1 didApplyZoomFactor:(float)arg2 rampComplete:(bool)arg3 rampCommandID:(int)arg4;
- (float)zoomFactor;

@end

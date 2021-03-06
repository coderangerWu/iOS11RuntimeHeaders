/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVideoMetadataOverlayNode : BWNode {
    struct CGContext { } * _bitmapContext;
    bool  _displayDefaultMetadata;
    struct __CTLine { } * _ellipsisToken;
    NSArray * _extraDebugMetadataKeys;
    int  _extraLinesAboveOverlay;
    bool  _markPixelBufferCenter;
    NSMutableDictionary * _metadataProviders;
    struct __CFDictionary { } * _stringAttributes;
}

+ (void)initialize;

- (int)_drawOverlayLogs:(id)arg1 toPixelBuffer:(struct __CVBuffer { }*)arg2;
- (int)_renderDebugVideoMetadataOverlayToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_setupStringAttributes;
- (bool)addMetadataProviderForKey:(id)arg1 providerBlock:(id /* block */)arg2;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end

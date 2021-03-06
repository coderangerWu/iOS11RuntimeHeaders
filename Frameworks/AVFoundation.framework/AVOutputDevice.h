/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputDevice : NSObject {
    AVOutputDeviceInternal * _outputDevice;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) long long deviceSubType;
@property (nonatomic, readonly) long long deviceType;
@property (readonly) AVFigEndpointOutputDeviceImpl *figEndpointOutputImpl;
@property (nonatomic, readonly) NSString *modelID;
@property (nonatomic, readonly) NSString *name;

+ (void)initialize;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint { }*)arg1;
+ (bool)prefersRouteDescriptors;
+ (id)sharedLocalDevice;

- (id)ID;
- (float)batteryLevel;
- (bool)canAccessRemoteAssets;
- (bool)canBeGroupLeader;
- (bool)canBeGrouped;
- (id)connectedPairedDevices;
- (void)dealloc;
- (id)description;
- (unsigned long long)deviceFeatures;
- (long long)deviceSubType;
- (long long)deviceType;
- (id)figEndpointOutputImpl;
- (double)frecencyScore;
- (bool)groupContainsGroupLeader;
- (id)groupID;
- (bool)hasBatteryLevel;
- (unsigned long long)hash;
- (id)impl;
- (id)init;
- (id)initWithOutputDeviceImpl:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isGroupLeader;
- (bool)isInUseByPairedDevice;
- (id)modelID;
- (id)modelSpecificInformation;
- (id)name;
- (bool)requiresAuthorization;
- (void)setAdministrativeConfiguration:(id)arg1 administrationPassword:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setSecondDisplayEnabled:(bool)arg1;
- (void)updateFrecencyScore;

@end

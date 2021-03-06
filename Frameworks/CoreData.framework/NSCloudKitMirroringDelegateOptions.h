/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCloudKitMirroringDelegateOptions : NSObject {
    NSNumber * _ckAssetThresholdBytes;
    NSString * _containerIdentifier;
    CKContainerOptions * _containerOptions;
    bool  _initializeSchema;
    bool  _useEncryptedStorage;
}

@property (nonatomic, retain) NSNumber *ckAssetThresholdBytes;
@property (nonatomic, retain) NSString *containerIdentifier;
@property (nonatomic, retain) CKContainerOptions *containerOptions;
@property (nonatomic) bool initializeSchema;
@property (nonatomic) bool useEncryptedStorage;

- (id)ckAssetThresholdBytes;
- (id)containerIdentifier;
- (id)containerOptions;
- (id)copy;
- (void)dealloc;
- (id)description;
- (id)initFromStoreOptions:(id)arg1;
- (bool)initializeSchema;
- (void)setCkAssetThresholdBytes:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setContainerOptions:(id)arg1;
- (void)setInitializeSchema:(bool)arg1;
- (void)setUseEncryptedStorage:(bool)arg1;
- (bool)useEncryptedStorage;

@end

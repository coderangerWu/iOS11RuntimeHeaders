/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLDAEAsset : NSObject <DAEAsset> {
    <DAEContributor> * contributor;
    NSDate * created;
    NSString * keywords;
    NSDate * modified;
    NSString * revision;
    NSString * subject;
    NSString * title;
    NSString * upAxis;
}

@property (nonatomic, retain) <DAEContributor> *contributor;
@property (nonatomic, copy) NSDate *created;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *keywords;
@property (nonatomic, copy) NSDate *modified;
@property (nonatomic, copy) NSString *revision;
@property (nonatomic, copy) NSString *subject;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *upAxis;

- (void).cxx_destruct;
- (id)contributor;
- (id)created;
- (id)keywords;
- (id)modified;
- (id)revision;
- (void)setContributor:(id)arg1;
- (void)setCreated:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setModified:(id)arg1;
- (void)setRevision:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpAxis:(id)arg1;
- (id)subject;
- (id)title;
- (id)upAxis;

@end

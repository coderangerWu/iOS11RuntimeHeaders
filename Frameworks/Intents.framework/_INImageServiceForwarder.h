/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INImageServiceForwarder : NSObject <_INImageServiceResponder> {
    <_INImageServiceResponder> * _destinationResponder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <_INImageServiceResponder> *destinationResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedForwarder;

- (void).cxx_destruct;
- (id)destinationResponder;
- (void)fetchSizeForINImage:(id)arg1 reply:(id /* block */)arg2;
- (void)setDestinationResponder:(id)arg1;

@end

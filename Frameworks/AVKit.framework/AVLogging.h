/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVLogging : NSObject {
    NSMutableDictionary * _categories;
    NSObject<OS_os_log> * _log;
    long long  _loggingLevel;
    NSObject<OS_dispatch_queue> * _loggingQueue;
    NSMutableArray * _reusableLogQueue;
}

@property (nonatomic, retain) NSMutableDictionary *categories;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *loggingQueue;
@property (nonatomic, retain) NSMutableArray *reusableLogQueue;

+ (id)sharedLogging;

- (void).cxx_destruct;
- (void)actuallyLogString:(id)arg1 type:(unsigned char)arg2 logLevel:(long long)arg3;
- (id)categories;
- (id)init;
- (void)logString:(id)arg1 type:(unsigned char)arg2 logLevel:(long long)arg3;
- (id)loggingQueue;
- (void)popCategory:(id)arg1;
- (void)pushCategory:(id)arg1;
- (id)reusableLogQueue;
- (void)setCategories:(id)arg1;
- (void)setLoggingQueue:(id)arg1;
- (void)setReusableLogQueue:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICFPLeaseSyncSessionCoordinator : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _leaseIDSetsByMediaKindNumber;
}

+ (id)sharedLeaseSyncSessionCoordinator;

- (void).cxx_destruct;
- (id)_init;
- (void)leaseSyncSessionDidBegin:(id)arg1;
- (void)leaseSyncSessionDidEnd:(id)arg1 shouldReleaseSlot:(bool*)arg2;

@end

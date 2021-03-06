/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIInternalDraggingSessionDestination : _UIDraggingImageSlotOwner <NSProgressReporting, PBDataTransferMonitorDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _centroid;
    UIWindow * _centroidWindow;
    bool  _connectedToDruid;
    PBDataTransferMonitor * _dataTransferMonitor;
    UIDragEvent * _dragEvent;
    bool  _dragInteractionDidEnd;
    id /* block */  _dropCompletionBlock;
    UIView * _dropDestinationView;
    NSArray * _dropItemProviders;
    id /* block */  _dropPerformBlock;
    bool  _dropWasPerformed;
    PBItemCollection * _droppedItemCollection;
    _UIDruidDestinationConnection * _druidConnection;
    NSMutableSet * _enteredDestinations;
    NSArray * _internalItems;
    _DUIPotentialDrop * _lastPotentialDrop;
    _UIApplicationModalProgressController * _modalProgressAlertController;
    unsigned long long  _outsideAppSourceOperationMask;
    NSProgress * _progress;
    unsigned long long  _progressIndicatorStyle;
    <_UIDraggingInfo> * _publicSession;
    unsigned int  _sessionIdentifier;
    _UIInternalDraggingSessionSource * _sessionSource;
    _UIDragSetDownAnimation * _setDownAnimation;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } centroid;
@property (nonatomic, readonly) UIWindow *centroidWindow;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didRequestDropToBePerformed;
@property (nonatomic, readonly) UIDragEvent *dragEvent;
@property (nonatomic, readonly) NSArray *dropItemProviders;
@property (nonatomic, retain) _UIDruidDestinationConnection *druidConnection;
@property (nonatomic, readonly) bool hasConnectedToDruid;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UIInternalDraggingSessionSource *inAppSessionSource;
@property (nonatomic, copy) NSArray *internalItems;
@property (nonatomic, readonly) unsigned long long outsideAppSourceOperationMask;
@property (nonatomic, readonly) NSArray *preDropItemProviders;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic) unsigned long long progressIndicatorStyle;
@property (nonatomic, readonly) <_UIDraggingInfo> *publicSession;
@property (nonatomic, readonly) unsigned long long sourceOperationMask;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })centroid;
- (id)centroidWindow;
- (void)connect;
- (void)dataTransferMonitorBeganTransfers:(id)arg1;
- (void)dataTransferMonitorFinishedTransfers:(id)arg1;
- (bool)didRequestDropToBePerformed;
- (id)dragEvent;
- (void)dragInteractionEnding;
- (id)dropItemProviders;
- (id)druidConnection;
- (void)enteredDestination:(id)arg1;
- (void)handOffDroppedItems:(id)arg1;
- (bool)hasConnectedToDruid;
- (id)inAppSessionSource;
- (id)initWithDragManager:(id)arg1 dragEvent:(id)arg2;
- (id)internalItems;
- (void)itemsBecameDirty:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (unsigned long long)outsideAppSourceOperationMask;
- (id)preDropItemProviders;
- (id)progress;
- (unsigned long long)progressIndicatorStyle;
- (id)publicSession;
- (void)requestDropOnView:(id)arg1 withOperation:(unsigned long long)arg2 perform:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)sawDragEndEvent;
- (void)setDruidConnection:(id)arg1;
- (void)setInternalItems:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setProgressIndicatorStyle:(unsigned long long)arg1;
- (unsigned long long)sourceOperationMask;
- (void)takePotentialDrop:(id)arg1;
- (void)takeVisibleDroppedItems:(id)arg1;
- (void)updateCentroidFromDragEvent;

@end

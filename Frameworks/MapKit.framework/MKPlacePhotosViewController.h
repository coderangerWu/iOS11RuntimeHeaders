/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlacePhotosViewController : UIViewController <MKModuleViewControllerProtocol, MKPlaceAttributionCellDelegate, MKPlacePhotosViewDelegate, UIScrollViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    MKPlaceAttributionCell * _attributionCell;
    bool  _canUseFullscreenViewer;
    bool  _canUseGallery;
    NSLayoutConstraint * _heightConstraint;
    bool  _isRTL;
    MKMapItem * _mapItem;
    unsigned long long  _mode;
    unsigned long long  _originalMode;
    _MKPlaceViewController * _owner;
    bool  _photoLoaded;
    NSArray * _photoViews;
    NSArray * _photos;
    UIView * _photosContainer;
    UIScrollView * _photosContainerScrollView;
    <MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> * _photosControllerDelegate;
    unsigned long long  _photosCount;
    MKPhotoSmallAttributionView * _photosSmallAttributionsView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) _MKPlaceViewController *owner;
@property (nonatomic) <MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> *photosControllerDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callPhotoDelegateForPhotoAt:(unsigned long long)arg1;
- (void)_cancelLoadPhotos;
- (void)_createImageViews;
- (void)_loadPhotos;
- (void)_photoSelected:(id)arg1;
- (void)_photoTappedAtIndex:(unsigned long long)arg1;
- (void)_updatePhotoBackgroundColor:(id)arg1;
- (void)addAttributionCell;
- (id)attributionString;
- (id)infoCardChildPossibleActions;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithMapItem:(id)arg1 mode:(unsigned long long)arg2;
- (void)layoutImages;
- (void)openURL;
- (id)owner;
- (id)photosControllerDelegate;
- (void)placePhotoViewerAttributionTappedForPhotoAtIndex:(unsigned long long)arg1 photo:(id)arg2;
- (id)placePhotoViewerGetDelegatesMapItem;
- (id)placePhotoViewerViewForPhotoAtIndex:(unsigned long long)arg1;
- (void)placePhotoViewerWillClose:(id)arg1 photo:(id)arg2 onIndex:(unsigned long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setPhotosControllerDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForIndex:(unsigned long long)arg1;
- (void)updateAttributionPositionWithOffset:(double)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end

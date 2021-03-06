/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationView : UIView <SUICFlamesViewDelegate> {
    bool  _automaticAppearanceWasEnabled;
    UIKeyboardDicationBackground * _background;
    <UIDictationViewDisplayDelegate> * _displayDelegate;
    UIButton * _endpointButton;
    UIButton * _endpointButtonLandscape;
    SUICFlamesView * _flamesView;
    bool  _keyboardInTransition;
    bool  _showLanguageLabel;
    int  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <UIDictationViewDisplayDelegate> *displayDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showLanguageLabel;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)activeInstance;
+ (Class)dictationViewClass;
+ (struct CGSize { double x1; double x2; })layoutSize;
+ (id)sharedInstance;
+ (struct CGSize { double x1; double x2; })viewSize;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)applicationEnteredBackground;
- (void)applicationWillResignActive;
- (float)audioLevelForFlamesView:(id)arg1;
- (struct CGPoint { double x1; double x2; })backgroundOffset;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGSize { double x1; double x2; })currentScreenSize;
- (void)dealloc;
- (void)didEndIndirectSelectionGesture;
- (id)displayDelegate;
- (bool)drawsOwnBackground;
- (id)endpointButton;
- (void)endpointButtonPressed;
- (void)finishReturnToKeyboard;
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(struct CGPoint { double x1; double x2; })arg3;
- (void)highlightEndpointButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isShowing;
- (void)keyboardDidShow:(id)arg1;
- (struct CGPoint { double x1; double x2; })positionForShow;
- (void)prepareForReturnToKeyboard;
- (void)returnToKeyboard;
- (void)setDisplayDelegate:(id)arg1;
- (void)setShowLanguageLabel:(bool)arg1;
- (void)setState:(int)arg1;
- (void)show;
- (bool)showLanguageLabel;
- (bool)visible;
- (void)willBeginIndirectSelectionGesture;

@end

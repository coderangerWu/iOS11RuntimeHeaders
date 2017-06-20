/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyCommandDiscoverabilityHUDColumnView : UIView {
    UIFont * _baseFont;
    NSArray * _constraints;
    <UIKeyCommandDiscoverabilityHUDColumnViewDelegate> * _delegate;
    UILayoutGuide * _descriptionColumnLayoutGuide;
    NSArray * _descriptionViews;
    double  _fontScaleFactor;
    UILayoutGuide * _inputStringColumnLayoutGuide;
    NSArray * _inputStringViews;
    NSArray * _modifierViews;
    UILayoutGuide * _modifiersColumnLayoutGuide;
    UIKeyCommandDiscoverabilityHUDVisualStyle * _visualStyle;
}

@property (nonatomic) double fontScaleFactor;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void).cxx_destruct;
- (double)fontScaleFactor;
- (id)initWithDelegate:(id)arg1;
- (void)setFontScaleFactor:(double)arg1;
- (void)setKeyCommands:(id)arg1 withVisualStyle:(id)arg2;

@end
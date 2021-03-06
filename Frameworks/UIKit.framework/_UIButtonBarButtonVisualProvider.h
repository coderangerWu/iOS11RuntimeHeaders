/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIButtonBarButtonVisualProvider : NSObject <NSCopying>

@property (nonatomic) bool backButtonConstraintsActive;
@property (nonatomic, readonly) UIView *backIndicatorView;
@property (nonatomic, readonly) UIView *contentView;

- (bool)backButtonConstraintsActive;
- (id)backIndicatorView;
- (void)button:(id)arg1 traitCollectionDidChange:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })buttonAlignmentRectInsets:(id)arg1;
- (bool)buttonEnabledState:(id)arg1 forRequestedState:(bool)arg2;
- (bool)buttonHighlitedState:(id)arg1 forRequestedState:(bool)arg2;
- (struct CGSize { double x1; double x2; })buttonIntrinsicContentSize:(id)arg1;
- (bool)buttonSelectionState:(id)arg1 forRequestedState:(bool)arg2;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (id)contentView;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setBackButtonConstraintsActive:(bool)arg1;
- (bool)supportsBackButtons;
- (void)updateButton:(id)arg1 forEnabledState:(bool)arg2;
- (void)updateButton:(id)arg1 forHighlightedState:(bool)arg2;
- (void)updateButton:(id)arg1 forSelectedState:(bool)arg2;
- (void)updateButton:(id)arg1 toUseButtonShapes:(bool)arg2;

@end

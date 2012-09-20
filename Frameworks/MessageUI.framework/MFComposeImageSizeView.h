/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class UISegmentedControl;

@interface MFComposeImageSizeView : MFComposeHeaderView  {
    UISegmentedControl *_segmentedControl;
}


- (void)dealloc;
- (void)setScale:(unsigned int)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned long)_segmentIndexForScale:(unsigned int)arg1;
- (void)segmentedControlChanged;
- (void)setSizeDescription:(id)arg1 forScale:(unsigned int)arg2;

@end
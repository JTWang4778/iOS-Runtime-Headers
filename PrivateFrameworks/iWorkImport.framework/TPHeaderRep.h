/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TPPaginatedPageInfo;

@interface TPHeaderRep : TSWPHeaderRep {
    bool_hideKnobs;
}

@property bool hideKnobs;
@property(readonly) TPPaginatedPageInfo * pageInfo;

- (void)addKnobsToArray:(id)arg1;
- (id)beginEditing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForStandardKnobs;
- (bool)canEditWithEditor:(id)arg1;
- (bool)doesNeedDisplayOnEditingDidEnd;
- (void)editingDidEnd;
- (bool)hideKnobs;
- (id)newTrackerForKnob:(id)arg1;
- (bool)p_isInDocumentSetup;
- (bool)p_isMiddleFooterRep;
- (bool)p_isMiddleHeaderRep;
- (bool)p_shouldCreateArrowKnobs;
- (id)pageInfo;
- (id)pageLayout;
- (void)setHideKnobs:(bool)arg1;
- (bool)shouldCreateKnobs;
- (bool)shouldIgnoreSingleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1 withRecognizer:(id)arg2;
- (void)updatePositionsOfKnobs:(id)arg1;

@end
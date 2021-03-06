//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AVPlayerControlsViewController.h"

@class AVPlayerController, AVPlayerControllerTimeResolver, MGMediaCompositionViewController, NSDocument, NSView;

@interface MGEditViewController : AVPlayerControlsViewController
{
    AVPlayerController *_playerController;
    AVPlayerControllerTimeResolver *_timeResolver;
    MGMediaCompositionViewController *_mediaCompositionViewController;
    NSView *_buttonsContainerView;
    NSView *_playPauseButton;
    NSView *_mediaCompositionView;
    BOOL _inDraggingSourceOperation;
    BOOL _prefersUnobscuredTimeline;
    NSDocument *_document;
}

+ (id)keyPathsForValuesAffectingIntrinsicControlsContentViewSize;
+ (id)keyPathsForValuesAffectingBackgroundBackdropViewMaskImage;
@property(nonatomic) BOOL prefersUnobscuredTimeline; // @synthesize prefersUnobscuredTimeline=_prefersUnobscuredTimeline;
@property(nonatomic, getter=isInDraggingSourceOperation) BOOL inDraggingSourceOperation; // @synthesize inDraggingSourceOperation=_inDraggingSourceOperation;
@property(readonly) __weak NSDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)initialFirstResponder;
- (void)controlsContainerViewControllerWillHideView:(id)arg1;
- (void)controlsContainerViewControllerDidShowView:(id)arg1;
- (CDStruct_d2b197d1)controlsContentViewMargin;
- (struct CGSize)intrinsicControlsContentViewSize;
- (long long)layoutStyle;
- (id)backgroundBackdropViewMaskImage;
- (id)controlsStyleIdentifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)invalidateRestorableState;
- (void)restoreStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
@property(nonatomic) BOOL showsAdditionalMediaTrack;
- (double)viewHeightShowingAdditionalMediaTrack:(BOOL)arg1;
- (double)timelineUpdateResolution;
- (void)close;
- (void)loadView;
- (id)initWithDocument:(id)arg1 nibName:(id)arg2 bundle:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSArray, NSImage, NSTrackingArea, RolloverImageButton;

__attribute__((visibility("hidden")))
@interface RolloverActionButtonTableCellView : NSTableCellView
{
    BOOL _cancelRemoveButtonAnimation;
    NSArray *_layoutConstraints;
    BOOL _showsActionButton;
    int _actionButtonState;
    id <RolloverActionButtonTableCellViewDelegate> _delegate;
    RolloverImageButton *_actionButton;
    NSImage *_actionButtonImage;
    NSImage *_actionButtonRolloverImage;
    NSImage *_actionButtonPressedImage;
    double _actionButtonTopMargin;
    double _actionButtonHorizontalMargin;
    double _actionButtonYOffsetWhenVerticallyCentered;
    NSTrackingArea *_trackingArea;
}

@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) double actionButtonYOffsetWhenVerticallyCentered; // @synthesize actionButtonYOffsetWhenVerticallyCentered=_actionButtonYOffsetWhenVerticallyCentered;
@property(nonatomic) double actionButtonHorizontalMargin; // @synthesize actionButtonHorizontalMargin=_actionButtonHorizontalMargin;
@property(nonatomic) double actionButtonTopMargin; // @synthesize actionButtonTopMargin=_actionButtonTopMargin;
@property(retain, nonatomic) NSImage *actionButtonPressedImage; // @synthesize actionButtonPressedImage=_actionButtonPressedImage;
@property(retain, nonatomic) NSImage *actionButtonRolloverImage; // @synthesize actionButtonRolloverImage=_actionButtonRolloverImage;
@property(retain, nonatomic) NSImage *actionButtonImage; // @synthesize actionButtonImage=_actionButtonImage;
@property(nonatomic) BOOL showsActionButton; // @synthesize showsActionButton=_showsActionButton;
@property(nonatomic) __weak RolloverImageButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) int actionButtonState; // @synthesize actionButtonState=_actionButtonState;
@property(nonatomic) __weak id <RolloverActionButtonTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_actionButtonClicked:(id)arg1;
- (void)_addTrackingArea;
- (void)_removeTrackingArea;
- (void)_positionActionButton;
- (void)_performSharedSetup;
- (BOOL)_enhancedAccessibilityEnabled;
- (void)didHideActionButton;
- (void)willShowActionButton;
- (void)updateTrackingAreas;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end


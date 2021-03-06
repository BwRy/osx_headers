//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class AVPlayerController, NSResponder, NSSlider;

@interface AVPlayPauseShuttleControllerView : NSView
{
    unsigned int _isJogging:1;
    NSResponder *_firstResponder;
    AVPlayerController *_playerController;
    NSSlider *_shuttleSlider;
    NSView *_viewToHideWhenShuttleSliderShown;
}

@property(retain) NSView *viewToHideWhenShuttleSliderShown; // @synthesize viewToHideWhenShuttleSliderShown=_viewToHideWhenShuttleSliderShown;
@property(retain) NSSlider *shuttleSlider; // @synthesize shuttleSlider=_shuttleSlider;
@property __weak AVPlayerController *playerController; // @synthesize playerController=_playerController;
- (void).cxx_destruct;
- (id)playPauseButton;
- (id)containerView;
- (void)setJogging:(BOOL)arg1;
@property(readonly, getter=isJogging) BOOL jogging;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


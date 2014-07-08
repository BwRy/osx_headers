//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TUpdateLayerView.h"

#import "TTrackingAreaOwnerProtocol.h"
#import "TViewAnimationDelegate.h"

@class NSString;

@interface TDesktopInlineProgressHostView : TUpdateLayerView <TTrackingAreaOwnerProtocol, TViewAnimationDelegate>
{
    struct TNSRef<TInlineProgressHostLayer *> _inlineProgressHostLayer;
    id _cancelButtonTarget;
    SEL _cancelButtonAction;
    id _cancelButtonActionSender;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)updateTrackingAreas;
- (void)stopTrackingCancelButton;
- (void)startTrackingCancelButton;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)completeAnimation;
- (void)setCancelButtonTarget:(id)arg1 action:(SEL)arg2 sender:(id)arg3;
- (void)setIconFrame:(const struct CGRect *)arg1 baselineOffset:(double)arg2;
- (struct CGRect)iconFrame;
- (double)baselineOffset;
@property(nonatomic) _Bool canCancel; // @dynamic canCancel;
@property(nonatomic) unsigned int state; // @dynamic state;
@property(nonatomic) double percentComplete; // @dynamic percentComplete;
- (void)initCommon;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(const struct CGRect *)arg1 canCancel:(_Bool)arg2 initialPercentComplete:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

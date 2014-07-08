//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImage;

@interface SpotlightView : NSView
{
    struct CGPoint mSelectSpotlightCenter;
    struct CGPoint mSpotlightCenters[32];
    long long mSpotlightsCount;
    NSImage *mImage;
    double mFraction;
    struct __CFRunLoop *mRunLoop;
    BOOL mUpdateImage;
    struct __CFRunLoopTimer *mFadeAnimTimer;
    double mStartTime;
    double mPercent;
    BOOL mFadeIn;
    double mClickAnimStartTime;
    short mClickAnimCounter;
    BOOL mClickAnimDone;
    BOOL mDrawSpotlightCenter;
    struct CGImage *mCGImageRef;
    struct CGImage *mCGImageRef2;
    struct CGImage *mCGImageRef3;
    struct CGRect mClickAnimRect;
}

- (void)fadeOutWithAnimation:(BOOL)arg1;
- (void)fadeInWithAnimation:(BOOL)arg1;
- (void)animateSpotlight;
- (void)removeSpotlights;
- (void)addSpotlightWithCenter:(struct CGPoint)arg1;
- (void)selectSpotlightWithCenter:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (BOOL)acceptsFirstResponder;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_fadeAnimTimerCallBack;
- (void)_clickAnimTimerCallBack;
- (void)_stopFadeAnimation;
- (void)_startFadeAnimation;

@end

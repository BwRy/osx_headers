//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class NSColor, NSMutableArray, NSMutableDictionary, NSMutableSet, NSTimer, NSTrackingArea, PassThroughAnimator;

@interface BlackWindow : NSWindow
{
    PassThroughAnimator *_animator;
    NSMutableArray *_sidePanels;
    NSMutableArray *_hidingViews;
    NSMutableDictionary *_hidingViewsToTrackingAreaMap;
    NSMutableSet *_hidingViewsMyMouseIsOver;
    NSTrackingArea *_contentViewTrackingArea;
    NSTrackingArea *_titlebarTrackingArea;
    NSTimer *_hideTimer;
    double _animationResizeTimeOverride;
    long long _viewHidingBehavior;
    long long _titlebarHidingBehavior;
    unsigned int _mouseOverTitlebar:1;
    unsigned int _animateViewHiding:1;
    unsigned int _animateTitlebarHiding:1;
    unsigned int _trackMouse:1;
    unsigned int _mouseActive:1;
    unsigned int _hidingViewsVisible:1;
    unsigned int _titlebarVisible:1;
    unsigned int _isAnimatingFullScreen:1;
    unsigned int _canBecomeKeyWindow:1;
    unsigned int _isWindowBeingDragged:1;
    unsigned int _isFullScreen:1;
    unsigned int _overrideAnimationResizeTime:1;
    unsigned int _delegate_window_isHidingViewsVisibleDidChange:1;
    unsigned int _delegate_window_isTitlebarVisibleDidChange:1;
    unsigned int _delegate_window_sidePanel_animationStateDidChange:1;
    unsigned int _delegate_window_willSetFrame:1;
}

+ (Class)frameViewClassForStyleMask:(unsigned long long)arg1;
+ (void)initialize;
+ (BOOL)shouldAlwaysShowControls;
@property(nonatomic) double animationResizeTimeOverride; // @synthesize animationResizeTimeOverride=_animationResizeTimeOverride;
- (void).cxx_destruct;
- (void)overrideShadow:(BOOL)arg1 withType:(long long)arg2;
@property(nonatomic) BOOL hasRoundedCorners;
@property(nonatomic) BOOL automaticallyManagesTitlebarFrame;
@property(nonatomic, getter=isResizingDisabled) BOOL resizingDisabled;
@property(nonatomic, getter=isMovingDisabled) BOOL movingDisabled;
@property(copy) NSColor *backgroundColor;
- (id)titlebarView;
- (BOOL)validateMenuItem:(id)arg1;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)windowWillMove:(id)arg1;
- (id)_cornerMask;
- (id)_orderedDrawerAndWindowKeyLoopGroupingViews;
- (void)_setLevelForAllDrawers;
- (void)_changeAllDrawersFirstResponder;
- (void)_changeAllDrawersKeyState;
- (void)disableTrackingAreas;
@property(nonatomic, setter=setFullscreen:) BOOL isFullscreen;
- (BOOL)isBeingDragged;
@property BOOL canBecomeKeyWindow;
@property(readonly, nonatomic, getter=isHidingViewsVisible) BOOL hidingViewsVisible;
@property(readonly, nonatomic, getter=isTitlebarVisible) BOOL titlebarVisible;
- (id)hidingViews;
- (id)sidePanels;
- (BOOL)tracksMouse;
- (void)setTracksMouse:(BOOL)arg1;
@property(nonatomic, getter=shouldAnimateTitlebarHiding) BOOL animateTitlebarHiding;
@property(nonatomic, getter=shouldAnimateViewHiding) BOOL animateViewHiding;
@property(nonatomic) long long titlebarHidingBehavior;
@property(nonatomic) long long viewHidingBehavior;
@property __weak id <BlackWindowDelegate><NSWindowDelegate> delegate;
- (void)_updateContentViewTrackingRect;
- (void)_updateHidingForMouseExited;
- (void)_updateHidingForMouseMoved;
- (void)_fireHideTimer:(id)arg1;
- (void)_clearHideTimer;
- (void)_sidePanelAnimationStateDidChange:(id)arg1;
- (void)_updateHidingBehavior;
- (void)_recheckMouseOverStates;
- (BOOL)hidingViewsVisible;
- (void)removeAllHidingViews;
- (void)removeHidingView:(id)arg1;
- (void)addHidingView:(id)arg1;
- (void)detachSidePanel:(id)arg1;
- (void)attachSidePanel:(id)arg1;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
- (void)close;
- (double)animationResizeTime:(struct CGRect)arg1;
- (void)_detachSheetWindow;
- (void)_attachSheetWindow:(id)arg1;
- (id)animator;
- (void)sendEvent:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setContentView:(id)arg1;
- (BOOL)_hasActiveAppearanceForStandardWindowButton:(unsigned long long)arg1;
- (BOOL)_isDarkWindow;
- (void)_commonAwake;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (id)accessibilityAttributeValue:(id)arg1;

@end

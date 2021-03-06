//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TScriptableWindowController.h"

#import "NSWindowDelegate.h"

@class NSString;

@interface TProgressWindowController : TScriptableWindowController <NSWindowDelegate>
{
    struct TNSRef<TScrollView *> _scrollView;
    _Bool _sizeWindowToScrollView;
    int _kind;
    unsigned long long _attachedViewsCount;
    struct CGPoint _initialLocation;
    _Bool _clickIsInWindowButNotTitlebar;
}

+ (id)controllerForWindowKind:(int)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)sizeToFitViews;
- (void)layoutViews;
- (void)updateResizeState;
- (double)minimumWindowHeight;
- (double)minimumProgressViewWidth;
- (void)removeView:(id)arg1;
- (id)addView;
- (void)dealloc;
- (id)initWithKind:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


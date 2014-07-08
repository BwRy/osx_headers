//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSMenuToolbar;

@interface NSMenuToolbarView : NSView
{
    NSMenuToolbar *toolbar;
    NSView *_lastLeftView;
    NSView *_lastRightView;
    _Bool _inMouseDown;
}

+ (id)dragIdentifier;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)_beginViewDrag:(id)arg1 theEvent:(id)arg2 withImage:(id)arg3;
- (id)_createDragImage:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (id)_hitTest:(struct CGPoint *)arg1 dragTypes:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1;
- (id)initWithToolbar:(id)arg1;

@end

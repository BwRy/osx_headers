//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class NSEvent;

@interface ITNSWindow : NSWindow
{
    struct ITWindow *_itWindow;
    NSEvent *_currentEvent;
    struct CGRect _previousFrameSize;
    BOOL _isChangingOrder;
    BOOL _dragExitedWindow;
    int _lastDragResult;
}

- (id).cxx_construct;
- (BOOL)validateMenuItem:(id)arg1;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (void)dispatchMenuCommand:(id)arg1 withCommand:(unsigned int)arg2;
- (id)windowFrameWidget:(id)arg1;
- (id)accessibilityFocusedUIElement;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)noResponderFor:(SEL)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)makeFirstResponder:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (id)_cursorForResizeDirection:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)resignMainWindow;
- (void)becomeMainWindow;
- (void)orderWindow:(long long)arg1 relativeTo:(long long)arg2;
- (void)becomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)setDragExitedWindow:(BOOL)arg1;
- (BOOL)dragExitedWindow;
- (void)setLastDragResult:(int)arg1;
- (int)lastDragResult;
- (struct CGRect)previousFrameSize;
- (void)setPreviousFrameSize:(struct CGRect)arg1;
- (struct ITWindow *)itWindow;
- (void)setITWindow:(struct ITWindow *)arg1;
- (void)sendEvent:(id)arg1;

@end

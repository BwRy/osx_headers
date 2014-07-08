//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

@class NSImage, NSImageCell, NSMenu, NSPopUpButtonCell, NSString, NSTextFieldCell;

@interface RolloverButton : NSControl
{
    NSImageCell *_imageCell;
    NSTextFieldCell *_messageCell;
    NSImageCell *_triangleCell;
    NSPopUpButtonCell *_popUpButtonCell;
    NSMenu *_menu;
    NSImage *_image;
    NSImage *_highlightedImage;
    NSImage *_triangleImage;
    NSImage *_highlightedTriangleImage;
    NSImage *_buttonRolloverImage;
    NSImage *_buttonPressedImage;
    NSString *_message;
    BOOL _toggles;
    BOOL _state;
    unsigned long long _alignment;
    id _target;
    SEL _action;
    BOOL _mouseOver;
    BOOL _mouseDown;
    long long _trackingRectTag;
    struct CGRect _activeRect;
    float _cornerRadius;
    struct CGSize _imageSize;
    struct CGSize _triangleSize;
    struct CGSize _messageSize;
    int _leftMargin;
    int _rightMargin;
}

- (void)performClick:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)acceptsFirstResponder;
- (void)setStringValue:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_updateTrackingRect;
- (void)_removeTrackingRect;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_runPopUp:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (float)_fgTextColorForRollover:(BOOL)arg1;
- (float)_bgTextColorForRollover:(BOOL)arg1;
- (void)resizeFrameToFit;
- (void)_setActiveRectToFitMessage:(id)arg1;
- (struct CGRect)_popupRect;
- (struct CGRect)_triangleRect;
- (struct CGRect)_messageRect;
- (struct CGRect)_imageRect;
- (void)setMenu:(id)arg1;
- (id)menu;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setAlignment:(unsigned long long)arg1;
- (unsigned long long)alignment;
- (void)_setTriangleImage:(id)arg1 highlightedTriangleImage:(id)arg2;
- (void)setImage:(id)arg1 highlightedImage:(id)arg2;
- (void)dealloc;
- (void)awakeFromNib;
- (void)_stopNotifications;
- (void)_startNotifications;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityTitleAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityFocusedUIElement;

@end

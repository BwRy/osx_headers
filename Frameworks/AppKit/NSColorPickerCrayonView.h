//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColorList, NSColorPickerCrayon, NSCrayon, NSMutableArray;

@interface NSColorPickerCrayonView : NSView
{
    NSColorList *_colorList;
    NSMutableArray *_crayonRows;
    NSCrayon *_selectedCrayon;
    NSColorPickerCrayon *_controllingPicker;
}

+ (id)_crayonMaskImage;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)drawRect:(struct CGRect)arg1;
- (void)setColor:(id)arg1;
- (id)localizedColorNameComponent;
- (id)color;
- (void)_windowChangedKeyState;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)_forceUpdateFocusRing;
- (void)_updateFocusRing;
- (void)_updateCrayonsFromColorList;
- (BOOL)_shouldShowFocusRing;
- (BOOL)_hasFocusRing;
- (void)_setColorList:(id)arg1;
- (id)_focusedCrayon;
- (id)_selectedCrayon;
- (void)_selectCrayon:(id)arg1 updateSelection:(BOOL)arg2;
- (id)_nearestCrayonUnderViewPoint:(struct CGPoint)arg1;
- (id)_nearestCrayonUnderViewPoint:(struct CGPoint)arg1 inRow:(id)arg2;
- (id)_crayonWithColor:(id)arg1;
- (id)_crayonRowBelowRow:(id)arg1;
- (id)_crayonRowAboveRow:(id)arg1;
- (struct CGSize)_requiredMinSize;
- (id)_crayons;
- (id)_colorList;
- (void)moveUp:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;

@end


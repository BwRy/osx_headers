//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSColor, NSImage, NSString, NSTabView, NSView, NSViewController;

@interface NSTabViewItem : NSObject <NSCoding>
{
    id _identifier;
    NSString *__label;
    NSView *_view;
    NSView *__initialFirstResponder;
    NSColor *__color;
    NSTabView *_tabView;
    unsigned long long _tabState;
    NSView *_lastKeyView;
    struct __tviFlags {
        unsigned int hasCustomColor:1;
        unsigned int labelSizeIsValid:1;
        unsigned int autoGeneratedIFR:1;
        unsigned int isTabDisabled:1;
        unsigned int isActive:1;
        unsigned int RESERVED:27;
    } _tviFlags;
    struct CGSize _labelSize;
    struct CGRect _tabRect;
    long long _tabToolTipTag;
    id _auxiliaryStorage;
}

+ (id)_labelCell;
+ (id)tabViewItemWithViewController:(id)arg1;
@property(retain) NSView *_view; // @synthesize _view;
@property(copy) NSString *_label; // @synthesize _label=__label;
@property NSView *_initialFirstResponder; // @synthesize _initialFirstResponder=__initialFirstResponder;
@property(copy) NSColor *_color; // @synthesize _color=__color;
@property(readonly) unsigned long long tabState; // @synthesize tabState=_tabState;
@property(retain) id identifier; // @synthesize identifier=_identifier;
@property(readonly) NSTabView *tabView; // @synthesize tabView=_tabView;
- (void)_tabViewWillRemoveFromSuperview;
- (void)_resetToolTipIfNecessary;
- (void)_removeToolTip;
- (long long)_addToolTipRect:(struct CGRect)arg1;
- (id)_fullLabel;
- (struct CGSize)_computeNominalDisplayedLabelSize;
- (struct CGSize)_computeMinimumDisplayedLabelSize;
- (struct CGSize)_computeDisplayedSizeOfString:(id)arg1;
- (id)_computeMinimumDisplayedLabelForWidth:(double)arg1;
- (struct _NSRange)_rangeOfPrefixOfString:(id)arg1 fittingWidth:(double)arg2 withFont:(id)arg3;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)_old_initWithCoder_NSTabViewItem:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_old_encodeWithCoder_NSTabViewItem:(id)arg1;
- (struct CGSize)sizeOfLabel:(BOOL)arg1;
- (void)_invalidLabelSize;
- (void)_drawKeyViewOutline:(struct CGRect)arg1;
- (void)drawLabel:(BOOL)arg1 inRect:(struct CGRect)arg2;
- (long long)interiorBackgroundStyle;
- (void)_setActive:(BOOL)arg1;
- (BOOL)_isReallyPressed;
- (void)_drawOrientedLabel:(BOOL)arg1 inRect:(struct CGRect)arg2;
- (BOOL)_rotateCoordsForDrawLabelInRect:(struct CGRect)arg1;
- (void)_clearInitialFirstResponderAndLastKeyViewIfAutoGenerated;
- (void)_setDefaultKeyViewLoopAndInitialFirstResponder;
- (BOOL)_initialFirstResponderIsAutoGenerated;
- (void)_setAutoGeneratedInitialFirstResponder:(id)arg1;
- (BOOL)_canAutoGenerateKeyboardLoops;
- (void)_finishedWiringNibConnections;
@property NSView *initialFirstResponder;
- (void)_setInitialFirstResponder:(id)arg1 autoGenerated:(BOOL)arg2;
- (void)_updateWithViewController:(id)arg1;
@property(retain) NSViewController *viewController;
@property(retain) NSView *view;
- (id)_labelColor;
- (BOOL)_isTabEnabled;
- (void)_setTabEnabled:(BOOL)arg1;
- (void)_setTabState:(unsigned long long)arg1;
- (void)_setTabRect:(struct CGRect)arg1;
@property(copy) NSString *toolTip; // @dynamic toolTip;
@property(copy) NSString *label; // @dynamic label;
- (void)_setTabView:(id)arg1;
- (BOOL)_hasCustomColor;
- (struct CGRect)_tabRect;
@property(copy) NSColor *color; // @dynamic color;
- (id)_lastKeyView;
- (void)_validateViewIsInViewHeirarchy:(id *)arg1;
@property(retain) NSImage *image;
- (void)finalize;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithIdentifier:(id)arg1;
- (id)init;
- (void)_deallocAuxiliaryStorage;
- (void)_allocAuxiliaryStorage;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsSizeAttributeSettable;
- (id)accessibilitySizeAttribute;
- (BOOL)accessibilityIsPositionAttributeSettable;
- (id)accessibilityPositionAttribute;
- (BOOL)accessibilityIsTopLevelUIElementAttributeSettable;
- (id)accessibilityTopLevelUIElementAttribute;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityWindowAttribute;
- (BOOL)accessibilityIsParentAttributeSettable;
- (id)accessibilityParentAttribute;
- (BOOL)accessibilityIsTitleAttributeSettable;
- (id)accessibilityTitleAttribute;
- (void)accessibilitySetFocusedAttribute:(id)arg1;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (id)accessibilityFocusedAttribute;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (id)accessibilityEnabledAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsHelpAttributeSettable;
- (id)accessibilityHelpAttribute;
- (BOOL)accessibilityIsRoleDescriptionAttributeSettable;
- (id)accessibilityRoleDescriptionAttribute;
- (BOOL)accessibilityIsRoleAttributeSettable;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;

@end


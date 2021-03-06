//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TView.h"

@class TTabViewItem;

@interface TTabLayer : TView
{
    TView *_textLayer;
    _Bool _windowActive;
    _Bool _acceptingDrop;
    int _drawFlavor;
    int _closeButtonState;
    TTabViewItem *_item;
}

+ (void)tintAndFrame:(id)arg1 inRect:(struct CGRect)arg2 windowActive:(_Bool)arg3;
@property(nonatomic) TTabViewItem *item; // @synthesize item=_item;
@property(nonatomic) _Bool acceptingDrop; // @synthesize acceptingDrop=_acceptingDrop;
@property(nonatomic) int closeButtonState; // @synthesize closeButtonState=_closeButtonState;
@property(nonatomic) _Bool windowActive; // @synthesize windowActive=_windowActive;
@property(nonatomic) int drawFlavor; // @synthesize drawFlavor=_drawFlavor;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)drawRect:(struct CGRect)arg1;
- (id)menuForEvent:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)update;
- (void)labelChanged;
- (void)windowActiveStateChanged;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (id)toolTip;
- (void)updateTextLabelFrame;
- (void)finishAddingView;
- (id)initWithFrame:(struct CGRect)arg1;

@end


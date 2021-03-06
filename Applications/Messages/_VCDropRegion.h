//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class AbbreviatingTextField, Animator, NSBezierPath, NSColor, NSShadow;

@interface _VCDropRegion : NSView
{
    id _recipient;
    BOOL _highlighted;
    float _opacity;
    Animator *_animator;
    BOOL _needsLayout;
    AbbreviatingTextField *_titleField;
    NSBezierPath *_fillPath;
    NSColor *_fillColor;
    NSShadow *_fillGlow;
    NSBezierPath *_borderPath;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)recipient;
- (void)setRecipient:(id)arg1;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)animator:(id)arg1 doStep:(double)arg2 lastStep:(BOOL)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)setOpacity:(float)arg1;
- (void)_setTitle;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_updateLayout;
- (void)_updateMarquee:(float)arg1;

@end


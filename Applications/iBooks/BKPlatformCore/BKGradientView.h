//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor;

@interface BKGradientView : NSView
{
    NSColor *_midColor;
    BOOL _roundedCorners;
    BOOL _startsFromCenter;
    BOOL _horizontal;
    NSColor *_color1;
    NSColor *_color2;
    double _blendPoint;
}

@property(nonatomic, getter=isHorizontal) BOOL horizontal; // @synthesize horizontal=_horizontal;
@property(nonatomic) BOOL startsFromCenter; // @synthesize startsFromCenter=_startsFromCenter;
@property(nonatomic) BOOL roundedCorners; // @synthesize roundedCorners=_roundedCorners;
@property(nonatomic) double blendPoint; // @synthesize blendPoint=_blendPoint;
@property(copy, nonatomic) NSColor *color2; // @synthesize color2=_color2;
@property(copy, nonatomic) NSColor *color1; // @synthesize color1=_color1;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)clipCorners;
- (void)updateMidColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end


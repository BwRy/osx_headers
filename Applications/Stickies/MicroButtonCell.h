//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSActionCell.h"

@interface MicroButtonCell : NSActionCell
{
    long long mButtonType;
}

- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawUnshadeWithFrame:(struct CGRect)arg1 stickiesWindow:(id)arg2;
- (void)drawZoomWithFrame:(struct CGRect)arg1 stickiesWindow:(id)arg2;
- (void)drawCloseWithFrame:(struct CGRect)arg1 stickiesWindow:(id)arg2;
- (void)setControlType:(long long)arg1;

@end


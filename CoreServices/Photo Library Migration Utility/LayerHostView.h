//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CALayer;

@interface LayerHostView : NSView
{
    CALayer *mRootLayer;
}

- (void)dealloc;
- (id)rootLayer;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGColor *)red;
- (struct CGColor *)white;
- (struct CGColor *)black;
- (struct CGColorSpace *)genericRGBSpace;

@end

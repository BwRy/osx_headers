//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class IPKQuantizedTextLayer;

@interface IPFaceClickHelpLayer : CALayer
{
    struct CGSize _minStickySize;
    IPKQuantizedTextLayer *_labelLayer;
}

- (id).cxx_construct;
- (void)placeInFrame:(struct CGRect)arg1;
- (void)tile;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GLObject.h"

@interface GLVertex : GLObject
{
    struct _GPoint3D mPoint;
}

+ (id)vertexWithPoint:(double [3])arg1;
- (struct _GRect3D)bounds3D;
- (struct _GPoint3D)point;
- (void)render;
- (id)initWithPoint:(double [3])arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CP3DAffineTransform;

@interface CPView3DRotationController : NSObject
{
    double mLastTimeInterval;
    CP3DAffineTransform *mTransform;
    CP3DAffineTransform *mTransformSpeed;
    double mDelta[3];
    double mZoom;
}

+ (id)viewAngleFromTransform:(id)arg1;
+ (id)identifier;
+ (id)controller;
- (void)restoreDefaultState;
- (void)copyStateFrom:(id)arg1;
- (double *)zoom;
- (double *)delta;
- (id)transformSpeed;
- (id)globalTransform;
- (id)transform;
- (void)setViewAngle:(id)arg1;
- (id)viewAngle;
- (void)setSettings:(id)arg1;
- (id)settings;
- (BOOL)handleMouseDown:(id)arg1 inView:(id)arg2 withOpenGLView:(id)arg3;
- (void)mouseUp;
- (void)idle;
- (void)mouseDraggedToLocation:(struct CGPoint)arg1 withModifiers:(unsigned long long)arg2;
- (void)tiltBy:(struct CGPoint)arg1;
- (void)rotateBy:(struct CGPoint)arg1;
- (void)translateBy:(struct CGPoint)arg1;
- (void)enterBy:(struct CGPoint)arg1;
- (void)zoomBy:(struct CGPoint)arg1;
- (void)mouseDownAtLocation:(struct CGPoint)arg1;
- (id)identifier;
- (void)updateOpenGLView:(id)arg1 freeRotation:(BOOL)arg2;
- (BOOL)increasePositionAfterDelay:(double)arg1;
- (void)setViewMatrix;
- (void)dealloc;
- (id)init;

@end

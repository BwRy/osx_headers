//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QCRenderer.h"

@class QCImage;

@interface BackdropsRenderer : QCRenderer
{
}

+ (BOOL)canCreateCGLContext;
@property(readonly) BOOL finishedCapture;
@property(readonly) __weak QCImage *mask;
@property(readonly) __weak QCImage *imageWithAlpha;
@property(readonly) __weak QCImage *originalBackground;
@property(readonly) __weak QCImage *captureImage;
@property struct __CVBuffer *inputImage;
@property BOOL capture;
@property BOOL showBackgroundMotion;
- (id)initWithRenderingContext:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKAnnotation, AKPageController;

@interface AKAnnotationEventHandler : NSObject
{
    AKPageController *_pageController;
    AKAnnotation *_annotation;
    unsigned long long _initiallyDraggedArea;
}

+ (Class)_handlerClassForPlatformForAnnotation:(id)arg1;
+ (struct CGRect)annotationRectangleForDraggingBounds:(struct CGRect)arg1 forAnnotation:(id)arg2 onPageController:(id)arg3 withOriginalCenter:(struct CGPoint)arg4;
+ (id)newAnnotationEventHandlerForCurrentPlatformForAnnotation:(id)arg1 withPageController:(id)arg2;
@property unsigned long long initiallyDraggedArea; // @synthesize initiallyDraggedArea=_initiallyDraggedArea;
@property(retain) AKAnnotation *annotation; // @synthesize annotation=_annotation;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
- (void).cxx_destruct;
- (BOOL)continueDraggableAreaEventTrackingLoopWithEvent:(id)arg1 withOptionalTouches:(id)arg2;
- (BOOL)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg1 withOptionalTouches:(id)arg2;
- (double)naturalAspectRatioForAnnotation;
- (struct CGSize)naturalSizeForAnnotation;
- (BOOL)lockAspectRatioByDefault;
- (BOOL)alwaysLockAspectRatio;
- (BOOL)canLockAspectRatio;
- (id)_initWithAnnotation:(id)arg1 andPageController:(id)arg2;

@end

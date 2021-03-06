//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKEventViewController, NSMapTable;

@interface EKUIGadgetContainerAnimator : NSObject
{
    BOOL _isAnimating;
    BOOL _runningAnimations;
    EKEventViewController *_eventViewController;
    NSMapTable *_animations;
}

+ (id)animatorForEventViewController:(id)arg1;
@property BOOL runningAnimations; // @synthesize runningAnimations=_runningAnimations;
@property(retain) NSMapTable *animations; // @synthesize animations=_animations;
@property __weak EKEventViewController *eventViewController; // @synthesize eventViewController=_eventViewController;
@property BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
- (void).cxx_destruct;
- (id)_rangeForContainer:(id)arg1 withOriginOffset:(double)arg2 heightDifference:(double)arg3;
- (double)_animationLength;
- (BOOL)hasAnimations;
- (void)runAnimationsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)containsAnimationForGadgetContainer:(id)arg1;
- (void)addExpandCollapseAnimationForGadgetContainer:(id)arg1 isExpanding:(BOOL)arg2;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface IPAnimationPhase : NSObject <NSCopying>
{
    float _duration;
    struct vector<IPAnimationObject, std::allocator<IPAnimationObject>> *_objects;
}

+ (id)phase;
- (void)processAnimation:(float)arg1 context:(void *)arg2;
- (void)setDuration:(float)arg1;
- (float)duration;
- (void *)objects;
- (unsigned long long)objectCount;
- (void)addObject:(void *)arg1;
- (void)copyEndsToBegins;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

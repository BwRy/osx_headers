//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NFunction.h"

@interface NIntegrator : NFunction
{
}

+ (void)setIdleCallback:(CDUnknownFunctionPointerType)arg1;
+ (void)initDefaultValues:(id)arg1;
+ (void)setDefaults:(id)arg1;
+ (void)setDefaultIntegratorClass:(Class)arg1;
+ (Class)defaultIntegratorClass;
+ (id)integratorWithObject:(id)arg1 selector:(SEL)arg2;
- (void)idle;
- (struct _NComplex)integrateFrom:(double)arg1 to:(double)arg2;
- (struct _NComplex)memoizedIntegrateFrom:(double)arg1 to:(double)arg2 along:(unsigned long long)arg3;

@end


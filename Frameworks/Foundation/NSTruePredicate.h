//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSPredicate.h>

@interface NSTruePredicate : NSPredicate
{
}

+ (BOOL)_allowsEvaluation;
+ (BOOL)supportsSecureCoding;
+ (id)defaultInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)predicateFormat;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)autorelease;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (void)_validateForMetadataQueryScopes:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEAnnotationFilter.h"

@class AEAnnotationPredicateFilter, NSString;

@interface AEAnnotationStringFilter : NSObject <AEAnnotationFilter>
{
    AEAnnotationPredicateFilter *_predicateFilter;
    NSString *_string;
    int _fields;
    int _options;
}

+ (id)filterWithString:(id)arg1 fields:(int)arg2 options:(int)arg3;
+ (id)filterWithString:(id)arg1 options:(int)arg2;
+ (id)filterWithString:(id)arg1;
- (void).cxx_destruct;
- (id)filteredAnnotations:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)enumerateMatchesInAnnotation:(id)arg1 forField:(int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)initWithString:(id)arg1 fields:(int)arg2 options:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


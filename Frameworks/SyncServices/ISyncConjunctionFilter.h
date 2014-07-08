//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISyncFiltering.h"

@class NSArray;

@interface ISyncConjunctionFilter : NSObject <ISyncFiltering>
{
    NSArray *_filters;
    NSArray *_supportedEntityNames;
    BOOL _isAndConjunction;
    BOOL _shouldApplyUnsupportedRecords;
    BOOL _ignoreLocals;
}

- (BOOL)shouldApplyRecord:(id)arg1 withRecordIdentifier:(id)arg2;
- (id)supportedEntityNames;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilters:(id)arg1 isAndConjunction:(BOOL)arg2 shouldApplyUnsupportedRecords:(BOOL)arg3;
- (id)initWithFilters:(id)arg1 isAndConjunction:(BOOL)arg2 shouldApplyUnsupportedRecords:(BOOL)arg3 ignoreLocalRecords:(BOOL)arg4;
- (void)_computeSupportedEntityNames;

@end

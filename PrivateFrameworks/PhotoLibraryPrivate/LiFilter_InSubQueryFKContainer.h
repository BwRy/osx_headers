//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiFilter.h>

@class LiKeyPath;

@interface LiFilter_InSubQueryFKContainer : LiFilter
{
    BOOL _notIn;
    LiKeyPath *_testProperty;
    LiKeyPath *_selectProperty;
    LiFilter *_subQuery;
}

@property(nonatomic) BOOL notIn; // @synthesize notIn=_notIn;
@property(retain, nonatomic) LiFilter *subQuery; // @synthesize subQuery=_subQuery;
@property(retain, nonatomic) LiKeyPath *selectProperty; // @synthesize selectProperty=_selectProperty;
@property(retain, nonatomic) LiKeyPath *testProperty; // @synthesize testProperty=_testProperty;
- (void).cxx_destruct;
- (void)encodeToConsumer:(id)arg1 forLibrary:(id)arg2;
- (id)initWithDataProvider:(id)arg1 forLibrary:(id)arg2;
- (int)LiClassCode;
- (id)description;
- (unsigned char)filterType;
- (id)initWithTable:(id)arg1 testProperty:(id)arg2 notIn:(BOOL)arg3 subQuery:(id)arg4 selectProperty:(id)arg5;

@end

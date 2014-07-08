//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSData, NSDate, SNode, SVersionVector, VersionVector;

@interface SNodeHistory : NSManagedObject
{
}

- (id)descriptionStringWithVVReductionTable:(id)arg1;
- (void)describeToLogFormatter:(id)arg1 verbosity:(int)arg2 indent:(unsigned long long)arg3 vvReductionTable:(id)arg4;
@property(retain, nonatomic) SNode *movedTo; // @dynamic movedTo;
@property(retain, nonatomic) SNode *movedFrom; // @dynamic movedFrom;
@property(readonly, retain, nonatomic) VersionVector *srcLocationVersion;
@property(readonly, retain, nonatomic) VersionVector *srcContentsVersion;
@property(readonly, retain, nonatomic) VersionVector *dstLocationVersion;
@property(readonly, retain, nonatomic) VersionVector *dstContentsVersion;
@property(readonly, retain, nonatomic) NSData *dataForHistory;
- (void)setupNewHistoryWithData:(id)arg1 rootNode:(id)arg2 vvManager:(id)arg3;

// Remaining properties
@property(retain, nonatomic) SVersionVector *dstContentsVersionRef; // @dynamic dstContentsVersionRef;
@property(retain, nonatomic) SVersionVector *dstLocationVersionRef; // @dynamic dstLocationVersionRef;
@property(retain, nonatomic) NSDate *lastUsed; // @dynamic lastUsed;
@property(retain, nonatomic) SVersionVector *srcContentsVersionRef; // @dynamic srcContentsVersionRef;
@property(retain, nonatomic) SVersionVector *srcLocationVersionRef; // @dynamic srcLocationVersionRef;

@end

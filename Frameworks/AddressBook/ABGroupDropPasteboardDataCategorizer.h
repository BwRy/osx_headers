//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABGroupDropDestination, ABGroupDropPasteboardData, NSArray, NSMutableArray, NSMutableSet, NSSet;

@interface ABGroupDropPasteboardDataCategorizer : NSObject
{
    ABGroupDropPasteboardData *_pasteboardData;
    ABGroupDropDestination *_destination;
    NSMutableSet *_personUidsExistingInDestination;
    NSMutableArray *_linkedPersonUidsToImport;
    NSMutableSet *_groupUidsExistingInDestination;
    NSMutableSet *_groupUidsToImport;
}

@property(readonly) NSSet *groupUidsToImport; // @synthesize groupUidsToImport=_groupUidsToImport;
@property(readonly) NSSet *groupUidsExistingInDestination; // @synthesize groupUidsExistingInDestination=_groupUidsExistingInDestination;
@property(readonly) NSArray *linkedPersonUidsToImport; // @synthesize linkedPersonUidsToImport=_linkedPersonUidsToImport;
@property(readonly) NSSet *personUidsExistingInDestination; // @synthesize personUidsExistingInDestination=_personUidsExistingInDestination;
- (BOOL)hasGroupsToImport;
- (BOOL)hasPeopleToImport;
- (BOOL)canImportRecords;
- (BOOL)canAddMembers;
- (void)categorizePasteboardData;
- (void)categorizeGroupUids;
- (void)categorizeGroupUid:(id)arg1;
- (void)removeGroupsAlreadyASubgroupOfTheDestinationGroup;
- (void)removeAllGroupsIfNoDestinationGroup;
- (void)categorizePeopleUids;
- (void)removeGroupsInPersonListThatWouldCauseACycle:(id)arg1;
- (BOOL)groupWouldCauseACycleWithDestinationGroup:(id)arg1;
- (void)removePeopleAlreadyAMemberOfTheDestinationGroup;
- (void)dealloc;
- (id)initWithPasteboardData:(id)arg1 dropDestination:(id)arg2;

@end

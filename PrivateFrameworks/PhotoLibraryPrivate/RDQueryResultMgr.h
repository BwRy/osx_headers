//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray, NSMutableSet, PFDispatchQueue;

@interface RDQueryResultMgr : NSObject
{
    PFDispatchQueue *_dispatchQueue;
    NSLock *m_lock;
    NSMutableSet *m_activeQueryResults;
    NSMutableArray *m_inactiveQueryResults;
    long long m_importingLevel;
}

+ (id)sharedQueryResultMgr;
+ (id)dispatchQueue;
- (void).cxx_destruct;
- (void)respondToMemoryPressure;
- (id)dispatchQueue;
- (void)forceRegenerate:(id)arg1;
- (void)sendSortOrderChangedForQueryResult:(id)arg1;
- (void)sortOrderChangedFor:(id)arg1;
- (void)sendUserQueryChangedForQueryResult:(id)arg1;
- (void)userQueryChangedFor:(id)arg1;
- (void)sendFilterChangedForQueryResult:(id)arg1;
- (void)filterChangedFor:(id)arg1;
- (void)endImporting;
- (void)beginImporting;
- (id)sortedVersionsFromQueryResult:(id)arg1;
- (void)requestResendFullResult:(id)arg1 changeReason:(id)arg2;
- (void)purgeAllResultsForDatabaseUuid:(id)arg1;
- (void)purgeAllInactiveResults;
- (void)purgeInactiveResult:(id)arg1;
- (void)purgeOneInactiveResult;
- (void)deactivateQueryResult:(id)arg1;
- (id)queryResultForAlbumRef:(id)arg1 forAlbum:(id)arg2;
- (id)activeQueryResultForAlbum:(id)arg1;
- (void)activateQueryResult:(id)arg1;
- (id)queryResultForAlbumRef:(id)arg1;
- (void)expandContainers:(id)arg1 intoFolders:(id)arg2 intoAlbums:(id)arg3;
- (void)dealloc;
- (id)init;

@end

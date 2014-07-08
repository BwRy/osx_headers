//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSXPCStoreServerRequestHandlingPolicy : NSObject
{
}

+ (void)initialize;
- (id)processRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id *)arg3;
- (id)processPullChangesRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id *)arg3;
- (id)processSaveRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id *)arg3;
- (id)getIDsForEntity:(id)arg1 count:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (id)processFetchRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id *)arg3;
- (id)_prefetchRelationshipKey:(id)arg1 sourceEntityDescription:(id)arg2 sourceObjectIDs:(id)arg3 prefetchRelationshipKeys:(id)arg4 inContext:(id)arg5;
- (id)processFetchResults:(id)arg1 prefetchedObjects:(id)arg2 ofType:(unsigned long long)arg3;
- (id)processFaultForRelationshipWithName:(id)arg1 onObjectWithID:(id)arg2 fromClientWithContext:(id)arg3 error:(id *)arg4;
- (id)processRelationshipSourceObjectID:(id)arg1 fromClientWithContext:(id)arg2 error:(id *)arg3;
- (id)processFaultForObjectWithID:(id)arg1 fromClientWithContext:(id)arg2 error:(id *)arg3;
- (id)_coreFaultForObjectWithID:(id)arg1 fromClientWithContext:(id)arg2 error:(id *)arg3;
- (id)_coreProcessFetchRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id *)arg3;
- (id)restrictingPullChangeHistoryPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;
- (id)restrictingWritePredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;
- (id)restrictingReadPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;
- (BOOL)shouldAcceptMetadataChangesFromClientWithContext:(id)arg1;
- (BOOL)shouldAcceptConnectionsFromClientWithContext:(id)arg1;
- (id)processObtainRequest:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)prefetchRelationships:(id)arg1 forFetch:(id)arg2 sourceOIDs:(id)arg3 fromClientWithContext:(id)arg4;

@end

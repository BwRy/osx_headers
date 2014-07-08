//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObjectContext.h"

@interface NSManagedObjectContext (IMAdditions)
+ (id)mergePredicate:(id)arg1 andPredicate:(id)arg2;
- (id)entity:(id)arg1 withPredicate:(id)arg2;
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortBy:(id)arg3 ascending:(BOOL)arg4 fetchLimit:(unsigned long long)arg5;
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortBy:(id)arg3 ascending:(BOOL)arg4 fetchLimit:(unsigned long long)arg5 prefetchRelationships:(id)arg6;
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 fetchLimit:(unsigned long long)arg4 prefetchRelationships:(id)arg5;
- (id)unbatchedObjectsWithPredicate:(id)arg1 forEntity:(id)arg2;
- (id)objectIDsWithPredicate:(id)arg1 forEntity:(id)arg2;
- (id)newByClass:(Class)arg1;
- (id)copyEntityProperty:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3;
- (id)copyEntityPropertyArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(BOOL)arg5;
- (id)copyEntityPropertiesArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(BOOL)arg5;
- (id)copyEntityPropertiesArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(BOOL)arg5 distinct:(BOOL)arg6;
- (unsigned long long)countEntity:(id)arg1 withPredicate:(id)arg2;
@end

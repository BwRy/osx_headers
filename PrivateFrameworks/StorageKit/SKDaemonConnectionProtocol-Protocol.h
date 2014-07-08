//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString;

@protocol SKDaemonConnectionProtocol <NSObject>
- (void)isBusy:(void (^)(BOOL))arg1;
- (void)diskForPath:(NSString *)arg1 withCallbackBlock:(void (^)(NSDictionary *))arg2;
- (void)recacheDisk:(NSDictionary *)arg1 withCallbackBlock:(void (^)(void))arg2;
- (void)enclosingDiskAtLevel:(unsigned long long)arg1 withCallbackBlock:(void (^)(NSDictionary *))arg2;
- (void)enclosingVolumeCount:(void (^)(unsigned long long))arg1;
- (void)getFDEUsersFromDisk:(NSDictionary *)arg1 withCompletionBlock:(void (^)(NSArray *, NSError *))arg2;
- (void)unlockEncryptedDisk:(NSDictionary *)arg1 withiCloudUser:(NSString *)arg2 icloudHandle:(NSString *)arg3 withCompletionBlock:(void (^)(BOOL))arg4;
- (void)unlockEncryptedDisk:(NSDictionary *)arg1 diskUnlockPassword:(NSString *)arg2 withCompletionBlock:(void (^)(BOOL))arg3;
- (void)validateEncryptedDiskPassword:(NSDictionary *)arg1 diskUnlockPassword:(NSString *)arg2 withCompletionBlock:(void (^)(BOOL))arg3;
- (void)establishReserveKEKForDisk:(NSDictionary *)arg1 diskUnlockPassword:(NSString *)arg2 withCompletionBlock:(void (^)(BOOL))arg3;
- (void)iCloudRecoverManageFDEUsersForDisk:(NSDictionary *)arg1 icloudUser:(NSString *)arg2 icloudHandle:(NSString *)arg3 usersToRemoveArray:(NSArray *)arg4 fdeRecipe:(NSArray *)arg5 handlingProgress:(id <SKProgressHandler>)arg6 withCompletionBlock:(void (^)(NSError *))arg7;
- (void)manageFDEUsersForDisk:(NSDictionary *)arg1 diskUnlockPassword:(NSString *)arg2 removingUsers:(NSArray *)arg3 fdeRecipe:(NSArray *)arg4 handlingProgress:(id <SKProgressHandler>)arg5 withCompletionBlock:(void (^)(NSError *))arg6;
- (void)convertDiskToFDE:(NSDictionary *)arg1 withRecipe:(NSArray *)arg2 handlingProgress:(id <SKProgressHandler>)arg3 withCompletionBlock:(void (^)(NSError *))arg4;
- (void)convertDisk:(NSDictionary *)arg1 toCoreStorage:(BOOL)arg2 handlingProgress:(id <SKProgressHandler>)arg3 withCompletionBlock:(void (^)(NSDictionary *, NSError *))arg4;
- (void)getRecoverySystemInfoForDisk:(NSDictionary *)arg1 withCompletionBlock:(void (^)(NSDictionary *, NSError *))arg2;
- (void)ejectDisk:(NSDictionary *)arg1 withCompletionBlock:(void (^)(NSError *))arg2;
- (void)enableJournalingOnDisk:(NSDictionary *)arg1 withCompletionBlock:(void (^)(NSDictionary *, BOOL))arg2;
- (void)enablePermissionsOnDisk:(NSDictionary *)arg1 withCompletionBlock:(void (^)(NSDictionary *, BOOL))arg2;
- (void)ensureRecoveryForDisk:(NSDictionary *)arg1 withRecoverySystemPath:(NSString *)arg2 chunkkList:(NSString *)arg3 diagnostics:(NSString *)arg4 handlingProgress:(id <SKProgressHandler>)arg5 callbackBlock:(void (^)(NSDictionary *, NSError *))arg6;
- (void)ensureRecoveryForDisk:(NSDictionary *)arg1 withRecoverySystemPath:(NSString *)arg2 chunkkList:(NSString *)arg3 handlingProgress:(id <SKProgressHandler>)arg4 callbackBlock:(void (^)(NSDictionary *, NSError *))arg5;
- (void)blessDisk:(NSDictionary *)arg1 options:(NSDictionary *)arg2 withCallbackBlock:(void (^)(BOOL, NSError *))arg3;
- (void)compositeDisks:(NSArray *)arg1 volumeName:(NSString *)arg2 handlingProgress:(id <SKProgressHandler>)arg3 callbackBlock:(void (^)(NSError *))arg4;
- (void)removeDisk:(NSDictionary *)arg1 handlingProgress:(id <SKProgressHandler>)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)splitDisk:(NSDictionary *)arg1 toSize:(unsigned long long)arg2 newDiskRole:(NSString *)arg3 name:(NSString *)arg4 caseSensitive:(BOOL)arg5 password:(NSString *)arg6 handlingProgress:(id <SKProgressHandler>)arg7 withCompletionBlock:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg8;
- (void)mountDisk:(NSDictionary *)arg1 withCompletionBlock:(void (^)(NSError *))arg2;
- (void)unmountDisk:(NSDictionary *)arg1 withCompletionBlock:(void (^)(NSError *))arg2;
- (void)renameDisk:(NSDictionary *)arg1 to:(NSString *)arg2 withCompletionBlock:(void (^)(NSError *))arg3;
- (void)eraseDisks:(NSArray *)arg1 toRole:(NSString *)arg2 baseName:(NSString *)arg3 caseSensitive:(BOOL)arg4 password:(NSString *)arg5 handlingProgress:(id <SKProgressHandler>)arg6 withCompletionBlock:(void (^)(NSError *))arg7;
- (void)secureEraseDisk:(NSDictionary *)arg1 withEraseLevel:(int)arg2 handlingProgress:(id <SKProgressHandler>)arg3 withCompletionBlock:(void (^)(NSDictionary *, NSError *))arg4;
- (void)eraseDisk:(NSDictionary *)arg1 toRole:(NSString *)arg2 name:(NSString *)arg3 caseSensitive:(BOOL)arg4 password:(NSString *)arg5 handlingProgress:(id <SKProgressHandler>)arg6 withCompletionBlock:(void (^)(NSDictionary *, NSError *))arg7;
- (void)repairDisk:(NSDictionary *)arg1 handlingProgress:(id <SKProgressHandler>)arg2 withCompletionBlock:(void (^)(NSError *))arg3;
- (void)verifyDisk:(NSDictionary *)arg1 handlingProgress:(id <SKProgressHandler>)arg2 withCompletionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)setDiskIconWithImageData:(NSData *)arg1 forDisk:(NSDictionary *)arg2 WithReply:(void (^)(BOOL))arg3;
- (void)testConnectionWithReply:(void (^)(BOOL))arg1;
@end

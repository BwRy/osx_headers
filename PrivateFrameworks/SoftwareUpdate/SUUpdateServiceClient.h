//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SUUpdateClient.h"
#import "SUUpdateService.h"

@class NSMutableArray, NSString, NSXPCConnection;

@interface SUUpdateServiceClient : NSObject <SUUpdateService, SUUpdateClient>
{
    NSXPCConnection *_connection;
    int _clientPID;
    int _clientAuditIdentifier;
    unsigned int _clientUID;
    NSString *_clientPath;
    struct AuthorizationOpaqueRef *_installAuth;
    NSMutableArray *_acquiredRights;
    unsigned long long _transactionsStarted;
    struct dispatch_queue_s *_transactionQueue;
    struct dispatch_queue_s *_lockQueue;
}

+ (void)ignoreClientMessagesForConnection:(id)arg1;
+ (void)authorizeForUpdating:(struct AuthorizationOpaqueRef *)arg1 overConnection:(id)arg2 additionalTransactions:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
+ (void)authorizeForUpdating:(struct AuthorizationOpaqueRef *)arg1 overConnection:(id)arg2 reply:(CDUnknownBlockType)arg3;
@property(readonly, retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)authChallengeWasReceived:(id)arg1 handled:(char *)arg2;
- (void)installStateDidChange:(id)arg1 forUpdateWithProductKey:(id)arg2;
- (void)availableUpdatesDidChange;
- (void)resetServiceWithReply:(CDUnknownBlockType)arg1;
- (void)dumpServiceDebugInfo;
- (void)combinedStatusForUpdatesWithProductKeys:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)statusForUpdateWithProductKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)takeRequestsToInstallAfterPostLogoutUpdatesWithReply:(CDUnknownBlockType)arg1;
- (void)registerRequestsToInstallAfterPostLogoutUpdates:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)productKeysToAutomaticallyInstallLaterWithReply:(CDUnknownBlockType)arg1;
- (void)setAutomaticallyInstallLater:(BOOL)arg1 forProductKeys:(id)arg2 replyWhenDone:(CDUnknownBlockType)arg3;
- (void)adoptManualProductArchiveByReadingFromFileHandle:(id)arg1 archiveName:(id)arg2 displayName:(id)arg3 displayVersion:(id)arg4 allowDevSigning:(BOOL)arg5 replyWithResult:(CDUnknownBlockType)arg6;
- (void)stringRepresentationOfLongDescriptionForProductKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)stashURLCredential:(id)arg1;
- (void)commitLoginCredentials:(CDUnknownBlockType)arg1;
- (void)stashLoginCredentialsEnablingFLO:(BOOL)arg1 darkModeIsEnabled:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)productKeysToInstallAfterLogoutWithReply:(CDUnknownBlockType)arg1;
- (void)registerToInstallAfterLogoutForProductKeys:(id)arg1 nowIsLater:(BOOL)arg2 restartNow:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)cancelUpdatesForProductKeys:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)startRootModeUpdatesForProductKeys:(id)arg1 clientBlocksRestart:(BOOL)arg2 replyWhenDone:(CDUnknownBlockType)arg3;
- (void)startUpdatesForProductKeys:(id)arg1 clientBlocksRestart:(BOOL)arg2 replyWhenDone:(CDUnknownBlockType)arg3;
- (void)startDownloadingForProductKeys:(id)arg1 replyWhenDone:(CDUnknownBlockType)arg2;
- (void)calculateDiskSpaceRequiredForUpdatesWithProductKeys:(id)arg1 downloadingOnly:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)buildTagCacheIfNecessaryWithReply:(CDUnknownBlockType)arg1;
- (void)markRampedUpdatesAsSeenWithReply:(CDUnknownBlockType)arg1;
- (void)clearAllHiddenUpdatesWithReply:(CDUnknownBlockType)arg1;
- (void)setHidden:(BOOL)arg1 forProductKeys:(id)arg2 replyWhenDone:(CDUnknownBlockType)arg3;
- (void)refreshAvailableUpdatesForCurrentConfigurationLimitedToProductKeys:(id)arg1 distributionEnvironment:(id)arg2 distributionEvalutionMetainfo:(id)arg3 installedPrinters:(id)arg4 preferredLocalizations:(id)arg5 replyWhenDone:(CDUnknownBlockType)arg6;
- (void)progressForRefreshOfAvailableUpdatesWithReply:(CDUnknownBlockType)arg1;
- (void)refreshAvailableUpdates:(BOOL)arg1 preferredLocalizations:(id)arg2 replyWhenDone:(CDUnknownBlockType)arg3;
- (void)catalogInformationWithReply:(CDUnknownBlockType)arg1;
- (void)endTransactions;
- (void)takePostInstallNotificationsWithReply:(CDUnknownBlockType)arg1;
- (void)deviceInitiatedScanWithReply:(CDUnknownBlockType)arg1;
- (void)installStatus:(id)arg1 didChangeExternallyForProductKey:(id)arg2;
- (void)currentDevKeyModeWithReply:(CDUnknownBlockType)arg1;
- (void)clearInvalidationForIdentifier:(id)arg1 version:(id)arg2 forReason:(int)arg3;
- (void)packageReferenceForMatchingIdentifier:(id)arg1 productKey:(id)arg2 invalidatingPrevious:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)availableUpdatesOfType:(long long)arg1 withState:(long long)arg2 filteredByState:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)availableUpdatesOfType:(long long)arg1 withState:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)authorizeForUpdatingWithExternalFormData:(id)arg1 additionalTransactions:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (BOOL)_isAuthorizedForAppleSoftwareAsAdministrator;
- (BOOL)_isAuthorizedForAppleSoftware;
- (void)_noteAuthorizationUsed;
- (void)invalidate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

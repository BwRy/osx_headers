//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSError, NSMutableArray, NSMutableDictionary, NSURL, SUScan;

@interface SUScanController : NSObject
{
    NSMutableArray *_availableProducts;
    NSMutableDictionary *_productByKey;
    NSURL *_catalogURLFromPrefs;
    NSURL *_appleCatalogURLFromPrefs;
    NSURL *_catalogURL;
    int _catalogTrustLevel;
    NSArray *_preferredLocalizationsForLastClient;
    long long _scanState;
    SUScan *_scanInProgress;
    NSError *_lastScanError;
    NSDate *_lastCmdRScanCompleted;
    struct dispatch_queue_s *_updateInfoQueue;
    struct dispatch_queue_s *_scanRefreshQueue;
    struct dispatch_queue_s *_scanStateQueue;
    struct dispatch_queue_s *_clientNotifyQueue;
    BOOL _deviceInitiated;
    BOOL _lastScanForeground;
    BOOL _lastScanCmdR;
    CDUnknownBlockType _availableProductsDidChangeHandler;
    CDUnknownBlockType _catalogURLDidChangeHandler;
}

+ (id)sharedScanController;
@property(copy) CDUnknownBlockType catalogURLDidChangeHandler; // @synthesize catalogURLDidChangeHandler=_catalogURLDidChangeHandler;
@property(copy) CDUnknownBlockType availableProductsDidChangeHandler; // @synthesize availableProductsDidChangeHandler=_availableProductsDidChangeHandler;
- (void)_handleUpdateWhitelistDidChangeNotification:(id)arg1;
- (void)populateTagCache:(CDUnknownBlockType)arg1;
- (void)removeInapplicableLocalProducts;
- (void)clearAllHidden;
- (void)setHidden:(BOOL)arg1 forProductKeys:(id)arg2;
- (void)markFirmwareProductKeysAsWaiting:(id)arg1;
- (BOOL)checkForChangeInCatalogURL;
- (void)markRampedUpdatesAsSeen;
- (void)_clearCriticalUpdateNotificationDateIfAppropriate;
- (void)removeAvailableProductsWithKeys:(id)arg1;
- (double)currentRefreshProgress;
- (BOOL)_wasSoftwareInstalledSinceLastScan;
- (void)_refreshAvailableUpdatesFromScan:(id)arg1;
- (void)refreshAvailableProductsInForeground:(BOOL)arg1 limitedToChanged:(BOOL)arg2 evenIfConfigurationChanged:(BOOL)arg3 initiatedByDeviceConnection:(BOOL)arg4 limitedToProductKeys:(id)arg5 forCurrentConfiguration:(BOOL)arg6 distributionEnvironment:(id)arg7 distributionEvalutionMetainfo:(id)arg8 installedPrinters:(id)arg9 preferredLocalizations:(id)arg10 finish:(CDUnknownBlockType)arg11;
- (id)availableProductsForKeys:(id)arg1;
- (id)availableProductForKey:(id)arg1;
- (id)_shortDescriptionOf:(id)arg1;
- (BOOL)deviceInitiated;
- (id)availableProducts;
- (BOOL)isAppleSeedCatalog;
- (BOOL)isDefaultAppleCatalog;
- (int)catalogTrustLevel;
- (id)catalogURL;
- (void)dumpDebugInfo;
- (void)resetState;
- (void)archiveToCoder:(id)arg1;
- (void)restoreFromCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end


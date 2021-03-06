//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DUPreferences : NSObject
{
    BOOL defaultsRead;
    BOOL supportsRemoteConnections;
    BOOL runningFromCD;
    BOOL runningFromInstallMedia;
    BOOL filesystemIsReadOnly;
    BOOL debugMenuEnabled;
    BOOL allowsDiskImagesAsRAIDs;
    BOOL supportsSimpleInterface;
    BOOL showEveryPartition;
    BOOL showDetailsInFirstAid;
    BOOL useTimeEstimateForDiscRecording;
    BOOL showFileRecoveryWarning;
    BOOL restoreCanSkipVerify;
    BOOL default_debugMenuEnabled;
    BOOL default_simpleInterfaceEnabled;
    BOOL default_prefPanelEnabled;
    BOOL default_remoteConnEnabled;
    BOOL default_allowsDiskImagesAsRAIDs;
    BOOL default_showEveryPartition;
    unsigned long long default_debugMessageLevel;
    BOOL default_useTimeEstimateForDiscRecording;
    BOOL default_showFileRecoveryWarning;
}

+ (void)systemIntegrityCheck;
+ (id)sharedPreferences;
- (BOOL)restoreCanSkipVerify;
- (BOOL)showFileRecoveryWarning;
- (void)setShowFileRecoveryWarning:(BOOL)arg1;
- (BOOL)useTimeEstimateForDiscRecordingDefault;
- (BOOL)useTimeEstimateForDiscRecording;
- (void)setUseTimeEstimateForDiscRecording:(BOOL)arg1;
- (BOOL)showDetailsInFirstAid;
- (void)setShowDetailsInFirstAid:(BOOL)arg1;
- (BOOL)showEveryPartitionDefault;
- (BOOL)showEveryPartition;
- (void)setShowEveryPartition:(BOOL)arg1;
- (unsigned long long)debugMessageLevelDefault;
- (unsigned long long)debugMessageLevel;
- (void)setDebugMessageLevel:(unsigned long long)arg1;
- (BOOL)allowsDiskImagesAsRAIDsDefault;
- (BOOL)allowsDiskImagesAsRAIDs;
- (void)setAllowsDiskImagesAsRAIDs:(BOOL)arg1;
- (BOOL)remoteConnectionsEnabled;
- (void)enableRemoteConnections:(BOOL)arg1;
- (BOOL)simpleInterfaceEnabledDefault;
- (BOOL)simpleInterfaceEnabled;
- (void)enableSimpleInterface:(BOOL)arg1;
- (BOOL)debugMenuEnabled;
- (void)enableDebugMenu:(BOOL)arg1;
- (void)handleDefaultsChanged:(id)arg1;
- (BOOL)systemVersionCheck:(unsigned long long)arg1 dotVersion:(unsigned long long)arg2;
- (BOOL)rootVolumeIsReadOnly;
- (BOOL)runningFromCD;
- (BOOL)runningFromInstallMedia;
- (void)writePreferences;
- (void)dealloc;
- (id)init;
- (BOOL)debugMenuEnabledDefault;
- (id)getCompatibleProperty;
- (void)checkRunningProperties;
- (void)readPreferences;

@end


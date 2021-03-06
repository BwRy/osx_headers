//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DUSupport/DUDiskCoreStorage.h>

@class NSNumber;

@interface DUDiskCoreStorageLogicalVolume : DUDiskCoreStorage
{
    NSNumber *cachedIoKitSize;
}

@property(copy) NSNumber *cachedIoKitSize; // @synthesize cachedIoKitSize;
- (id)physicalDADisksForLogicalVolume;
- (id)coreStorageData;
- (BOOL)mountAllowed;
- (id)siblingsInCSLVG;
- (void)diskFullDescription;
- (id)coreStorageVolumeParentUUID;
- (id)coreStorageVolumeUUID;
- (id)ioKitSize;
- (id)ioContent;
- (id)coreStorageStatus;
- (id)toolTipString;
- (BOOL)isWhole;
- (id)children;
- (unsigned long long)freeSpace;
- (unsigned long long)totalSize;
- (BOOL)isCoreStorageLogicalVolumeLocked;
- (BOOL)isCoreStorageLogicalVolumeDisk;
- (int)calculateDUDiskType;
- (id)diskDisplayType;
- (id)uncachedDisplayIcon;
- (void)invalidateCachedData;
- (void)dealloc;

@end


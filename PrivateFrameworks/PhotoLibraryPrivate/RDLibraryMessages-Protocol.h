//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSSet, RDDatabase, RDModelNotification;

@protocol RDLibraryMessages

@optional
- (void)libraryDeletedVersionIds:(NSSet *)arg1 fromDatabase:(RDDatabase *)arg2;
- (void)libraryUpdatedVersion:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryCreatedVersion:(RDModelNotification *)arg1;
- (void)libraryDeletedPlaceIds:(NSSet *)arg1 fromDatabase:(RDDatabase *)arg2;
- (void)libraryCreatedPlace:(RDModelNotification *)arg1;
- (void)libraryDeletedMomentYearIds:(NSSet *)arg1 fromDatabase:(RDDatabase *)arg2;
- (void)libraryUpdatedMomentYear:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryCreatedMomentYear:(RDModelNotification *)arg1;
- (void)libraryDeletedMomentCollectionIds:(NSSet *)arg1 fromDatabase:(RDDatabase *)arg2;
- (void)libraryUpdatedMomentCollection:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryCreatedMomentCollection:(RDModelNotification *)arg1;
- (void)libraryDeletedMomentIds:(NSSet *)arg1 fromDatabase:(RDDatabase *)arg2;
- (void)libraryUpdatedMoment:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryCreatedMoment:(RDModelNotification *)arg1;
- (void)libraryDeletedMasterIds:(NSSet *)arg1 fromDatabase:(RDDatabase *)arg2;
- (void)libraryUpdatedMaster:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryCreatedMaster:(RDModelNotification *)arg1;
- (void)libraryUpdatedImageAdjustment:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryDeletedFolderIds:(NSSet *)arg1 fromDatabase:(RDDatabase *)arg2;
- (void)libraryUpdatedFolder:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryCreatedFolder:(RDModelNotification *)arg1;
- (void)libraryDeletedFaceGroupIds:(NSSet *)arg1 fromDatabase:(RDDatabase *)arg2;
- (void)libraryDeletedCustomSortEntryIds:(NSSet *)arg1 fromDatabase:(RDDatabase *)arg2;
- (void)libraryUpdatedCustomSortEntry:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryCreatedCustomSortEntry:(RDModelNotification *)arg1;
- (void)libraryUpdatedCloudResource:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryDeletedAttachmentIds:(NSSet *)arg1 fromDatabase:(RDDatabase *)arg2;
- (void)libraryCreatedAttachment:(RDModelNotification *)arg1;
- (void)libraryDeletedAlbumIds:(NSSet *)arg1 fromDatabase:(RDDatabase *)arg2;
- (void)libraryUpdatedAlbum:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryCreatedAlbum:(RDModelNotification *)arg1;
@end


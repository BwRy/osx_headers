//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDLibraryBaseUpgradeAction.h>

@class NSMutableDictionary, NSMutableSet, RDProgress;

@interface RDLibraryCombinedUpgradeAction_0_368 : RDLibraryBaseUpgradeAction
{
    RDProgress *_overallProgress;
    int _mdMigrationSpinlock;
    NSMutableDictionary *_mastersById;
    NSMutableSet *_mastersToBeFingerprinted;
    NSMutableDictionary *_keywords;
}

- (void).cxx_destruct;
- (void)albumMigrationMigrateMultiItemQuery:(id)arg1;
- (void)albumMigrationMigrateKeywordsQuery:(id)arg1;
- (void)albumMigrationMigrateSingleItemQuery:(id)arg1 withMultiItemQuery:(id)arg2;
- (void)albumMigrationHandleUnratedKeyword:(id)arg1 forSingleItemQuery:(id)arg2 inMultiItemQuery:(id)arg3;
- (void)startAlbumMigrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)albumMigrationSmartAlbumForFlaggedImages;
- (void)updateVersionKeywords:(id)arg1;
- (id)keywordForColorIndex:(long long)arg1;
- (id)keywordForRating:(long long)arg1;
- (id)keywordWithStringValue:(id)arg1;
- (void)flattenKeywordsFixParentRelations:(id)arg1 inArray:(id)arg2;
- (void)flattenKeywordsFindDuplicatesInTable:(id)arg1 returnDupKeywords:(id *)arg2 andSwapList:(id *)arg3;
- (void)flattenKeywordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)startProjectSubstructureRelocationWithCompletion:(CDUnknownBlockType)arg1;
- (void)migrateContainers:(id)arg1 toParentFolder:(id)arg2;
- (void)createAlbumFromProject:(id)arg1 withParentFolder:(id)arg2;
- (BOOL)projectSubstructureProjectHasSubstructure:(id)arg1;
- (id)projectSubstructureAlbumsFromProject:(id)arg1;
- (void)projectSubstructureMoveLegacyCollectionsToAlbums;
- (id)migrateMetadataVersionsWithEditedIPTC:(id)arg1 usingVersionExifNumberProperties:(id)arg2;
- (void)migrateMetadataUpdateEditedIPTCForVersion:(id)arg1 withProperties:(id)arg2 uniqueStringMap:(id)arg3;
- (void)migrateMetadataUpdateStringPropertyForVersion:(id)arg1 withProperties:(id)arg2 uniqueStringMap:(id)arg3 isIPTC:(BOOL)arg4 reportedMissingIds:(id)arg5 reportedMissingKeypaths:(id)arg6;
- (id)migrateMetadataVersionMapForPropertiesWithTable:(id)arg1 returningProperties:(id)arg2 mapKeyPath:(id)arg3 pmrKey:(id)arg4;
- (void)migrateMetadataPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)startGeneratingMasterFingerprintsWithCompletion:(CDUnknownBlockType)arg1;
- (void)startThumbnailExtractionForVersions:(id)arg1 proxies:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updatePlacesWithCompletion:(CDUnknownBlockType)arg1;
- (void)startPrintProductMigrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)startFaceMigrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)startMomentUpgradeWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteAllFromTable:(id)arg1 group:(id)arg2;
- (void)updateMasters:(id)arg1;
- (void)upgradeVersions:(id)arg1 andProxies:(id)arg2 withAdjustments:(id)arg3;
- (void)dataCleanupWithCompletion:(CDUnknownBlockType)arg1;
- (void)upgradeFromSonomaMendocinoLibraryWithCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)taskAction;
- (id)initWithDatabase:(id)arg1;

@end


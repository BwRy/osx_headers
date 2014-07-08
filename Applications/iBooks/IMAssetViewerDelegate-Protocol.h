//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@protocol IMAssetViewerDelegate <NSObject>
- (void)warnAboutDesktopSupportForAsset:(id <BKAsset>)arg1;
- (void)pluginWillCloseForAsset:(id <BKAsset>)arg1;
- (void)showCorruptBookAndClose:(id <BKAsset>)arg1;
- (void)updateAsset:(id <BKAsset>)arg1;
- (BOOL)closeAsset:(NSString *)arg1 flags:(unsigned long long)arg2 error:(id *)arg3;
- (NSURL *)storeURLForAsset:(id <BKAsset>)arg1;
- (BOOL)openStorePageForAsset:(id <BKAsset>)arg1 error:(id *)arg2;
- (BOOL)hasUpsellPageForAsset:(id <BKAsset>)arg1 isPictureBook:(BOOL)arg2;
- (BOOL)areCitationsAllowedForAsset:(id <BKAsset>)arg1;
@end

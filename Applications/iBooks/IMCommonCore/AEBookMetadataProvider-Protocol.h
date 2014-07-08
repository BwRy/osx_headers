//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@protocol AEBookMetadataProvider <NSObject>
- (BOOL)isManagedWithAssetID:(NSString *)arg1;
- (NSString *)pathToContextDirectoryForAssetID:(NSString *)arg1;
- (NSString *)bookVersionStringForAssetID:(NSString *)arg1;
- (NSURL *)assetURLForAssetID:(NSString *)arg1;
@end

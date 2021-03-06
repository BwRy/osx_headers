//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface NSPersistentUISecureURLHerder : NSObject
{
    NSMutableDictionary *urlsStashedInLSToSharedFileListItemRefs;
    void *lsSharedFileList;
    NSString *bundleID;
}

- (void)setLSPersistentFileList:(id)arg1;
- (void)resolveSecurityScopedURLsFromRecords:(id)arg1;
- (void)fetchAndConsumeLSPersistentFileList;
- (struct OpaqueLSSharedFileListRef *)getLSPersistentFileList;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PVMessageTracer : NSObject
{
}

+ (void)logFeatureNamed:(id)arg1;
+ (BOOL)canLogFeature;
+ (void)logToolWithTag:(long long)arg1 accessedFromSender:(id)arg2;
+ (BOOL)canLogTool;
+ (void)logEditOnFileType:(id)arg1 subtoolbarShown:(BOOL)arg2 isFirstEditOnDocument:(BOOL)arg3;
+ (BOOL)canLogEdit;
+ (void)logSearchWithResultOrdering:(unsigned long long)arg1 isFirstSearchOnWindow:(BOOL)arg2;
+ (void)_logSearchWithResultOrdering:(id)arg1;
+ (BOOL)canLogSearch;
+ (void)logWindowOpenedWithTotalFiles:(unsigned long long)arg1 pdfFiles:(unsigned long long)arg2 imageFiles:(unsigned long long)arg3 quickLookFiles:(unsigned long long)arg4 colladaFiles:(unsigned long long)arg5 isMixedContainerWindow:(BOOL)arg6;
+ (BOOL)canLogWindowOpening;
+ (void)logFileOpenedWithUTI:(id)arg1 fileCount:(unsigned long long)arg2 openingMode:(long long)arg3;
+ (BOOL)canLogFileOpening;

@end

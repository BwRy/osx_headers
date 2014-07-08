//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KHProduct, KHProject, NSArray, NSDictionary, NSString, NSURL;

@protocol KHPhotoAppDelegateProtocol <NSObject>
- (NSString *)userProjectDatabasePath;
- (NSString *)themesUpgradeDatabasePath;
- (NSString *)themesDatabasePath;

@optional
- (void)logMessageTracerWithDomain:(NSString *)arg1 values:(NSDictionary *)arg2;
- (void)stopPerformanceMonitoringTimerAndReportWithKey:(NSString *)arg1 comment:(NSString *)arg2;
- (void)startPerformanceMonitoringTimer;
- (id <KHImageFilterProtocol>)imageFilterWithName:(NSString *)arg1;
- (NSArray *)imageFilterNames;
- (NSString *)pdfCreatorString;
- (NSString *)learnMoreHTMLContentForProduct:(KHProduct *)arg1;
- (NSURL *)learnMoreURLForProduct:(KHProduct *)arg1;
- (NSURL *)letterpressVideoURL;
- (NSString *)temporaryDirectory;
- (struct CGSize)exportImageForPhotoWithUID:(NSString *)arg1 toPath:(NSString *)arg2 maxFileSize:(unsigned long long)arg3 maxImageDimension:(long long)arg4 quality:(double)arg5 forceSRGBColorSpace:(BOOL)arg6;
- (void)changedNameOfProject:(KHProject *)arg1;
- (NSString *)conversionRoot;
- (void)photoWithUUID:(NSString *)arg1 removedFromProject:(KHProject *)arg2;
- (void)photoWithUUID:(NSString *)arg1 addedToProject:(KHProject *)arg2;
- (void)photos:(NSArray *)arg1 addedToProject:(KHProject *)arg2;
- (void)createdProject:(KHProject *)arg1 withPhotos:(NSArray *)arg2;
@end

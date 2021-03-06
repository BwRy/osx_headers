//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FTRegion, NSArray, NSError, NSString;

@interface RegionController : NSObject
{
    NSArray *_cachedRegions;
    BOOL _regionsLoaded;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) BOOL regionsLoaded; // @synthesize regionsLoaded=_regionsLoaded;
@property(readonly, nonatomic) NSArray *regions; // @synthesize regions=_cachedRegions;
- (void).cxx_destruct;
- (void)_profileValidationStatusChanged:(id)arg1;
- (void)_profileChanged:(id)arg1;
- (void)_regionsFinishedLoading:(id)arg1;
- (void)_postUpdateUINotification;
- (void)setFTRegion:(id)arg1;
@property(readonly, nonatomic) __weak NSString *debugProfileValidationStatus;
@property(readonly, nonatomic) __weak NSError *profileValidationError;
@property(readonly, nonatomic) long long profileValidationStatus;
@property(readonly, nonatomic) __weak FTRegion *currentRegion;
@property(readonly, nonatomic) __weak NSString *basePhoneNumber;
@property(readonly, nonatomic) __weak NSString *regionID;
- (void)dealloc;
- (id)init;

@end


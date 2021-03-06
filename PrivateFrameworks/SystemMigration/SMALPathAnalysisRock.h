//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMALRock.h>

@class NSArray, NSString;

@interface SMALPathAnalysisRock : SMALRock
{
    NSString *_operation;
    NSArray *_paths;
    NSArray *_omitPaths;
    id _result;
}

+ (id)rockWithPayload:(id)arg1;
+ (id)rockID;
+ (id)pathAnalysis;
- (void).cxx_destruct;
- (BOOL)success;
- (BOOL)returnsData;
- (BOOL)setResult:(id)arg1;
- (id)resultData;
- (BOOL)keepAlive;
- (id)description;
- (id)requestPayload;
- (BOOL)isHandshake;
- (id)result;
- (id)initWithOperation:(id)arg1 paths:(id)arg2 omitPaths:(id)arg3;
- (id)_resultDictionary;
- (id)slingshotServerInformation;

@end


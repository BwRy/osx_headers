//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetCache, AVAssetInspectorLoader, AVAssetResourceLoader, NSArray, NSURL;

@interface AVURLAssetInternal : NSObject
{
    AVAssetInspectorLoader *loader;
    NSURL *URL;
    NSArray *tracks;
    AVAssetResourceLoader *resourceLoader;
    long long makeOneResourceLoaderOnly;
    struct dispatch_queue_s *tracksAccessQueue;
    AVAssetCache *assetCache;
    BOOL shouldMatchDataInCacheByURLPathComponentOnly;
    BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;
    BOOL shouldOptimizeAccessForLinearMoviePlayback;
    BOOL shouldPrepareToOptimizeForExclusivePlayback;
    NSURL *downloadDestinationURL;
    unsigned long long referenceRestrictions;
}

@end

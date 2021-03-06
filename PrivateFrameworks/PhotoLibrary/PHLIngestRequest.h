//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSString, PHLIngestAsset;

@interface PHLIngestRequest : NSObject <NSSecureCoding>
{
    NSString *_uuid;
    PHLIngestAsset *_masterAsset;
    PHLIngestAsset *_renderedAsset;
    PHLIngestAsset *_thumbnailAsset;
    NSArray *_adjustments;
    NSDictionary *_metadataProperties;
    NSDictionary *_userInfo;
    long long _options;
}

+ (BOOL)supportsSecureCoding;
@property long long options; // @synthesize options=_options;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain) NSDictionary *metadataProperties; // @synthesize metadataProperties=_metadataProperties;
@property(retain) NSArray *adjustments; // @synthesize adjustments=_adjustments;
@property(retain) PHLIngestAsset *thumbnailAsset; // @synthesize thumbnailAsset=_thumbnailAsset;
@property(retain) PHLIngestAsset *renderedAsset; // @synthesize renderedAsset=_renderedAsset;
@property(retain) PHLIngestAsset *masterAsset; // @synthesize masterAsset=_masterAsset;
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (BOOL)isOptionSet:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMasterAsset:(id)arg1 renderedAsset:(id)arg2 thumbnailAsset:(id)arg3 adjustments:(id)arg4 metadataProperties:(id)arg5 userInfo:(id)arg6 options:(long long)arg7;
- (id)initWithMasterAsset:(id)arg1 renderedAsset:(id)arg2 thumbnailAsset:(id)arg3 adjustments:(id)arg4 metadataProperties:(id)arg5 userInfo:(id)arg6;

@end


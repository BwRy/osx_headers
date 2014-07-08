//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSMutableArray, NSString, StationeryCompositeImageView;

@interface StationeryCompositeImage : NSObject
{
    NSData *_baseImageData;
    NSData *_overlayImageData;
    NSMutableArray *_userImages;
    BOOL _isReadOnly;
    NSArray *_masks;
    StationeryCompositeImageView *_view;
    NSString *_contentID;
    NSString *_preferredFilename;
    unsigned long long _index;
}

@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) BOOL isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property(copy, nonatomic) NSString *preferredFilename; // @synthesize preferredFilename=_preferredFilename;
@property(copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(nonatomic) __weak StationeryCompositeImageView *view; // @synthesize view=_view;
@property(copy, nonatomic) NSArray *masks; // @synthesize masks=_masks;
- (void).cxx_destruct;
- (id)fileWrapper;
- (BOOL)isPlaceholder;
- (id)filename;
- (void)setFilename:(id)arg1;
- (unsigned long long)approximateSize;
- (id)filenameForCompositedImage;
- (id)mimeTypeForCompositedImage;
- (id)dataForCompositedImage;
- (unsigned long long)numberOfDropZones;
- (id)userImagesToSave;
- (id)userImages;
- (void)addUserImage:(id)arg1;
- (id)overlayImage;
- (void)setOverlayImageData:(id)arg1;
- (id)baseImage;
- (void)setBaseImageData:(id)arg1;
- (BOOL)isValid;
- (id)data;
- (id)initWithData:(id)arg1;
- (id)init;

@end

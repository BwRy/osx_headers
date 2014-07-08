//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBAsset.h"

@class NSImage, NSURL;

@interface PBImageAsset : PBAsset
{
    NSURL *_originalurl;
    struct __CFDictionary *_imageProperties;
    NSImage *_image;
    NSImage *_originalImage;
}

- (void).cxx_destruct;
- (void)flip;
- (id)bitmapImages;
- (BOOL)loadPreviewImage;
- (id)fullOriginalImage;
- (void)performUndoDelete;
- (void)performDelete;
- (id)originalFilename;
- (id)originalURL;
- (BOOL)exportOriginalTo:(id)arg1;
- (BOOL)canExportOriginal;
- (id)initWithURL:(id)arg1 originalURL:(id)arg2;
- (id)initWithImage:(id)arg1 andOriginal:(id)arg2;

@end

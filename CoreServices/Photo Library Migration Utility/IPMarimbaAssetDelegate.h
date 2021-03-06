//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPAssetKeyDelegate.h"

@class IPMarimbaKeepsakeRenderer, IPMarimbaSlideshow, ImageDB, NSMutableDictionary;

@interface IPMarimbaAssetDelegate : NSObject <MPAssetKeyDelegate>
{
    ImageDB *_db;
    IPMarimbaKeepsakeRenderer *_keepsakeRenderer;
    IPMarimbaSlideshow *_slideshow;
    NSMutableDictionary *_mapImages;
}

- (id)flightPlanFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
- (id)mapTileForPath:(id)arg1;
- (id)mapTileCenteredAt:(id)arg1 size:(struct CGSize)arg2 inset:(struct CGSize)arg3;
- (id)relativeTiledPathsForAssetWithAttributes:(id)arg1;
- (struct CGImage *)retainedCGImageForAssetKey:(id)arg1 andSize:(struct CGSize)arg2;
- (id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;
- (id)absolutePathForAssetKey:(id)arg1 andSize:(struct CGSize)arg2;
- (id)absolutePathForAssetKey:(id)arg1;
- (id)thumbnailForAssetPath:(id)arg1;
- (id)stillThumbnailForAssetPath:(id)arg1;
- (id)pathForAssetPath:(id)arg1;
- (id)stillPathForAssetPath:(id)arg1;
- (long long)indexForAssetPath:(id)arg1;
- (void)dealloc;
- (id)keepsakeRenderer;
- (id)initWithDB:(id)arg1 slideshow:(id)arg2;
- (id)initWithKeepsakeRenderer:(id)arg1;

@end


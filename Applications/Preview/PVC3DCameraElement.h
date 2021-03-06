//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PVMediaElementBase.h"

#import "PVAdjustColorProvider.h"

@class CIImage, NSDictionary, NSObject<PVC3DCameraElementDelegate>, NSString, NSURL, PVCIFilterStack, PVMediaContainerBase, SCNNode, SCNRenderer, SCNScene;

@interface PVC3DCameraElement : PVMediaElementBase <PVAdjustColorProvider>
{
    double _currentTime;
    struct CGImage *_thumbnail;
    CIImage *_thumbnailBaseImage;
    SCNNode *_camera;
    SCNNode *_userEditedCamera;
    SCNScene *_scene;
    SCNRenderer *_firstThumbnailRenderer;
    NSString *_uuid;
    NSString *_imageTitle;
    NSURL *_fileURL;
    PVCIFilterStack *_filterStack;
    NSObject<PVC3DCameraElementDelegate> *_delegate;
    CIImage *_sourceCIImageForHistogram;
    NSDictionary *_exportUserInfo;
    struct CGSize _lastCanvasSize;
    long long _thumbnailChangeCount;
}

@property(copy, nonatomic) NSString *imageTitle; // @synthesize imageTitle=_imageTitle;
@property(readonly, retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, retain) SCNNode *camera; // @synthesize camera=_camera;
@property(readonly, retain) SCNScene *scene; // @synthesize scene=_scene;
@property(copy) SCNNode *userEditedCamera; // @synthesize userEditedCamera=_userEditedCamera;
@property NSObject<PVC3DCameraElementDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)discardLayer;
- (id)layerForView:(id)arg1 scaleFactor:(double)arg2 zoomCenter:(struct CGPoint)arg3;
- (id)cachedLayer;
- (BOOL)canRenderToLayer;
- (void)cancelWritingMovie;
- (struct CGSize)closestAcceptableSize:(struct CGSize)arg1;
- (id)imageToEncodeForRequest:(id)arg1 withProposedImage:(id)arg2;
- (BOOL)writeMovieToURL:(id)arg1 withSize:(struct CGSize)arg2 delegate:(id)arg3;
- (void)_exportAsMovieFinished:(id)arg1 userInfo:(void *)arg2;
- (void)releaseCachedHistogramData;
- (void)setFilterStack:(id)arg1;
@property(readonly, retain) PVCIFilterStack *filterStack;
- (id)adjustedCIImageForHistogram;
- (void)_handleFiltersChanged:(id)arg1;
- (id)sourceCIImageForHistogram;
- (id)applyFiltersToImage:(id)arg1;
- (id)applyFilters:(id)arg1 toImage:(id)arg2;
- (BOOL)hasFilter;
@property struct CGSize lastCanvasSize;
- (void)refreshThumbnailTimerFired;
- (void)scheduleRefreshThumbnailTask;
- (void)bumpThumbnailChangeCount;
- (unsigned long long)EXIFOrientation;
- (struct CGColorSpace *)outputColorSpace;
- (void)rotateLeft;
- (void)rotateRight;
@property(readonly) unsigned long long pageIndex;
- (BOOL)isEdited;
@property(readonly) id imageView;
- (id)thumbnailImageOfSize:(struct CGSize)arg1;
@property PVMediaContainerBase *parentContainer;
- (BOOL)isC3DElement;
- (void)imageState;
- (struct CGImage *)imageWithDefaultSize;
- (struct CGImage *)imageWithSize:(struct CGSize)arg1;
- (struct CGImage *)imageWithSize:(struct CGSize)arg1 andFilterApplied:(BOOL)arg2;
- (struct CGImage *)imageWithRenderer:(id)arg1 andSize:(struct CGSize)arg2 andFilterApplied:(BOOL)arg3;
- (struct CGImage *)CGImage:(int)arg1;
- (id)CIImage:(int)arg1;
- (BOOL)supportsRAWVersion2;
- (id)imageProperties;
@property double currentTime;
- (struct CGImage *)thumbnail;
- (id)imageRepresentation;
- (id)imageRepresentationType;
- (id)imageUID;
- (id)thumbnailRenderer;
- (void)dealloc;
- (id)initWithScene:(id)arg1 andCamera:(id)arg2 withName:(id)arg3 parentContainer:(id)arg4;

@end


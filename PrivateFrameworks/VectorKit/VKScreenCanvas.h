//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VKAnimationRunner.h"
#import "VKCameraControllerDelegate.h"
#import "VKCameraDelegate.h"
#import "VKWorldDelegate.h"

@class NSArray, NSMutableArray, NSString, VKCamera, VKDispatch, VKLayoutContext, VKMemoryObserver, VKScene, VKWorld;

__attribute__((visibility("hidden")))
@interface VKScreenCanvas : NSObject <VKWorldDelegate, VKAnimationRunner, VKCameraControllerDelegate, VKCameraDelegate>
{
    VKDispatch *_dispatch;
    VKWorld *_world;
    VKCamera *_camera;
    VKScene *_scene;
    VKLayoutContext *_layoutContext;
    id <MDRenderTarget> _displayTarget;
    BOOL _needsLayout;
    unsigned int _wantsLayout;
    unsigned int _needsRepaint;
    BOOL _userIsGesturing;
    BOOL _iconsShouldAlignToPixels;
    NSMutableArray *_cameraControllers;
    float _debugFramesPerSecond;
    BOOL _rendersInBackground;
    NSMutableArray *_animations[2];
    VKMemoryObserver *_memoryObserver;
    BOOL _isInBackground;
    BOOL _isHidden;
    struct VKEdgeInsets _edgeInsets;
    struct VKEdgeInsets _fullyOccludedEdgeInsets;
    struct VKEdgeInsets _labelEdgeInsets;
    BOOL _deallocing;
    BOOL _needsInitialization;
    struct unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue>> _renderQueue;
    struct MapCamera *_mapCamera;
    struct RenderTree *_mapScene;
    Matrix_5173352a _bgColor;
    id <MDMapControllerDelegate> _mapDelegate;
}

@property(readonly, nonatomic) NSArray *cameraControllers; // @synthesize cameraControllers=_cameraControllers;
@property(readonly, nonatomic) Matrix_5173352a bgColor; // @synthesize bgColor=_bgColor;
@property(readonly, nonatomic) BOOL needsInitialization; // @synthesize needsInitialization=_needsInitialization;
@property(nonatomic) id <MDMapControllerDelegate> mapDelegate; // @synthesize mapDelegate=_mapDelegate;
@property(nonatomic) struct VKEdgeInsets fullyOccludedEdgeInsets; // @synthesize fullyOccludedEdgeInsets=_fullyOccludedEdgeInsets;
@property(nonatomic) BOOL iconsShouldAlignToPixels; // @synthesize iconsShouldAlignToPixels=_iconsShouldAlignToPixels;
@property(readonly, nonatomic) VKCamera *camera; // @synthesize camera=_camera;
@property(nonatomic) float debugFramesPerSecond; // @synthesize debugFramesPerSecond=_debugFramesPerSecond;
@property(readonly, nonatomic) VKWorld *world; // @synthesize world=_world;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)edgeInsetsDidEndAnimating;
- (void)edgeInsetsWillBeginAnimating;
@property(nonatomic) BOOL rendersInBackground;
- (void)cameraController:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 canZoomInDidChange:(BOOL)arg2;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)cameraController:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
- (void)cameraController:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2;
- (void)removeCameraController:(id)arg1;
- (void)addCameraController:(id)arg1;
@property(nonatomic) long long targetDisplay;
@property(nonatomic, getter=isGesturing) BOOL gesturing;
- (void)cameraDidChange:(id)arg1;
- (void)animationDidResume:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (void)runOrAdoptAnimation:(id)arg1 run:(BOOL)arg2;
- (void)runAnimation:(id)arg1;
- (void)worldDisplayDidChange:(id)arg1;
- (void)worldLayoutDidChange:(id)arg1;
- (void)_queueUpdateDisplayLinkStatus;
- (void)setContentsScale:(double)arg1;
- (void)forceLayout;
- (void)resetRenderQueue:(shared_ptr_06328420)arg1;
- (void)updateCameraForFrameResize;
- (void)didPresent;
- (void)layoutRenderQueue:(shared_ptr_06328420)arg1;
- (void)gglWillDrawWithTimestamp;
- (void)animateWithTimestamp:(double)arg1;
@property(nonatomic) struct VKEdgeInsets labelEdgeInsets;
@property(nonatomic) struct VKEdgeInsets edgeInsets;
- (void)updateWithTimestamp:(double)arg1;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (BOOL)currentSceneRequiresMSAA;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)arg1;
- (BOOL)updateDisplayLinkStatus;
- (BOOL)wantsTimerTick;
- (BOOL)wantsRender;
- (BOOL)canRender;
- (void)clearSceneIsEffectivelyHidden:(BOOL)arg1;
- (void)transferAnimationsTo:(id)arg1;
- (void)adoptAnimation:(id)arg1;
- (void)dealloc;
- (void)initializeWithRenderer:(struct GLRenderer *)arg1;
- (id)initWithTarget:(id)arg1 device:(const shared_ptr_807ec9ac *)arg2 inBackground:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

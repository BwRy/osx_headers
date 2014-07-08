//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TScriptableWindowController.h"

#import "ISpawnOriginDelegateProtocol.h"
#import "NSWindowDelegate.h"
#import "QLSeamlessCloserDelegate.h"

@class NSString;

@interface TBaseBrowserWindowController : TScriptableWindowController <NSWindowDelegate, QLSeamlessCloserDelegate, ISpawnOriginDelegateProtocol>
{
    long long _validatorID;
}

- (short)handleAction:(SEL)arg1 sender:(id)arg2;
- (_Bool)validateTargetForMenuItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1 withObject:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (long long)validatorID;
- (id)seamlessCloserSourcePreviewViewForPreviewItem:(id)arg1;
- (id)seamlessCloserTransitionImageForPreviewItem:(id)arg1 contentRect:(struct CGRect *)arg2;
- (struct CGRect)seamlessCloserSourceFrameOnScreenForPreviewItem:(id)arg1;
- (id)quickLookSharedPreviewViewForPreviewNode:(const struct TFENode *)arg1;
- (id)zoomImageForNode:(const struct TFENode *)arg1 contentRect:(struct CGRect *)arg2;
- (struct CGRect)globalZoomRectForNode:(const struct TFENode *)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (id)activeBaseBrowserViewController;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

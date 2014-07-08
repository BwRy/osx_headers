//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FSKeepsakeShelfProtocol.h"
#import "MultiPaneContentControllerProtocol.h"

@class KHLightboxOverlayView, MultiPaneController;

@interface MWKeepsakeViewController : NSObject <MultiPaneContentControllerProtocol, FSKeepsakeShelfProtocol>
{
    MultiPaneController *_controller;
    KHLightboxOverlayView *_lightbox;
}

- (void)duplicateAlbum:(id)arg1;
- (void)recycleAlbum:(id)arg1;
- (void)getStartedDidClick;
- (void)didSelectAlbum:(id)arg1;
- (void)didDoubleClickAlbum:(id)arg1;
- (void)wasInstalledInMultiPane:(id)arg1;
- (void)willBeUninstalledFromMultiPane:(id)arg1;
- (void)willBeInstalledInMultiPane:(id)arg1;
- (void)moveKeepsakeAlbum:(id)arg1 beforeAlbum:(id)arg2;
- (void)playSlideshowButtonAction:(id)arg1;
- (void)populateFooterToolbarForMultiPane:(id)arg1;
- (BOOL)wantsFooterToolbarForMultiPane:(id)arg1;
- (void)setSizeIncrement:(double)arg1;
- (double)sizeIncrement;
- (void)installSelection:(struct IPSelectionList *)arg1;
- (struct IPSelectionList *)retrieveSelection;
- (BOOL)hasSelection;

@end

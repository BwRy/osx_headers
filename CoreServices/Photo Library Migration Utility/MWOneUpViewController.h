//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MultiPaneContentControllerProtocol.h"

@class MultiPaneController;

@interface MWOneUpViewController : NSObject <MultiPaneContentControllerProtocol>
{
    MultiPaneController *_controller;
}

- (void)populateFooterToolbarForMultiPane:(id)arg1;
- (BOOL)wantsFooterToolbarForMultiPane:(id)arg1;
- (void)populateHeaderToolbarForMultiPane:(id)arg1;
- (BOOL)wantsHeaderToolbarForMultiPane:(id)arg1;
- (void)setSizeIncrement:(double)arg1;
- (double)sizeIncrement;
- (void)installSelection:(struct IPSelectionList *)arg1;
- (struct IPSelectionList *)retrieveSelection;
- (BOOL)hasSelection;
- (void)setMultiPaneController:(id)arg1;

@end

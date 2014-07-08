//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class IPKButton, NSDictionary, NSURL;

@interface IWSharingActivityTileView : NSView
{
    NSDictionary *sharingActivityInfo;
    BOOL isHighlighted;
    NSURL *cachedClickURL;
    IPKButton *_clickableButton;
}

@property(retain) NSURL *cachedClickURL; // @synthesize cachedClickURL;
@property BOOL isHighlighted; // @synthesize isHighlighted;
@property(retain) NSDictionary *sharingActivityInfo; // @synthesize sharingActivityInfo;
- (void)copyPasteboardContent:(id)arg1;
- (id)pasteboardContent;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)mouseDragged:(id)arg1;
- (BOOL)photoPublishedUIDIsLegacyIdentifier;
- (id)photoPublishedUID;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (id)copyToPasteboardMenuTitle;
- (id)menuForEvent:(id)arg1;
- (id)determineClickURL;
- (id)clickURL;
- (void)performClickAction;
- (BOOL)shouldShowClickableIcon;
- (BOOL)isClickable;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawDateWithFrame:(struct CGRect)arg1;
- (id)dateTextCell;
- (id)defaultShadow;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)recalculateFrameForContent;
- (void)configureDateFormatter:(id)arg1;
- (void)configureTextFieldCell2:(id)arg1;
- (void)configureTextFieldCell:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)dealloc;
- (void)viewDidMoveToWindow;
- (id)tileSecondaryText;
- (id)tileText;
- (id)tileIcon;
- (void)refresh;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)validateSharingActivityInfo;
- (id)initWithFrame:(struct CGRect)arg1;

@end

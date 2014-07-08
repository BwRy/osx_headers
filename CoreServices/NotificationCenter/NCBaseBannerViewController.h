//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NCBannerModel;

@interface NCBaseBannerViewController : NSViewController
{
    BOOL _allowSingleLineMode;
    BOOL _lockscreenMode;
    BOOL _contentClipped;
    int _heightMode;
    NCBannerModel *_value;
    id <NCBannerViewControllerDelegate> _delegate;
}

@property __weak id <NCBannerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NCBannerModel *value; // @synthesize value=_value;
@property(nonatomic) int heightMode; // @synthesize heightMode=_heightMode;
@property BOOL contentClipped; // @synthesize contentClipped=_contentClipped;
@property(nonatomic) BOOL lockscreenMode; // @synthesize lockscreenMode=_lockscreenMode;
@property(nonatomic) BOOL allowSingleLineMode; // @synthesize allowSingleLineMode=_allowSingleLineMode;
- (void).cxx_destruct;
- (BOOL)updateBodyWidthConstraint;
- (_Bool)updateLiveDate;
- (void)addTalkingAlertProperties:(id)arg1;
- (void)updateViewsFromModel;
- (void)setLockscreenModeWithoutUpdate:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

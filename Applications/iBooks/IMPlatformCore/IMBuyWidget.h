//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class IMCustomButton, IMCustomDisclosureButton, NSImageView, NSString, NSTabView, NSTextField;

@interface IMBuyWidget : NSView
{
    BOOL _storeEnabled;
    BOOL _downloading;
    id <IMBuyWidgetActionDelegate> _actionDelegate;
    NSString *_price;
    NSTabView *_tabView;
    IMCustomButton *_buyButton;
    IMCustomDisclosureButton *_disclosureButton;
    NSTextField *_downloadingTextField;
    NSImageView *_downloadingBackgroundView;
}

+ (double)minimumWidth;
+ (double)standardHeight;
@property(retain, nonatomic) NSImageView *downloadingBackgroundView; // @synthesize downloadingBackgroundView=_downloadingBackgroundView;
@property(retain, nonatomic) NSTextField *downloadingTextField; // @synthesize downloadingTextField=_downloadingTextField;
@property(retain, nonatomic) IMCustomDisclosureButton *disclosureButton; // @synthesize disclosureButton=_disclosureButton;
@property(retain, nonatomic) IMCustomButton *buyButton; // @synthesize buyButton=_buyButton;
@property(retain, nonatomic) NSTabView *tabView; // @synthesize tabView=_tabView;
@property(nonatomic, getter=isDownloading) BOOL downloading; // @synthesize downloading=_downloading;
@property(nonatomic, getter=isStoreEnabled) BOOL storeEnabled; // @synthesize storeEnabled=_storeEnabled;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(nonatomic) __weak id <IMBuyWidgetActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void).cxx_destruct;
- (void)_buyWidgetMenuHit:(id)arg1;
- (void)_buyButtonHit:(id)arg1;
- (void)_createDownloadingViews;
- (void)_createDisclosureButton;
- (void)_createBuyButton;
- (void)_adjustBuyButtonSize;
- (void)_createSubviews;
- (void)setHidden:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


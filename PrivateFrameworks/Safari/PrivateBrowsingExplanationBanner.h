//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/Banner.h>

@class RolloverImageButton;

__attribute__((visibility("hidden")))
@interface PrivateBrowsingExplanationBanner : Banner
{
    RolloverImageButton *_closeButton;
}

+ (int)bannerSortOrder;
@property(nonatomic) __weak RolloverImageButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (id)bannerNibName;
- (id)initWithContentViewController:(struct SearchableWebContentViewController *)arg1;

@end


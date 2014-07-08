//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "SafariDelegatingView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TestDriveMigrationBannerView : NSView <SafariDelegatingView>
{
    id <SafariViewDelegate> _safariViewDelegate;
}

@property(nonatomic) __weak id <SafariViewDelegate> safariViewDelegate; // @synthesize safariViewDelegate=_safariViewDelegate;
- (void).cxx_destruct;
- (void)viewWillMoveToWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

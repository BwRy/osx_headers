//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABApplicationServices.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ABFrameworkApplicationServices : NSObject <ABApplicationServices>
{
}

- (void)displayGoogleWebLoginAlertWithWebLoginURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showMCCConfigForAccountID:(id)arg1;
- (void)showPasswordPanelModalForWindow:(id)arg1 withSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showContactWithUniqueId:(id)arg1 shouldUnify:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


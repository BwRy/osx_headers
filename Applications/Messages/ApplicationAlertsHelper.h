//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOAlertsHelperAppleScriptDelegate.h"

@class NSString, SOAlertsHelper;

@interface ApplicationAlertsHelper : NSObject <SOAlertsHelperAppleScriptDelegate>
{
    SOAlertsHelper *_alerts;
}

+ (id)sharedInstance;
@property(retain) SOAlertsHelper *alerts; // @synthesize alerts=_alerts;
- (void).cxx_destruct;
- (void)performActionScriptForChatGUID:(id)arg1 handleID:(id)arg2 messageText:(id)arg3 accountGUID:(id)arg4 event:(int)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

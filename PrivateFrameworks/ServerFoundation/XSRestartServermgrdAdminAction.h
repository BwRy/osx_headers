//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ServerFoundation/XSStatusCheckingAdminAction.h>

@class NSDate;

@interface XSRestartServermgrdAdminAction : XSStatusCheckingAdminAction
{
    NSDate *_actionStartTime;
}

+ (id)actionWithSession:(id)arg1;
@property(retain) NSDate *actionStartTime; // @synthesize actionStartTime=_actionStartTime;
- (void)didFinishStatusCheckAction:(id)arg1;
- (void)didFinishWithErrorForAction:(id)arg1;
- (void)startExecution;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface ErrorDialogController : NSObject
{
    NSDictionary *_errorInfo;
    CDUnknownBlockType _handler;
}

- (void)dealloc;
- (void)setErrorInfo:(id)arg1;
- (void)displayErrorOnWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_guestInfoTextStringForErrorInfo:(id)arg1;
- (id)_closeInfoTextForErrorInfo:(id)arg1;
- (id)_mountInfoTextForErrorInfo:(id)arg1;
- (id)_enumerateSharesInfoTextForErrorInfo:(id)arg1;
- (id)_openSessionInfoTextForErrorInfo:(id)arg1;
- (id)_getUserInfoInfoTextForErrorInfo:(id)arg1;
- (id)_getServerInfoInfoTextForErrorInfo:(id)arg1;
- (id)_createSessionInfoTextForErrorInfo:(id)arg1;
- (id)_commonInfoTextForErrorInfo:(id)arg1;
- (void)alertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)_shakeForErrorInfo:(id)arg1;
- (id)_messageForErrorInfo:(id)arg1;
- (id)_infoTextForErrorInfo:(id)arg1;

@end


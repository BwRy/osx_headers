//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount;

@protocol ACExtensionProviding <NSObject>
- (void)verifyCredentialsForAccount:(ACAccount *)arg1 completion:(void (^)(ACAccount *, NSError *))arg2;
@end

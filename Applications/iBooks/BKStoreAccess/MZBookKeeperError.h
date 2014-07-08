//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@class MZBookKeeperTransaction;

@interface MZBookKeeperError : NSError
{
    MZBookKeeperTransaction *_transaction;
}

+ (id)serverClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2;
+ (id)userClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2;
+ (id)delegateCancelledErrorWithTransaction:(id)arg1;
+ (id)transactionCancelledErrorWithTransaction:(id)arg1;
+ (id)transactionMissingURLErrorWithTransaction:(id)arg1;
+ (id)transactionMissingDomainErrorWithTransaction:(id)arg1;
+ (id)storeAccountSessionExpiredWithTransaction:(id)arg1;
+ (id)noStoreAccountErrorWithTransaction:(id)arg1;
+ (id)userEnteredWrongCredentialsErrorWithTransaction:(id)arg1;
+ (id)userCancelledSignInErrorWithTransaction:(id)arg1;
+ (id)storeAccountMismatchErrorWithPreviousStoreAccountText:(id)arg1 currentStoreAccontText:(id)arg2 transaction:(id)arg3;
+ (id)storeLoggedOutErrorWithPreviousStoreAccountText:(id)arg1 transaction:(id)arg2;
+ (id)killSwitchErrorWithTransaction:(id)arg1;
+ (id)networkingBlockedErrorWithTransaction:(id)arg1;
+ (id)cloudSyncDisabledErrorWithTransaction:(id)arg1;
+ (id)unknownErrorWithTransaction:(id)arg1;
+ (id)cloudSyncErrorWithCode:(long long)arg1 localizedDescription:(id)arg2 transaction:(id)arg3;
@property(retain, nonatomic) MZBookKeeperTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)retrySeconds;
- (id)currentStoreAccountKey;
- (id)previousStoreAccountKey;
- (BOOL)isTransactionMissingInformationError;
- (BOOL)isTransactionCancelledError;
- (BOOL)isClampError;
- (BOOL)isRecoverableError;
- (BOOL)isNoAccountError;
- (BOOL)isAccountsChangedError;
- (BOOL)isAuthenticationError;
- (id)description;

@end

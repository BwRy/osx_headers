//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSCriterion, MSEmailModel, NSSet, NSString;

@protocol MailServiceProtocol <NSObject>
- (void)markMessageAtPath:(NSString *)arg1 asRead:(BOOL)arg2 withReply:(void (^)(BOOL))arg3;
- (void)getMessagesWithCriterion:(MSCriterion *)arg1 resultKeys:(NSSet *)arg2 inboxesOnly:(BOOL)arg3 maximumResults:(unsigned long long)arg4 reply:(void (^)(NSArray *))arg5;
- (void)saveMessageWithModel:(MSEmailModel *)arg1 reply:(void (^)(unsigned long long, NSString *))arg2;
- (void)sendMessageWithModel:(MSEmailModel *)arg1 options:(unsigned long long)arg2 reply:(void (^)(unsigned long long, NSString *))arg3;
- (void)getAccounts:(void (^)(NSArray *))arg1;
- (void)echo:(NSString *)arg1 reply:(void (^)(NSString *))arg2;
@end


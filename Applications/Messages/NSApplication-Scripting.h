//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSApplication.h"

@interface NSApplication (Scripting)
- (id)valueInScriptAuthorizationRequestsWithUniqueID:(id)arg1;
- (id)objectInScriptAuthorizationRequestsAtIndex:(unsigned long long)arg1;
- (id)scriptAuthorizationRequests;
- (id)valueInScriptTextChatsWithName:(id)arg1;
- (id)valueInScriptTextChatsWithUniqueID:(id)arg1;
- (id)objectInScriptTextChatsAtIndex:(unsigned long long)arg1;
- (id)scriptTextChats;
- (id)valueInScriptVideoChatsWithUniqueID:(id)arg1;
- (id)objectInScriptVideoChatsAtIndex:(unsigned long long)arg1;
- (id)scriptVideoChats;
- (id)valueInScriptAudioChatsWithUniqueID:(id)arg1;
- (id)objectInScriptAudioChatsAtIndex:(unsigned long long)arg1;
- (id)scriptAudioChats;
- (id)valueInScriptAVChatsWithUniqueID:(id)arg1;
- (id)objectInScriptAVChatsAtIndex:(unsigned long long)arg1;
- (id)scriptAVChats;
- (id)valueInScriptChatsWithName:(id)arg1;
- (id)valueInScriptChatsWithUniqueID:(id)arg1;
- (id)objectInScriptChatsAtIndex:(unsigned long long)arg1;
- (id)scriptChats;
- (id)valueInScriptFileTransfersWithUniqueID:(id)arg1;
- (id)objectInScriptFileTransfersAtIndex:(unsigned long long)arg1;
- (id)scriptFileTransfers;
- (id)valueInServicesWithName:(id)arg1;
- (id)valueInServicesWithUniqueID:(id)arg1;
- (id)services;
- (id)valueInBuddiesWithUniqueID:(id)arg1;
- (id)valueInBuddiesWithName:(id)arg1;
- (id)buddies;
- (id)scriptActiveAVChat;
- (id)myImage;
- (void)setMyImage:(id)arg1;
- (id)myIdleTime;
- (id)myStatusMessage;
- (void)setMyStatusMessage:(id)arg1;
- (id)myStatus;
- (void)setMyStatus:(id)arg1;
- (void)inviteScriptCommand:(id)arg1;
- (void)storeRecentPictureCommand:(id)arg1;
- (void)showChatChooserCommand:(id)arg1;
- (void)logoutScriptCommand:(id)arg1;
- (void)loginScriptCommand:(id)arg1;
@end


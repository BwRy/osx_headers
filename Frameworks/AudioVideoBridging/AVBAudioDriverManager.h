//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVBCAObject.h>

@interface AVBAudioDriverManager : AVBCAObject
{
}

+ (id)sharedAudioDriverManager;
- (id)addEntityWithModel:(id)arg1 onInterface:(id)arg2 preaquire:(BOOL)arg3 withControllerID:(unsigned long long)arg4 hidden:(BOOL)arg5;
- (id)addEntityWithModel:(id)arg1 onInterface:(id)arg2 preaquire:(BOOL)arg3 withControllerID:(unsigned long long)arg4;
- (id)initWithAudioObjectID:(unsigned int)arg1;

@end

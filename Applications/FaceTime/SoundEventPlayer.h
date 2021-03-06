//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSoundDelegate.h"

@class NSMutableDictionary, NSSound, NSString, TLAlert;

@interface SoundEventPlayer : NSObject <NSSoundDelegate>
{
    NSMutableDictionary *_nameToSessionMap;
    NSSound *_customRingtone;
    TLAlert *_currentIncomingRingtone;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TLAlert *currentIncomingRingtone; // @synthesize currentIncomingRingtone=_currentIncomingRingtone;
- (void).cxx_destruct;
- (void)stopCurrentTone;
- (void)repeatTone:(id)arg1 withLoopDelay:(double)arg2;
- (void)repeatTone:(id)arg1;
- (void)playTone:(id)arg1;
- (void)_repeatSoundNamed:(id)arg1;
- (void)_repeatSoundAfterDelay:(id)arg1;
- (void)_stopSoundNamed:(id)arg1 method:(int)arg2;
- (void)_playSoundNamed:(id)arg1;
- (void)_playSoundAfterDelay:(id)arg1;
- (id)_startSoundNamed:(id)arg1 afterTime:(float)arg2 loopDelay:(float)arg3 volume:(float)arg4;
- (id)_startSoundNamed:(id)arg1 afterTime:(float)arg2 loopDelay:(float)arg3;
- (void)soundFinished:(id)arg1;
- (void)silence;
- (void)triggerEvent:(int)arg1 forPerson:(id)arg2;
- (void)triggerEvent:(int)arg1;
- (void)triggerEvent:(int)arg1 forPerson:(id)arg2 invokeOnFinish:(id)arg3;
- (void)triggerEvent:(int)arg1 invokeOnFinish:(id)arg2;
- (BOOL)usesCustomRingtone;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


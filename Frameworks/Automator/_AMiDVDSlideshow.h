//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Automator/_AMiDVDItem.h>

@class NSArray, NSString, _AMiDVDButton, _AMiDVDMenu;

@interface _AMiDVDSlideshow : _AMiDVDItem
{
}

@property int transitionType;
@property(readonly) double transitionDuration;
@property int transitionDirection;
@property(readonly, copy) _AMiDVDButton *sourcebutton;
@property double soundtrackVolume;
@property(copy) NSString *playlist;
@property(readonly, copy) _AMiDVDMenu *parent;
@property(copy) NSString *name;
@property BOOL loop;
@property BOOL DVDROM;
@property double duration;
@property BOOL displayArrows;
@property(copy) NSArray *data;
@property(copy) NSString *backgroundAudio;
- (id)images;

@end

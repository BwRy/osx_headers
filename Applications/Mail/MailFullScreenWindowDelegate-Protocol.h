//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowDelegate.h"

@class FullScreenModalCapableWindow;

@protocol MailFullScreenWindowDelegate <NSWindowDelegate>
- (void)restoreFrame;
- (BOOL)mailFullScreenWindowShouldClose:(id)arg1;
- (FullScreenModalCapableWindow *)windowForMailFullScreen;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSegmentedControl.h"

@class RemindersWindowController;

@interface RemindersAddListSegmentedControl : NSSegmentedControl
{
    RemindersWindowController *_windowController;
}

+ (void)initialize;
@property __weak RemindersWindowController *windowController; // @synthesize windowController=_windowController;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (void)plusPressed;
- (id)menu;
- (id)initWithWindowController:(id)arg1;

@end

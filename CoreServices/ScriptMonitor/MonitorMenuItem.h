//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMenuItem.h"

@class NSButton;

@interface MonitorMenuItem : NSMenuItem
{
    NSButton *_stopButton;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (void).cxx_destruct;
- (id)localizedDescription;
- (float)fractionCompleted;
- (BOOL)isIndeterminate;
- (int)runningState;
- (id)title;
- (void)setTarget:(id)arg1;
- (id)initWithProgress:(id)arg1;

@end


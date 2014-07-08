//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSButton, NSCursor, NSMatrix, NSPanel, NSUserDefaults;

@interface Preferences : NSObject
{
    NSMatrix *cursorTypesMatrix;
    NSButton *soundSwitch;
    NSPanel *panel;
    NSUserDefaults *defaults;
    NSCursor *cursors[9];
}

+ (id)sharedPreferences;
- (void)setCursorType:(int)arg1;
- (int)cursorType;
- (void)setInspectorWasActive:(BOOL)arg1;
- (BOOL)inspectorWasActive;
- (void)setUseSound:(BOOL)arg1;
- (BOOL)useSound;
- (void)setCursor:(id)arg1;
- (void)toggleSound:(id)arg1;
- (id)cursorImage;
- (id)selectedCursor;
- (void)showPanel;
- (void)loadPanel;
- (void)_loadCursorForType:(int)arg1;
- (id)init;
- (void)dealloc;

@end

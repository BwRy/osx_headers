//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class DictionaryWindowTitleCell, NSString;

@interface DictionaryBrowserWindow : NSWindow
{
    NSString *_dictionaryName;
    DictionaryWindowTitleCell *_customTitleCell;
}

@property(retain) NSString *dictionaryName; // @synthesize dictionaryName=_dictionaryName;
- (id)_customTitleCell;
- (void)dealloc;

@end


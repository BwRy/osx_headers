//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class ASLMessage, NSMutableArray;

@interface MessageInspectorController : NSWindowController
{
    id _messageTableView;
    double _fontHeight;
    double _averageAdvance;
    long long _valueColumnWidthInCharacters;
    ASLMessage *_aslMessage;
    NSMutableArray *_sortedKeys;
}

+ (id)sharedMessageInspectorController;
@property(retain) ASLMessage *message; // @synthesize message=_aslMessage;
- (void).cxx_destruct;
- (void)tableViewColumnDidResize:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectTableColumn:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)_valueAtIndex:(long long)arg1;
- (id)_keyAtIndex:(long long)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)displayMessageProperties;
- (id)messageProperties;
- (BOOL)isShowing;
- (void)show;
- (void)close;
- (void)windowWillClose:(id)arg1;
- (void)_consoleFontChangedNotification:(id)arg1;
- (void)awakeFromNib;

@end


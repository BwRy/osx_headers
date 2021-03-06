//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SEPreferences.h"

@class NSMutableDictionary, NSTableView, SEDataSource;

@interface SEPlugInPreferences : SEPreferences
{
    NSTableView *_tableView;
    SEDataSource *_dataSource;
    NSMutableDictionary *_pluginPreferences;
}

- (void)write;
- (void)read;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)dataSource;
- (id)tableView;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSButton, NSTabView, NSTableView, NSTextField;

@interface AliasSelectionView : NSView
{
    NSButton *_backButton;
    NSButton *_nextButton;
    NSTabView *_tabView;
    NSTextField *_vettedDescriptionText;
    NSTableView *_tableView;
    NSTextField *_footerLabel;
    NSTextField *_unvettedDescriptionText;
    NSTextField *_emailField;
}

@property(nonatomic) __weak NSTextField *emailField; // @synthesize emailField=_emailField;
@property(nonatomic) __weak NSTextField *unvettedDescriptionText; // @synthesize unvettedDescriptionText=_unvettedDescriptionText;
@property(nonatomic) __weak NSTextField *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak NSTextField *vettedDescriptionText; // @synthesize vettedDescriptionText=_vettedDescriptionText;
@property(nonatomic) __weak NSTabView *tabView; // @synthesize tabView=_tabView;
@property(nonatomic) __weak NSButton *nextButton; // @synthesize nextButton=_nextButton;
@property(nonatomic) __weak NSButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "AUModelDelegate.h"
#import "AUSettingsViewControllerProtocol.h"
#import "NSMenuDelegate.h"
#import "NSOutlineViewDelegate.h"
#import "NSTableViewDelegate.h"

@class AUDocument, AUSummaryModel, MousyTableView, NSButton, NSMenu, NSOutlineView, NSScrollView, NSString, NSTextField, NSView, NSWindow, PopUpMenuClickableTextField;

@interface AUSummaryViewController : NSViewController <AUSettingsViewControllerProtocol, AUModelDelegate, NSTableViewDelegate, NSOutlineViewDelegate, NSMenuDelegate>
{
    AUSummaryModel *dataModel;
    NSTextField *modelLabel;
    NSTextField *modelValue;
    NSTextField *serialNumberLabel;
    NSTextField *serialNumberValue;
    NSTextField *versionLabel;
    PopUpMenuClickableTextField *versionValue;
    NSButton *versionButton;
    NSTextField *ethernetLabel;
    NSTextField *ethernetValue;
    NSTextField *wifi1Label;
    NSTextField *wifi1MACAddress;
    NSTextField *wifi1Channel;
    NSTextField *wifi2Label;
    NSTextField *wifi2MACAddress;
    NSTextField *wifi2Channel;
    NSView *dynamicView;
    NSView *statusView;
    NSTextField *statusLabel;
    MousyTableView *statusTable;
    NSView *clientView;
    NSTextField *clientLabel;
    NSOutlineView *clientTable;
    NSMenu *problemMenu;
    NSView *problemDescriptionView;
    NSTextField *problemTitle;
    NSTextField *problemDescriptionText;
    long long selectedFWIndex;
    NSWindow *windowForSheet;
    NSScrollView *_statusScrollView;
    NSScrollView *_clientScrollView;
    AUDocument *_document;
}

@property(nonatomic) AUDocument *document; // @synthesize document=_document;
@property(nonatomic) NSScrollView *clientScrollView; // @synthesize clientScrollView=_clientScrollView;
@property(nonatomic) NSScrollView *statusScrollView; // @synthesize statusScrollView=_statusScrollView;
@property(nonatomic) NSWindow *windowForSheet; // @synthesize windowForSheet;
@property(nonatomic) long long selectedFWIndex; // @synthesize selectedFWIndex;
@property(nonatomic) NSTextField *problemDescriptionText; // @synthesize problemDescriptionText;
@property(nonatomic) NSTextField *problemTitle; // @synthesize problemTitle;
@property(nonatomic) NSView *problemDescriptionView; // @synthesize problemDescriptionView;
@property(nonatomic) NSMenu *problemMenu; // @synthesize problemMenu;
@property(nonatomic) NSOutlineView *clientTable; // @synthesize clientTable;
@property(nonatomic) NSTextField *clientLabel; // @synthesize clientLabel;
@property(nonatomic) NSView *clientView; // @synthesize clientView;
@property(nonatomic) MousyTableView *statusTable; // @synthesize statusTable;
@property(nonatomic) NSTextField *statusLabel; // @synthesize statusLabel;
@property(nonatomic) NSView *statusView; // @synthesize statusView;
@property(nonatomic) NSView *dynamicView; // @synthesize dynamicView;
@property(nonatomic) NSTextField *wifi2Channel; // @synthesize wifi2Channel;
@property(nonatomic) NSTextField *wifi2MACAddress; // @synthesize wifi2MACAddress;
@property(nonatomic) NSTextField *wifi2Label; // @synthesize wifi2Label;
@property(nonatomic) NSTextField *wifi1Channel; // @synthesize wifi1Channel;
@property(nonatomic) NSTextField *wifi1MACAddress; // @synthesize wifi1MACAddress;
@property(nonatomic) NSTextField *wifi1Label; // @synthesize wifi1Label;
@property(nonatomic) NSTextField *ethernetValue; // @synthesize ethernetValue;
@property(nonatomic) NSTextField *ethernetLabel; // @synthesize ethernetLabel;
@property(nonatomic) NSButton *versionButton; // @synthesize versionButton;
@property(nonatomic) PopUpMenuClickableTextField *versionValue; // @synthesize versionValue;
@property(nonatomic) NSTextField *versionLabel; // @synthesize versionLabel;
@property(nonatomic) NSTextField *serialNumberValue; // @synthesize serialNumberValue;
@property(nonatomic) NSTextField *serialNumberLabel; // @synthesize serialNumberLabel;
@property(nonatomic) NSTextField *modelValue; // @synthesize modelValue;
@property(nonatomic) NSTextField *modelLabel; // @synthesize modelLabel;
@property(retain, nonatomic) AUSummaryModel *dataModel; // @synthesize dataModel;
- (void)updateFirmwareByURL:(id)arg1;
- (void)updateFirmwareByIndex:(long long)arg1;
- (void)updateFirmwareOtherButtonClicked:(id)arg1;
- (void)updateFirmwareButtonClicked:(id)arg1;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)versionClicked:(id)arg1;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (void)showMoreInfo:(id)arg1;
- (void)fixProblem:(id)arg1;
- (void)toggleIgnore:(id)arg1;
- (void)showProblemMenuForEvent:(id)arg1;
- (void)dataModelDidLoadData:(id)arg1;
- (void)awakeFromNib;
- (id)settingsErrors;
- (BOOL)settingsValid;
- (void)saveSettings;
@property(readonly, nonatomic) NSString *title;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


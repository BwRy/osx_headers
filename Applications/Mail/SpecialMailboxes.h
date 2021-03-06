//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPopUpButton, NSView;

@interface SpecialMailboxes : NSObject
{
    NSView *_view;
    NSPopUpButton *_sentMessagesAgePopup;
    NSPopUpButton *_junkAgePopup;
    NSPopUpButton *_trashAgePopup;
}

+ (id)specialMailboxesForAccountClass:(Class)arg1;
@property(nonatomic) __weak NSPopUpButton *trashAgePopup; // @synthesize trashAgePopup=_trashAgePopup;
@property(nonatomic) __weak NSPopUpButton *junkAgePopup; // @synthesize junkAgePopup=_junkAgePopup;
@property(nonatomic) __weak NSPopUpButton *sentMessagesAgePopup; // @synthesize sentMessagesAgePopup=_sentMessagesAgePopup;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)postSpecialMailboxesDidChangeNotification:(id)arg1;
- (void)setUIElementsEnabled:(BOOL)arg1;
- (BOOL)isAccountInformationDirty:(id)arg1;
- (BOOL)setupAccountFromValuesInUI:(id)arg1;
- (void)setupUIFromValuesInAccount:(id)arg1;

@end


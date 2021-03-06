//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSEvent, NSSavePanel, NSString, NSURL;

@protocol NSNavFileBrowser <NSObject>
@property BOOL showsNewDocumentButton;
@property BOOL allowsMultipleSelection;
@property BOOL hidesSharedSection;
@property id <NSNavFileBrowserDelegate> delegate;
@property int fileListMode;
@property(copy) NSArray *selectedURLs;
@property(retain) NSURL *rootDirectoryURL;
@property(retain) NSURL *directoryURL;
@property BOOL allowsExpandingMultipleDirectories;
@property BOOL canClickDisabledFiles;
@property BOOL resolvesAliases;
@property BOOL showsHiddenFiles;
@property BOOL treatsFilePackagesAsDirectories;
- (void)setMediaBrowserShownTypes:(unsigned long long)arg1;
- (void)hidePreviewPanelIfNecessary;
- (BOOL)showGotoWithInitialFilename:(NSString *)arg1;
- (NSArray *)selectedSeamlessOpenerPreviewItems;
- (void)disableHistoryAndDoWork:(void (^)(void))arg1;
- (NSURL *)documentsDirectoryURL;
- (void)selectFirstKeyView;
- (BOOL)performKeyEquivalent:(NSEvent *)arg1;
- (BOOL)sidebarContainsURL:(NSURL *)arg1;
- (void)refreshContents;
- (BOOL)canCreateNewFolder;
- (void)makeNewFolderForSavePanel:(NSSavePanel *)arg1;
- (void)setSavePanel:(NSSavePanel *)arg1;
- (id)savePanel;

@optional
- (void)windowOrderedIn;
- (void)windowOrderedOut;
- (void)_configureForShowingInPanel;
- (void)configureAndLoadLayout;
@end


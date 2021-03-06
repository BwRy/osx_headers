//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDocument.h"

@class Album, ICController, IWWindow, NSDate, NSMutableArray, NSRunLoop, NSString, ProgressController;

@interface DBDocument : NSDocument
{
    IWWindow *mWindow;
    ProgressController *mProgress;
    NSDate *mStartTime;
    BOOL mIsOpen;
    NSRunLoop *mRunLoop;
    NSString *mRoot;
    Album *mCurrentAlbum;
    Album *mLaunchAlbum;
    BOOL mCheckedForPackage;
    BOOL mCheckedForNoIndexDataDirectory;
    ICController *mICController;
    NSMutableArray *mAlbumChangeValidators;
}

- (void)removeFromCloseQueue:(id)arg1 selector:(SEL)arg2;
- (void)removeFromCloseQueue:(id)arg1;
- (void)addToCloseQueue:(id)arg1 selector:(SEL)arg2;
- (void)endLoadingProgress;
- (void)startLoadingProgress;
- (id)startTime;
- (BOOL)documentIsBusy;
- (void)startDeviceManagers;
- (void)start;
- (id)_canTerminate;
- (void)_setRoot:(id)arg1;
- (void)setRoot:(id)arg1;
- (void)_drainMessageQueuesAndShowProgress:(id)arg1 baselineProgress:(double)arg2 scale:(double)arg3;
- (id)_doRepairLibraryPanel;
- (void)_setCurrentAlbumOnLaunch:(id)arg1;
- (void)removeAlbumChangeValidator:(id)arg1;
- (void)addAlbumChangeValidator:(id)arg1;
- (BOOL)validateAlbumChangeFromAlbum:(id)arg1 toAlbum:(id)arg2;
- (void)_setCurrentAlbum:(id)arg1 force:(BOOL)arg2 notify:(BOOL)arg3;
- (void)setCurrentAlbum:(id)arg1 force:(BOOL)arg2;
- (void)setCurrentAlbum:(id)arg1;
- (BOOL)isDocumentEdited;
- (id)root;
- (void)packageLibrary;
- (id)executeShellCommand:(id)arg1;
- (id)currentAlbum;
- (id)window;
- (id)tempDB;
- (id)db;
- (id)runLoop;
- (void)close;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

@end


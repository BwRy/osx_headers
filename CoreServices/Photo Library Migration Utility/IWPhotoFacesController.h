//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSControlTextEditingDelegate.h"
#import "NSTokenFieldDelegate.h"

@class IPKModule, IPKTile, IWPhotoFacesAddFaceLabel, IWPhotoFacesSeparatorView, ImageDB, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSTimer, NSTokenField, NSView;

@interface IWPhotoFacesController : NSObject <NSTokenFieldDelegate, NSControlTextEditingDelegate>
{
    NSObject *mContentViewController;
    id delegate;
    struct IPPhotoList *mPhotoList;
    ImageDB *mImageDB;
    unsigned long long mKey;
    int mContextType;
    IPKModule *mModule;
    IPKTile *mEnclosingTile;
    NSView *mPhotoFacesView;
    NSTokenField *mPhotoFacesTokenField;
    IWPhotoFacesAddFaceLabel *mAddAFaceLabel;
    IWPhotoFacesSeparatorView *mAddAFaceDivider;
    NSString *mUnknownFacesString;
    NSMutableArray *mPhotoInfoObjects;
    NSMutableDictionary *mPhotoFacesDict;
    BOOL mightBeStale;
    BOOL subscribedToNotifications;
    BOOL didSubscribeForChange;
    NSTimer *delayTimer;
    NSOperationQueue *mFacesQueue;
}

@property IPKTile *enclosingTile; // @synthesize enclosingTile=mEnclosingTile;
@property id delegate; // @synthesize delegate;
- (id)allowSwitchingToFaceNaming;
- (id)unknownFacesString;
- (void)sizeFacesToFit;
- (void)toggleFaceNamingLayer;
- (id)photoFacesModule;
- (id)photoFacesView;
- (void)_updateUI;
- (void)updateUI;
- (void)setContextType:(int)arg1;
- (void)usePhotoList:(struct IPPhotoList *)arg1 inDB:(id)arg2 fromContentViewController:(id)arg3;
- (void)selectionChanged:(id)arg1;
- (BOOL)selectionContainsDoNotShowInLibrary;
- (BOOL)isFacesWidgetCollapsed;
- (void)switchToOneUp;
- (void)addNewFace;
- (void)stopListeningForSelectionChanges;
- (void)startListeningForSelectionChanges;
- (void)awakeFromNib;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_currentFont;
- (void)dealloc;
- (id)init;
- (unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
- (void)animationDidEndForModule:(id)arg1;
- (void)setAddAFaceVisible:(BOOL)arg1;
- (void)_faceDataChanged:(id)arg1;
- (void)_bringUpCreateNewFaceUI;
- (void)_prepareFaceNaming;
- (id)_sortedFaces;
- (void)_updateFacesList:(id)arg1 hasUserSelection:(BOOL)arg2;
- (void)_lostFocus:(id)arg1;
- (void)_tokenChanged:(id)arg1;
- (void)_loadNib;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FIFinderSyncExtensionHostProtocol.h"
#import "NSMenuDelegate.h"

@class NSDictionary, NSObject<PKPlugIn>, NSString;

@interface TFinderSyncExtensionHost : NSObject <FIFinderSyncExtensionHostProtocol, NSMenuDelegate>
{
    NSObject<PKPlugIn> *_plugIn;
    struct unordered_map<TString, TNSRef<NSImage *>, std::__1::hash<TString>, std::__1::equal_to<TString>, std::__1::allocator<std::__1::pair<const TString, TNSRef<NSImage *>>>> _badgeIDImages;
    struct TString _toolbarItemName;
    struct TString _toolbarToolTip;
    struct TNSRef<NSData *> _toolbarImageData;
    struct TFENodeVector _interestedRoots;
    struct unordered_map<TFENode, TString, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TString>>> _nodeToBadgeIDMap;
    NSDictionary *_toolbarItemDictionary;
}

+ (id)instanceForPlugIn:(id)arg1;
@property(copy, nonatomic) NSDictionary *toolbarItemDictionary; // @synthesize toolbarItemDictionary=_toolbarItemDictionary;
@property(retain, nonatomic) NSObject<PKPlugIn> *plugIn; // @synthesize plugIn=_plugIn;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)executePlugInCommand:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)closeContainer:(const struct TFENode *)arg1;
- (void)openContainer:(const struct TFENode *)arg1;
- (struct TString)badgeIdentifierForNode:(const struct TFENode *)arg1;
- (_Bool)interestedInNode:(const struct TFENode *)arg1;
- (_Bool)managesNodes:(const struct TFENodeVector *)arg1 target:(const struct TFENode *)arg2;
- (id)imageForToolbarItem;
- (struct TString)toolbarToolTip;
- (id)toolbarImageData;
- (struct TString)toolbarItemName;
- (void)setToolbarItemName:(id)arg1 imageData:(id)arg2 toolTip:(id)arg3;
- (void)dealloc;
- (void)tearDown;
- (id)initWithPlugIn:(id)arg1;
- (void)setBadgeIdentifiersForURLs:(id)arg1;
- (id)badgeImageForIdentifier:(const struct TString *)arg1;
- (void)setBadgeImageData:(id)arg1 forIdentifier:(id)arg2;
- (void)unregisterForDirectoryAtURL:(id)arg1;
- (void)registerForDirectoryAtURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


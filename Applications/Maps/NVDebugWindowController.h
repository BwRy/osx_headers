//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "MKMapViewDelegate.h"

@class EnvironmentsWindowController, MKCircle, MKGeodesicPolyline, MKMapView, NSString, NSWindow, NVMainWindowController, NVSearchManager, NVServiceURLsWindowController, VKDebugSettings, VKMapView;

__attribute__((visibility("hidden")))
@interface NVDebugWindowController : NSWindowController <MKMapViewDelegate>
{
    MKCircle *_parisOverlayCircle;
    MKGeodesicPolyline *_polyline;
    NVSearchManager *_searchManager;
    EnvironmentsWindowController *_environmentsWindowController;
    NVServiceURLsWindowController *_serviceURLsWindowController;
    VKDebugSettings *_vkDebugSettings;
    NSWindow *_MapsDebugWindow;
    NSWindow *_NavigationDebugWindow;
    NSWindow *_MapDisplayDebugWindow;
    NSWindow *_LoggingDebugWindow;
    NSWindow *_ServerConfigDebugWindow;
    BOOL _showMacsInPushToDevice;
}

+ (id)keyPathsForValuesAffectingMainWindowController;
+ (id)keyPathsForValuesAffectingMapView;
@property BOOL showMacsInPushToDevice; // @synthesize showMacsInPushToDevice=_showMacsInPushToDevice;
- (void).cxx_destruct;
- (void)rapDisplayPushDetails:(id)arg1;
- (void)rapPresentFakeResolution:(id)arg1;
- (void)showBookmarksMenu:(id)arg1;
- (void)showDebugWindow:(id)arg1;
- (void)logTileState:(id)arg1;
- (void)searchQueryTest:(id)arg1;
- (void)routeTest:(id)arg1;
- (void)testScroll:(id)arg1;
- (void)testRotate:(id)arg1;
- (void)testPinch:(id)arg1;
- (void)travel5TimesBetweenCupertinoAndSanFrancisco:(id)arg1;
- (void)travelOnceBetweenCupertinoAndSanFranciscoInMapView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)goToCupertino:(id)arg1;
- (void)goToSanFrancisco:(id)arg1;
- (void)goToLosAngeles:(id)arg1;
- (void)goToNewYork:(id)arg1;
- (void)goToParis:(id)arg1;
- (void)testMapSnapshotCreator:(id)arg1;
- (void)testMapitemURL:(id)arg1;
@property(readonly) VKDebugSettings *vkDebugSettings;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)addAnnotation:(id)arg1;
@property BOOL showFakeiPadInPushToDevice;
@property BOOL showFakeiPhoneInPushToDevice;
- (void)_setBool:(BOOL)arg1 toPrefWithSelector:(SEL)arg2;
- (BOOL)_boolFromPrefWithSelector:(SEL)arg1;
- (void)runPerformanceTest:(id)arg1;
- (id)getGPUs;
@property(readonly) VKMapView *vkMapView;
- (void)removeAllOverlays:(id)arg1;
- (void)toggleLineFromCupertinoToParis:(id)arg1;
- (void)removeOverlayForParis:(id)arg1;
- (void)addOverlayForParis:(id)arg1;
- (void)addOverlayForCurrentRegion:(id)arg1;
- (void)showServiceURLsWindow:(id)arg1;
- (void)showEnvironmentsWindow:(id)arg1;
@property(readonly) NVMainWindowController *mainWindowController;
- (id)sharedDocumentController;
@property(readonly) MKMapView *mapView;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


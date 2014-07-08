//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/PreferencesModule.h>

@class AcceptedSiteData, NSButton, NSTextField, NSTimer;

__attribute__((visibility("hidden")))
@interface PrivacyPreferences : PreferencesModule
{
    NSTextField *storedDataTallyField;
    NSButton *storedDataDetailsButton;
    NSButton *trackingPolicyCheckbox;
    AcceptedSiteData *_siteDataEditor;
    NSButton *_helpButton;
    struct unique_ptr<Safari::TrackingDataControllerClientObjCAdapter, std::__1::default_delete<Safari::TrackingDataControllerClientObjCAdapter>> _trackingDataControllerClientObjCAdapter;
    struct Vector<WTF::RefPtr<Safari::WebsiteTrackingData>, 0, WTF::CrashOnOverflow> _websiteTrackingData;
    NSTimer *_updateWebsiteTrackingDataTimer;
    NSButton *_blockStorageAlwaysButton;
    NSButton *_blockStorageFromAllThirdPartiesButton;
    NSButton *_blockStorageFromThirdPartiesThatWereNeverVisitedStorageButton;
    NSButton *_blockStorageNeverButton;
    NSButton *_alwaysDenyPermissionLocationButton;
    NSButton *_promptForPermissionEvery24HoursPerSiteLocationButton;
    NSButton *_promptForPermissionOncePerSiteLocationButton;
}

@property(nonatomic) __weak NSButton *promptForPermissionOncePerSiteLocationButton; // @synthesize promptForPermissionOncePerSiteLocationButton=_promptForPermissionOncePerSiteLocationButton;
@property(nonatomic) __weak NSButton *promptForPermissionEvery24HoursPerSiteLocationButton; // @synthesize promptForPermissionEvery24HoursPerSiteLocationButton=_promptForPermissionEvery24HoursPerSiteLocationButton;
@property(nonatomic) __weak NSButton *alwaysDenyPermissionLocationButton; // @synthesize alwaysDenyPermissionLocationButton=_alwaysDenyPermissionLocationButton;
@property(nonatomic) __weak NSButton *blockStorageNeverButton; // @synthesize blockStorageNeverButton=_blockStorageNeverButton;
@property(nonatomic) __weak NSButton *blockStorageFromThirdPartiesThatWereNeverVisitedStorageButton; // @synthesize blockStorageFromThirdPartiesThatWereNeverVisitedStorageButton=_blockStorageFromThirdPartiesThatWereNeverVisitedStorageButton;
@property(nonatomic) __weak NSButton *blockStorageFromAllThirdPartiesButton; // @synthesize blockStorageFromAllThirdPartiesButton=_blockStorageFromAllThirdPartiesButton;
@property(nonatomic) __weak NSButton *blockStorageAlwaysButton; // @synthesize blockStorageAlwaysButton=_blockStorageAlwaysButton;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_websiteTrackingDataUpdated;
- (void)_updateWebsiteTrackingDataTimerFired:(id)arg1;
- (void)_updateTrackingPolicyCheckbox;
- (void)_updateTrackingDataViews;
- (void)_updateLocationPolicyButtons;
- (id)_locationPolicyButtons;
- (int)_geolocationPermissionPolicyForButton:(id)arg1;
- (id)_buttonForGeolocationPermissionPolicy:(int)arg1;
- (void)_updateStoragePolicyButtons;
- (id)_blockStoragePolicyButtons;
- (int)_blockStoragePolicyForButton:(id)arg1;
- (id)_buttonForBlockStoragePolicy:(int)arg1;
- (void)_fetchTrackingDataAndUpdateUI;
- (void)_cancelUpdateTrackingDataTimer;
- (void)trackingDataChanged;
- (void)getWebsiteTrackingData:(Vector_d567fe85 *)arg1;
- (void)removeTrackingData:(const Vector_2a057ca4 *)arg1;
- (void)removeTrackingDataForAllWebsites;
- (void)takeTrackingPolicyFrom:(id)arg1;
- (void)takeLocationPolicyFrom:(id)arg1;
- (void)takeStoragePolicyFrom:(id)arg1;
- (void)showStoredDataDetails:(id)arg1;
- (void)removeAllStoredData:(id)arg1;
- (id)helpAnchor;
- (void)moduleWillBeRemoved;
- (void)moduleWasInstalled;
- (void)awakeFromNib;
- (id)imageForPreferenceNamed:(id)arg1;
- (void)dealloc;

@end

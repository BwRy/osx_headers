//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ACDHostedPlugin : NSObject
{
    id <PKPlugIn> _plugin;
    NSString *_version;
    NSString *_owningTeamID;
    long long _startUsingPluginToken;
}

+ (void)setInternetAccountsPropertiesOnAccountType:(id)arg1;
+ (id)accountPlugins;
+ (void)_updateAdHocAccountTypes;
+ (void)_loadPlugins;
+ (id)_allACPlugins;
+ (void)preparePluginsAndRegisterForUpdates;
@property(nonatomic) long long startUsingPluginToken; // @synthesize startUsingPluginToken=_startUsingPluginToken;
@property(readonly, nonatomic) NSString *owningTeamID; // @synthesize owningTeamID=_owningTeamID;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) id <PKPlugIn> plugin; // @synthesize plugin=_plugin;
- (void).cxx_destruct;
- (void)_makeSureWeLoadTheProtocol;
- (id)identifier;
- (id)ACExtensionInfo;
- (id)accountTypeHumanReadableName;
- (void)pluginPrincipalPerformBlock:(CDUnknownBlockType)arg1;
- (id)bundle;
- (id)initWithPlugin:(id)arg1;

@end


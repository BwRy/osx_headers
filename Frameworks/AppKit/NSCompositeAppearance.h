//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSAppearance.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface NSCompositeAppearance : NSAppearance
{
    NSArray *_appearances;
    NSString *_compositeName;
}

+ (id)compositeAppearanceForView:(id)arg1;
@property(copy) NSArray *appearances; // @synthesize appearances=_appearances;
- (Class)classForCoder;
- (id)description;
@property(copy) NSString *name;
- (long long)_internalVisualEffectMaterialForTitlebar;
- (long long)_internalVisualEffectMaterialForBlendingMode:(long long)arg1;
- (int)_defaultBlendMode;
- (BOOL)_allowsVibrancyForColor:(id)arg1;
- (BOOL)allowsVibrancy;
- (BOOL)_isDefaultAppearance;
- (id)_coreUICatalog;
- (id)resolvedAppearanceForWidget:(id)arg1;
- (id)resolvedAppearanceForStyleName:(id)arg1 styleConfiguration:(id)arg2;
- (int)_callCoreUIWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithAppearances:(id)arg1;
- (void)dealloc;

@end

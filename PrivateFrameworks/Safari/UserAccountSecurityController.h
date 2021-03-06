//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface UserAccountSecurityController : NSObject
{
    int _currentUserHasEmptyPasswordState;
    BOOL _currentUserHasEmptyPassword;
}

+ (id)sharedController;
- (void)_currentUserPasswordDidChange:(id)arg1;
- (void)_calculateWhetherCurrentUserHasEmptyPassword;
- (void)calculateWhetherCurrentUserHasEmptyPasswordIfNecessary;
@property(readonly, nonatomic) BOOL currentUserHasEmptyPassword;
@property(readonly, nonatomic) BOOL passwordIsRequiredAfterSleepOrScreenSaver;
- (void)dealloc;
- (id)init;

@end


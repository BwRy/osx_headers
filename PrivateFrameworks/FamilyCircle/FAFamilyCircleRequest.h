//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FAFamilyCircleRequest : NSObject
{
    NSString *_usernameOrDSID;
    NSString *_passwordOrToken;
}

@property(copy) NSString *passwordOrToken; // @synthesize passwordOrToken=_passwordOrToken;
@property(copy) NSString *usernameOrDSID; // @synthesize usernameOrDSID=_usernameOrDSID;
- (void).cxx_destruct;
- (id)requestOptions;
- (id)serviceRemoteObjectWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)serviceConnection;
- (id)init;

@end


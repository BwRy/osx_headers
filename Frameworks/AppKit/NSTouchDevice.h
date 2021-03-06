//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSTouchDevice : NSObject
{
    unsigned long long _deviceID;
    long long _reserved1;
    double _reserved2;
    long long _reserved3;
    long long _flags;
    struct CGSize _surfaceSize;
}

+ (void)_touchDeviceRemoved:(id)arg1;
+ (void)_touchDeviceAdded:(id)arg1;
+ (id)touchDeviceFromDeviceID:(unsigned long long)arg1;
+ (id)touchDevices;
+ (id)_touchDeviceWithIOHIDDictionary:(id)arg1;
+ (void)initialize;
@property(readonly) struct CGSize surfaceSize; // @synthesize surfaceSize=_surfaceSize;
@property(readonly) unsigned long long deviceID; // @synthesize deviceID=_deviceID;
- (id)_initWithIOHIDDictionary:(id)arg1;
- (id)init;
- (id)description;

@end


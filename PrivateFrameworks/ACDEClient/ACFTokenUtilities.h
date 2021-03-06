//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface ACFTokenUtilities : NSObject
{
}

+ (id)strippedPropertyListString:(id)arg1;
+ (void)clearKey:(id)arg1;
+ (void)fillHMACSuffix:(id)arg1;
+ (void)fillEncryptionSuffix:(id)arg1;
+ (id)tokenDataHMACForRandomKey:(id)arg1 sourceTokenData:(id)arg2;
+ (id)encryptionKeyWithRandomKey:(id)arg1;
+ (id)compressedDataForPlainData:(id)arg1;

@end


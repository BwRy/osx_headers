//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CPTAppUtils : NSObject
{
}

+ (struct CGSize)dimensionsOfImageAtPath:(id)arg1 outFileSize:(unsigned long long *)arg2;
+ (void)resizeImageAtPath:(id)arg1 toPath:(id)arg2 maxPixelSize:(unsigned long long)arg3;
+ (BOOL)reCreatePath:(id)arg1;
+ (BOOL)createPathIfNeeded:(id)arg1;

@end

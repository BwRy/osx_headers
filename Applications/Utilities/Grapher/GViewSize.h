//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GViewSize : NSObject
{
    NSString *mName;
    struct CGSize mSize;
}

+ (id)viewSizeWithName:(id)arg1 size:(struct CGSize)arg2;
- (struct CGSize)size;
- (id)name;
- (id)initWithName:(id)arg1 size:(struct CGSize)arg2;

@end

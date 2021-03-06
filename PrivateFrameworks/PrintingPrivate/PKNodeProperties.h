//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PKNode;

@interface PKNodeProperties : NSObject
{
    id <PKNodeDelegate> delegate;
    NSString *name;
    id deviceID;
    unsigned long long attributes;
    PKNode *parent;
}

@property(retain) PKNode *parent; // @synthesize parent;
@property unsigned long long attributes; // @synthesize attributes;
@property(retain) id deviceID; // @synthesize deviceID;
@property(retain) NSString *name; // @synthesize name;
@property id <PKNodeDelegate> delegate; // @synthesize delegate;
- (void)dealloc;

@end


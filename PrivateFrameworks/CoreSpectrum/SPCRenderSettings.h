//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPCPath;

@interface SPCRenderSettings : NSObject
{
    void *_context;
    SPCPath *_path;
    struct CGRect _rect;
}

@property(retain) SPCPath *path; // @synthesize path=_path;
@property struct CGRect rect; // @synthesize rect=_rect;
@property void *context; // @synthesize context=_context;
- (void)dealloc;

@end


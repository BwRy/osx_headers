//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MCObject.h>

@class NSString;

@interface MCAsset : MCObject
{
    NSString *mPath;
}

@property(copy) NSString *path; // @synthesize path=mPath;
- (id)description;
- (void)_copySelfToSnapshot:(id)arg1;
@property(readonly, nonatomic) BOOL isInUse;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1 andMontage:(id)arg2;

@end

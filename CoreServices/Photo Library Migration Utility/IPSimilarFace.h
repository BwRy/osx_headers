//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IPSimilarFace : NSObject
{
    unsigned long long _imageKey;
    long long _faceIndex;
    long long _faceKey;
    float _score;
    BOOL _ignored;
}

@property BOOL ignored; // @synthesize ignored=_ignored;
@property float score; // @synthesize score=_score;
@property long long faceKey; // @synthesize faceKey=_faceKey;
@property long long faceIndex; // @synthesize faceIndex=_faceIndex;
@property unsigned long long imageKey; // @synthesize imageKey=_imageKey;
- (long long)scoreSortDesc:(id)arg1;
- (id)description;

@end


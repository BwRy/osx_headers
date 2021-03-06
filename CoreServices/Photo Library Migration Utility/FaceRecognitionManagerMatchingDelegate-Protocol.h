//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FaceRecognitionInfo, NSArray, NSString;

@protocol FaceRecognitionManagerMatchingDelegate
- (void)replacedSimilarFace:(FaceRecognitionInfo *)arg1 bySimilarFace:(FaceRecognitionInfo *)arg2 toSeedFace:(FaceRecognitionInfo *)arg3 withScore:(double)arg4 debugString:(NSString *)arg5 sender:(id)arg6 context:(void *)arg7;
- (void)removedSimilarFace:(FaceRecognitionInfo *)arg1 fromSeedFace:(FaceRecognitionInfo *)arg2 withScore:(double)arg3 debugString:(NSString *)arg4 sender:(id)arg5 context:(void *)arg6;
- (void)addedSimilarFace:(FaceRecognitionInfo *)arg1 toSeedFace:(FaceRecognitionInfo *)arg2 withScore:(double)arg3 debugString:(NSString *)arg4 sender:(id)arg5 context:(void *)arg6;
- (NSArray *)recentFacesWithFaceKey:(unsigned long long)arg1 maxCount:(unsigned long long)arg2 sender:(id)arg3 context:(void *)arg4;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, VKMapSnapshot;

@interface MKMapSnapshot : NSObject
{
    VKMapSnapshot *_snapshot;
    NSImage *_image;
}

@property(readonly, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (CDStruct_c3b9c2ee)_coordinateForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)_initWithLoDPISnapshot:(id)arg1 hiDPISnapshot:(id)arg2;
- (id)snapshotWithAnnotationView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)snapshotWithAnnotationView:(id)arg1 atCoordinate:(CDStruct_c3b9c2ee)arg2;

@end


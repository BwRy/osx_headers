//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GGraph;

@interface EEvaluation : NSObject
{
    id mValue;
    GGraph *mGraph;
}

+ (id)evaluationOf:(id)arg1 inGraph:(id)arg2;
+ (id)evaluationOfValue:(id)arg1;
- (double)value;
- (id)textInDefinition:(id)arg1;
- (void)dealloc;
- (id)initWithValue:(id)arg1 graph:(id)arg2;

@end


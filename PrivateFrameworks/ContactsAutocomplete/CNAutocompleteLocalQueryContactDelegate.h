//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNAutocompleteLocalQueryDelegate.h"

@class NSString;

@interface CNAutocompleteLocalQueryContactDelegate : NSObject <CNAutocompleteLocalQueryDelegate>
{
}

- (id)predicateForProperties:(id)arg1 term:(id)arg2;
- (id)fetchRequestForTerms:(id)arg1;
- (CDUnknownBlockType)transformWithProperties:(id)arg1 factory:(id)arg2;
- (id)autocompleteResultsForProperties:(id)arg1 fetchResults:(id)arg2 resultFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

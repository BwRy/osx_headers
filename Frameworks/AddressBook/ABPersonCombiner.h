//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABPersonMergingControllerDelegate.h"

@class ABAddressBook, NSString;

__attribute__((visibility("hidden")))
@interface ABPersonCombiner : NSObject <ABPersonMergingControllerDelegate>
{
    ABAddressBook *_addressBook;
}

@property(retain) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
- (id)windowForMerger;
- (id)addressBookForMerger:(id)arg1;
- (id)combinePeople:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


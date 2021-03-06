//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMAccountController.h"

@interface IMAccountController (SocialAppsCoreAdditions)
- (BOOL)load;
- (void)_sortAccounts;
- (BOOL)save;
- (void)_saveSortedAccounts;
- (id)connectedSiblingsForAccount:(id)arg1;
- (BOOL)insertAccount:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)sortOrderForAccounts:(id)arg1;
- (BOOL)hasConnectedAccounts;
- (id)activeAccountsSupportingStatus;
- (id)bestAccountForStatus;
- (unsigned long long)myStatus;
- (id)accountForService:(id)arg1 withConferenceName:(id)arg2;
- (id)bestAccountForServiceWithABProperty:(id)arg1;
- (BOOL)hasActiveLegacyAccount;
- (id)accountsSupportingStatus;
@end


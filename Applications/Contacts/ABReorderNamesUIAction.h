//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABUserInterfaceAction.h"

@class ABCommandExecutor, ABPersonListController, NSString;

@interface ABReorderNamesUIAction : NSObject <ABUserInterfaceAction>
{
    ABPersonListController *_personListController;
    ABCommandExecutor *_commandExecutor;
    id <ABMainWindowEditModeController> _editModeController;
}

- (id)commandForPeople:(id)arg1 addressBook:(id)arg2 actionName:(id)arg3;
- (id)mutablePeopleForUniqueIds:(id)arg1 addressBook:(id)arg2;
- (id)commandWithSelection:(id)arg1;
- (void)performWithSender:(id)arg1;
- (id)lastBeforeFirstString;
- (id)firstBeforeLastString;
- (void)updateMenuItem:(id)arg1 withSelectedEntries:(id)arg2;
- (BOOL)validateWithMenuItem:(id)arg1;
- (void)dealloc;
- (id)initWithPersonListController:(id)arg1 commandExecutor:(id)arg2 editModeController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMCommonCore/AEAssetActivityItemProviderSource.h>

#import "IMActivityItemSource.h"
#import "NSPasteboardWriting.h"

@class NSString;

@interface AEAssetHTMLActivityItemProvider : AEAssetActivityItemProviderSource <NSPasteboardWriting, IMActivityItemSource>
{
}

- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)supportedActivityTypes;
- (id)pasteboardPropertyListForType:(id)arg1;
- (unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2;
- (id)writableTypesForPasteboard:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *activityType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

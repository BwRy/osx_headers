//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QLPreviewBubble;

@interface FTContactPopoverAssistant : NSObject
{
    QLPreviewBubble *_currentPreviewBubble;
}

+ (id)sharedInstance;
@property(retain, nonatomic) QLPreviewBubble *currentPreviewBubble; // @synthesize currentPreviewBubble=_currentPreviewBubble;
- (void).cxx_destruct;
- (void)_showContactPopoverForURL:(id)arg1 InRect:(struct CGRect)arg2 ofWindow:(id)arg3 preferredEdge:(unsigned int)arg4;
- (void)showContactPopoverForABPerson:(id)arg1 inRect:(struct CGRect)arg2 ofWindow:(id)arg3 preferredEdge:(unsigned int)arg4;
- (void)closeCurrentPopover;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TLayer;

@interface TGroupInFolderAnimationController : NSObject
{
    struct unordered_map<TFENode, TGroupInFolderItem, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TGroupInFolderItem>>> _items;
    struct TNSRef<TLayer *> _hostLayer;
    struct TNSRef<TLayer *> _backgroundLayer;
    _Bool _itemsAreGrouped;
    struct CGPoint _groupFolderAnchor;
    struct TFENode _groupFolderNode;
    unsigned long long _groupingNodeCount;
}

+ (void)animateUngroupingDesktop:(const vector_932ac0be *)arg1 groupFolderLayer:(id)arg2 startingAnchorPoint:(const struct CGPoint *)arg3 duration:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (void)animateGroupingDesktop:(const vector_932ac0be *)arg1 groupFolderLayer:(id)arg2 destinationAnchorPoint:(const struct CGPoint *)arg3 duration:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (id)createLayerFromView:(id)arg1 frame:(const struct CGRect *)arg2 anchorPoint:(const struct CGPoint *)arg3;
+ (id)createLayerFromView:(id)arg1 anchorPoint:(const struct CGPoint *)arg2;
@property(readonly, nonatomic) unsigned long long groupingNodeCount; // @synthesize groupingNodeCount=_groupingNodeCount;
@property(nonatomic) struct TFENode groupFolderNode; // @synthesize groupFolderNode=_groupFolderNode;
@property(nonatomic) struct CGPoint groupFolderAnchor; // @synthesize groupFolderAnchor=_groupFolderAnchor;
@property(nonatomic) _Bool itemsAreGrouped; // @synthesize itemsAreGrouped=_itemsAreGrouped;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)animateUngroupingList;
- (void)animateGroupingList;
- (double)groupingAnimationDuration;
- (void)setGroupedFrame:(struct CGRect)arg1 forNode:(const struct TFENode *)arg2;
- (void)setUngroupedFrame:(struct CGRect)arg1 forNode:(const struct TFENode *)arg2;
- (void)addNode:(const struct TFENode *)arg1 withImage:(struct CGImage *)arg2 andFrame:(const struct CGRect *)arg3 atAnchorPoint:(const struct CGPoint *)arg4 forGrouping:(_Bool)arg5;
- (void)addBackgroundImage:(id)arg1 withFrame:(const struct CGRect *)arg2;
- (void)hide;
- (void)show;
- (void)showNode:(const struct TFENode *)arg1;
- (struct TFENodeVector)nonGroupingNodes;
- (struct TFENodeVector)groupingNodes;
@property(retain, nonatomic) TLayer *hostLayer;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TLabelView.h>

__attribute__((visibility("hidden")))
@interface FI_TLabelViewForMenu : FI_TLabelView
{
    struct TNSRef<FI_TTitleField *> _titleField;
}

+ (id)titleFieldFromMenuItem:(id)arg1;
+ (id)labelViewFromMenuItem:(id)arg1;
+ (id)labelViewForMenu:(id)arg1;
+ (id)labelViewForMenu:(id)arg1 showTitle:(_Bool)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)gumdropValueChangedInMenu:(id)arg1;
- (void)gumdropFavoriteTagChosenInMenu:(id)arg1;
- (_Bool)favoriteTagWillRemove:(short)arg1;
- (void)setForApplyingTags:(_Bool)arg1;

@end

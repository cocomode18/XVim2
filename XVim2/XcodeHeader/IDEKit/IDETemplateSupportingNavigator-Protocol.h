//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEContainerItem, IDEGroup, IDETemplateAssistantContext, IDETemplateKind, NSArray;

@protocol IDETemplateSupportingNavigator <NSObject>
- (IDEGroup *)defaultDestinationGroupForTemplateInstantiationWithDestinationIndex:(long long *)arg1;
- (void)addTemplateInstantiatedItems:(NSArray *)arg1 primaryItem:(IDEContainerItem *)arg2 shouldEdit:(BOOL)arg3;
- (void)setupTemplateContext:(IDETemplateAssistantContext *)arg1 forTemplateKind:(IDETemplateKind *)arg2;
@end


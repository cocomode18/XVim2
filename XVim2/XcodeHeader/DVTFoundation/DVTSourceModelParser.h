//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTLanguageSpecification, NSMutableArray, NSMutableIndexSet;

@interface DVTSourceModelParser : NSObject
{
    DVTLanguageSpecification *_langSpec;
    long long _langId;
    long long _langToken;
    CDStruct_341fcc3f _currentToken;
    CDStruct_627e0f85 _parseRange;
    BOOL _saveToken;
    BOOL _validToken;
    struct _NSRange _previousTokenRange;
    NSMutableArray *_nodeStack;
    NSMutableArray *_productionState;
    NSMutableIndexSet *_validProductionStates;
    struct _NSRange _dirtyRange;
}

+ (id)createTerminalNodeForToken:(CDStruct_341fcc3f *)arg1 scopeProductionRule:(id *)arg2;
+ (id)languageSpecification;
+ (void)initializeLanguageSpecification:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_atEndOfParseRange;
- (void)_endLexerMode:(unsigned long long)arg1;
- (void)_beginLexerMode:(unsigned long long)arg1;
- (BOOL)_getNextToken:(CDStruct_341fcc3f *)arg1 temporaryFlags:(unsigned long long)arg2;
- (unsigned long long)_currentLocation;
- (void)_setCurrentLocation:(unsigned long long)arg1;
- (void)_resetLexerWithInputString:(id)arg1;
- (void)_hoistUpTrailingIgnoreNodesFromNode:(id)arg1 toArray:(id)arg2;
- (unsigned long long)_reuseScopeNode:(id)arg1 using:(id)arg2;
- (id)_branchToReuseInScope:(id)arg1 atLocation:(unsigned long long)arg2 node:(id)arg3;
- (unsigned long long)_acceptChildrenInScope:(id)arg1 atIndex:(unsigned long long)arg2 stackRange:(struct _NSRange)arg3 node:(id)arg4;
- (id)_reduceToProduction:(id)arg1 stackRange:(struct _NSRange)arg2 node:(id)arg3 inScope:(id)arg4;
- (void)_initializeProductionStateForNode:(id)arg1 scopeProdRule:(id)arg2 nodeInteriorPredictSet:(id)arg3 nodeInteriorPredictSetCount:(unsigned long long)arg4;
- (void)_initializeProductionStateForCurrentToken:(id)arg1 tokenInteriorPredictSet:(id)arg2 tokenInteriorPredictSetCount:(unsigned long long)arg3;
- (unsigned long long)_reuseAndSkipAhead:(id)arg1 index:(unsigned long long)arg2 location:(unsigned long long)arg3;
- (unsigned long long)_discardChildrenInScope:(id)arg1 fromIndex:(unsigned long long)arg2 toLocation:(unsigned long long)arg3;
- (unsigned long long)_replaceItemsWithinRange:(id)arg1 newArray:(id)arg2 index:(unsigned long long)arg3;
- (id)_parseOutOfBand:(id)arg1;
- (id)_parse:(id)arg1 inScope:(id)arg2 node:(id)arg3 outOfBand:(long long)arg4;
- (id)parse:(id)arg1 withContext:(id)arg2 inputString:(id)arg3 range:(struct _NSRange)arg4 dirtyRange:(struct _NSRange *)arg5;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "NSTextFinderClient.h"
#import "NSUserInterfaceValidations.h"

@class ConversationViewController, NSArray, NSMutableArray, NSProgress, NSString, NSTextFinder;

@interface ConversationViewFindController : NSObject <NSUserInterfaceValidations, NSTextFinderClient>
{
    NSTextFinder *_textFinder;	// 8 = 0x8
    ConversationViewController *_viewController;	// 16 = 0x10
    NSString *_targetString;	// 24 = 0x18
    unsigned long long _findOptions;	// 32 = 0x20
    NSProgress *_currentProgress;	// 40 = 0x28
    NSProgress *_updateProgress;	// 48 = 0x30
    NSMutableArray *_findStore;	// 56 = 0x38
}

@property(retain, nonatomic) NSMutableArray *findStore; // @synthesize findStore=_findStore;
@property(retain, nonatomic) NSProgress *updateProgress; // @synthesize updateProgress=_updateProgress;
@property(retain, nonatomic) NSProgress *currentProgress; // @synthesize currentProgress=_currentProgress;
@property(nonatomic) unsigned long long findOptions; // @synthesize findOptions=_findOptions;
@property(retain, nonatomic) NSString *targetString; // @synthesize targetString=_targetString;
@property(readonly, nonatomic) __weak ConversationViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;	// IMP=0x0000000100134e31
- (void)_updateVisibleRectsForCell:(unsigned long long)arg1;	// IMP=0x0000000100134bd0
- (void)_conversationViewDidResize:(id)arg1;	// IMP=0x00000001001349b8
- (void)_cellBoundsDidChange:(id)arg1;	// IMP=0x000000010013488b
- (void)_revalidateVisibleCells:(id)arg1;	// IMP=0x00000001001344a2
- (void)_updateConversationMatches:(id *)arg1 forWebMatches:(id)arg2 atCellIndex:(unsigned long long)arg3 visibleRect:(struct CGRect)arg4;	// IMP=0x0000000100133af6
- (id)_conversationMatchesForWebMatches:(id)arg1 atCellIndex:(unsigned long long)arg2 cache:(BOOL)arg3;	// IMP=0x00000001001336b3
- (void)_asyncFindMatchesAtCellIndex:(unsigned long long)arg1 maxResults:(unsigned long long)arg2 progress:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001331fb
- (void)_findNextMatchAtCurrentIndex:(unsigned long long)arg1 startIndex:(unsigned long long)arg2 conversationDidWrap:(BOOL)arg3 progress:(id)arg4 resultCollector:(CDUnknownBlockType)arg5;	// IMP=0x0000000100132e81
- (void)_findNextMatchForString:(id)arg1 findOptions:(unsigned long long)arg2 resultCollector:(CDUnknownBlockType)arg3;	// IMP=0x0000000100132b65
- (void)_findAllMatchesWithProgress:(id)arg1 currentIndex:(unsigned long long)arg2 stopIndex:(unsigned long long)arg3 resultCollector:(CDUnknownBlockType)arg4;	// IMP=0x00000001001328bf
- (void)_findAllMatchesForString:(id)arg1 findOptions:(unsigned long long)arg2 resultCollector:(CDUnknownBlockType)arg3;	// IMP=0x00000001001325b9
- (void)selectFindMatch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010013243b
- (void)scrollFindMatchToVisible:(id)arg1;	// IMP=0x000000010013213f
- (void)getSelectedText:(CDUnknownBlockType)arg1;	// IMP=0x0000000100131ffb
- (void)findMatchesForString:(id)arg1 relativeToMatch:(id)arg2 findOptions:(unsigned long long)arg3 maxResults:(unsigned long long)arg4 resultCollector:(CDUnknownBlockType)arg5;	// IMP=0x0000000100131f95
- (void)performTextFinderAction:(id)arg1;	// IMP=0x0000000100131e02
- (BOOL)validateUserInterfaceItem:(id)arg1;	// IMP=0x0000000100094f9d
@property(readonly, nonatomic) NSTextFinder *textFinder;
- (void)reset;	// IMP=0x0000000100020603
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100020b36
- (void)tearDown;	// IMP=0x00000001000bab40
- (id)init;	// IMP=0x0000000100131d33
- (id)initWithViewController:(id)arg1;	// IMP=0x000000010001ee1c

// Remaining properties
@property(readonly) BOOL allowsMultipleSelection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, getter=isEditable) BOOL editable;
@property(readonly) struct _NSRange firstSelectedRange;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isSelectable) BOOL selectable;
@property(copy) NSArray *selectedRanges;
@property(readonly) NSString *string;
@property(readonly) Class superclass;
@property(readonly, copy) NSArray *visibleCharacterRanges;

@end


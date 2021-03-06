//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

//#import "NSCopying-Protocol.h"

@class MessageSortOrder, NSPredicate;

@interface MessageListContentProviderOptions : NSObject <NSCopying>
{
    BOOL _threadMessages;
    BOOL _showDeletedMessages;
    MessageSortOrder *_primarySortOrder;
    MessageSortOrder *_secondarySortOrder;
    NSPredicate *_filterPredicate;
}

@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(copy, nonatomic) MessageSortOrder *secondarySortOrder; // @synthesize secondarySortOrder=_secondarySortOrder;
@property(copy, nonatomic) MessageSortOrder *primarySortOrder; // @synthesize primarySortOrder=_primarySortOrder;
@property(nonatomic) BOOL showDeletedMessages; // @synthesize showDeletedMessages=_showDeletedMessages;
@property(nonatomic) BOOL threadMessages; // @synthesize threadMessages=_threadMessages;
//- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


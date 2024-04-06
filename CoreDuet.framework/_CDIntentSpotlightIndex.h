/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKKnowledgeStorageEventNotificationDelegate.h>

@protocol OS_dispatch_queue;
@class _DKKnowledgeStorage, _CDSpotlightEventIndexer, NSObject;

@interface _CDIntentSpotlightIndex : NSObject <_DKKnowledgeStorageEventNotificationDelegate> {

	BOOL _includeAdditions;
	_DKKnowledgeStorage* _storage;
	_CDSpotlightEventIndexer* _indexer;
	double _delay;
	unsigned long long _batchSize;
	NSObject*<OS_dispatch_queue> _activityQueue;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) _DKKnowledgeStorage * storage;                         //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) _CDSpotlightEventIndexer * indexer;                    //@synthesize indexer=_indexer - In the implementation block
@property (assign,nonatomic) double delay;                                            //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                            //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> activityQueue;              //@synthesize activityQueue=_activityQueue - In the implementation block
@property (assign,nonatomic) BOOL includeAdditions;                                   //@synthesize includeAdditions=_includeAdditions - In the implementation block
@property (nonatomic,copy) id completion;                                             //@synthesize completion=_completion - In the implementation block
-(NSObject*<OS_dispatch_queue>)activityQueue;
-(void)setActivityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)knowledgeStorage:(id)arg1 didInsertLocalEventsWithStreamNameCounts:(id)arg2 ;
-(_DKKnowledgeStorage *)storage;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(_CDSpotlightEventIndexer *)indexer;
-(id)initWithKnowledgeStorage:(id)arg1 ;
-(BOOL)includeAdditions;
-(void)dealloc;
-(void)setCompletion:(id)arg1 ;
-(double)delay;
-(void)setIncludeAdditions:(BOOL)arg1 ;
-(void)setDelay:(double)arg1 ;
-(id)completion;
-(unsigned long long)batchSize;
-(void)triggerIndexIncludingAdditions:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)knowledgeStorage:(id)arg1 didTombstoneEventsWithStreamNameCounts:(id)arg2 ;
@end


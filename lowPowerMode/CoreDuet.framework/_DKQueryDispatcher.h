/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKKnowledgeQuerying.h>

@protocol OS_dispatch_queue, _DKKnowledgeQuerying;
@class _DKContentProviderCache, NSObject, _DKKnowledgeContentProvider;

@interface _DKQueryDispatcher : NSObject <_DKKnowledgeQuerying> {

	_DKContentProviderCache* _contentProviderCache;
	NSObject*<OS_dispatch_queue> _queryQueue;
	NSObject*<OS_dispatch_queue> _defaultResponseQueue;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	_DKKnowledgeContentProvider* _knowledgeContentProvider;

}

@property (nonatomic,retain) _DKContentProviderCache * contentProviderCache;              //@synthesize contentProviderCache=_contentProviderCache - In the implementation block
-(id)executeQuery:(id)arg1 error:(id*)arg2 ;
-(_DKContentProviderCache *)contentProviderCache;
-(id)initWithKnowledgeStore:(id)arg1 ;
-(void)setContentProviderCache:(_DKContentProviderCache *)arg1 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 ;
@end

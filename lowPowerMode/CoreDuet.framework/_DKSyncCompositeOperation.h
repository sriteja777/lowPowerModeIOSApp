/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncOperation.h>

@class NSHashTable, NSMutableArray;

@interface _DKSyncCompositeOperation : _DKSyncOperation {

	_DKSyncCompositeOperation* _parent;
	AB _isReadyToStart;
	NSHashTable* _children;
	os_unfair_lock_s _lock;
	NSMutableArray* _errors;

}

@property (readonly) NSMutableArray * errors;              //@synthesize errors=_errors - In the implementation block
-(void)cancel;
-(id)initWithParent:(id)arg1 ;
-(BOOL)isReady;
-(void)dealloc;
-(id)init;
-(BOOL)isAsynchronous;
-(NSMutableArray *)errors;
-(void)endOperation;
-(void)childOperationWasAdded:(id)arg1 ;
-(void)setReadyToStart:(BOOL)arg1 ;
-(void)_shutdownOperation;
-(void)childOperation:(id)arg1 didEndWithErrors:(id)arg2 ;
@end


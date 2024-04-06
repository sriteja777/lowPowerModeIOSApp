/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _CDInteractionStore, NSObject, NSMutableDictionary;

@interface _CDTemporalInteractionAdvisor : NSObject {

	int _settingsNotifyToken;
	_CDInteractionStore* _store;
	NSObject*<OS_dispatch_queue> _dataQueue;
	NSMutableDictionary* _consumerToModelMap;

}

@property (retain) _CDInteractionStore * store;                                     //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataQueue;                //@synthesize dataQueue=_dataQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * consumerToModelMap;              //@synthesize consumerToModelMap=_consumerToModelMap - In the implementation block
@property (assign) int settingsNotifyToken;                                         //@synthesize settingsNotifyToken=_settingsNotifyToken - In the implementation block
-(id)initWithStore:(id)arg1 ;
-(void)setStore:(_CDInteractionStore *)arg1 ;
-(_CDInteractionStore *)store;
-(void)dealloc;
-(id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2 ;
-(void)setDataQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)rankContacts:(id)arg1 usingSettings:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)dataQueue;
-(void)updateConsumerModel;
-(NSMutableDictionary *)consumerToModelMap;
-(id)rankerForDate:(id)arg1 settings:(id)arg2 ;
-(int)settingsNotifyToken;
-(void)setConsumerToModelMap:(NSMutableDictionary *)arg1 ;
-(void)setSettingsNotifyToken:(int)arg1 ;
@end


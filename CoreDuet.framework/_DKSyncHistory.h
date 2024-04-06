/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface _DKSyncHistory : NSObject {

	NSDate* _lastSyncDate;
	unsigned long long _lastDaySyncCount;

}

@property (nonatomic,readonly) NSDate * lastSyncDate;                            //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (nonatomic,readonly) unsigned long long lastDaySyncCount;              //@synthesize lastDaySyncCount=_lastDaySyncCount - In the implementation block
-(id)init;
-(unsigned long long)lastDaySyncCount;
-(id)initWithLastSyncDate:(id)arg1 lastDaySyncCount:(unsigned long long)arg2 ;
-(NSDate *)lastSyncDate;
-(id)description;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_DKSyncContextObject.h>

@class NSMutableDictionary, _DKSyncPeer, NSMutableArray, NSDate, _DKKnowledgeStorage;

@interface _DKSyncPeerStatusTracker : _DKSyncContextObject {

	NSMutableDictionary* _peerInfos;
	_DKSyncPeer* _pseudoPeer;
	NSMutableArray* _observers;
	NSMutableDictionary* _lastSuccessfulActivityDates;
	NSDate* _firstForeignPeersCountDate;
	_DKKnowledgeStorage* _storage;

}

@property (assign,nonatomic,__weak) _DKKnowledgeStorage * storage;              //@synthesize storage=_storage - In the implementation block
+(id)sharedInstance;
+(id)peerStatusTrackerWithContext:(id)arg1 ;
+(id)stringForTransports:(long long)arg1 ;
-(BOOL)isSingleDevice;
-(_DKKnowledgeStorage *)storage;
-(void)setLastSeenDate:(id)arg1 onPeer:(id)arg2 ;
-(void)removeStatusChangeObserver:(id)arg1 ;
-(void)setStorage:(_DKKnowledgeStorage *)arg1 ;
-(id)peerWithZoneName:(id)arg1 sourceDeviceID:(id)arg2 ;
-(id)peersWithAnyActiveTransports;
-(void)setLastSuccessfulActivityDate:(id)arg1 onTransport:(long long)arg2 forPeer:(id)arg3 ;
-(void)addActiveTransports:(long long)arg1 toPeer:(id)arg2 ;
-(void)removePeer:(id)arg1 ;
-(id)peersWithActiveTransports:(long long)arg1 ;
-(void)debugLogPeers;
-(id)pseudoPeerForSyncTransportCloudUp;
-(void)removeActiveTransports:(long long)arg1 fromPeer:(id)arg2 ;
-(id)allPeers;
-(long long)activeTransportsForPeer:(id)arg1 ;
-(void)setSourceDeviceID:(id)arg1 version:(id)arg2 peer:(id)arg3 ;
-(id)peerWithCompanionLinkDevice:(id)arg1 ;
-(id)lastSuccessfulActivityDateOnTransport:(long long)arg1 forPeer:(id)arg2 ;
-(unsigned long long)foreignPeersCount;
-(id)initWithContext:(id)arg1 ;
-(id)addStatusChangeObserverWithBlock:(/*^block*/id)arg1 ;
-(id)existingPeerWithSourceDeviceID:(id)arg1 ;
-(id)existingPeerWithIDSDeviceIdentifier:(id)arg1 ;
-(id)peerWithIDSDeviceIdentifier:(id)arg1 ;
-(id)description;
@end


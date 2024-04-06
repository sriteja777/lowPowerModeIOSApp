/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKSyncCommonClass.h>

@class _DKSyncRapportCommonStorage;

@interface _DKSyncRapportStorage : NSObject <_DKSyncCommonClass> {

	_DKSyncRapportCommonStorage* _commonStorage;

}
-(BOOL)isAvailable;
-(void)setDeviceID:(id)arg1 ;
-(void)cancelOutstandingOperations;
-(BOOL)isTransportActiveForPeer:(id)arg1 ;
-(void)handshakeWithDuetSyncPeer:(id)arg1 orError:(id)arg2 ;
-(long long)transportType;
-(id)myDeviceID;
-(void)start;
-(void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)registerRequestIDsWithClient:(id)arg1 ;
-(id)client;
-(void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 highPriority:(BOOL)arg4 options:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(id)transformCaughtObject:(id)arg1 existingError:(id)arg2 ;
-(void)handleAvailabilityFailureWithPeer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)name;
-(id)transformResponseError:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSUUID;

@interface _DKSyncPeer : NSObject {

	BOOL _companion;
	BOOL _me;
	NSString* _sourceDeviceID;
	NSString* _idsDeviceIdentifier;
	NSString* _zoneName;
	NSDate* _lastSeenDate;
	NSString* _name;
	NSString* _model;
	NSString* _version;
	NSUUID* _uuid;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy) NSString * sourceDeviceID;                        //@synthesize sourceDeviceID=_sourceDeviceID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * sourceDeviceUUID; 
@property (nonatomic,copy) NSString * idsDeviceIdentifier;                   //@synthesize idsDeviceIdentifier=_idsDeviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * zoneName;                              //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,copy) NSDate * lastSeenDate;                            //@synthesize lastSeenDate=_lastSeenDate - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * model;                                 //@synthesize model=_model - In the implementation block
@property (assign,getter=isCompanion,nonatomic) BOOL companion;              //@synthesize companion=_companion - In the implementation block
@property (nonatomic,copy) NSString * version;                               //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL me;                                        //@synthesize me=_me - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                                    //@synthesize uuid=_uuid - In the implementation block
-(BOOL)me;
-(NSString *)identifier;
-(NSString *)version;
-(void)setIdsDeviceIdentifier:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(void)setSourceDeviceID:(NSString *)arg1 ;
-(void)setLastSeenDate:(NSDate *)arg1 ;
-(id)initWithIDSDeviceIdentifier:(id)arg1 zoneName:(id)arg2 ;
-(id)initWithIDSDeviceIdentifier:(id)arg1 ;
-(void)setCompanion:(BOOL)arg1 ;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(id)init;
-(BOOL)isCompanion;
-(NSString *)sourceDeviceID;
-(void)setZoneName:(NSString *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSDate *)lastSeenDate;
-(id)initWithZoneName:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(NSString *)zoneName;
-(void)setMe:(BOOL)arg1 ;
-(NSUUID *)sourceDeviceUUID;
-(NSString *)name;
-(NSString *)idsDeviceIdentifier;
-(id)description;
@end

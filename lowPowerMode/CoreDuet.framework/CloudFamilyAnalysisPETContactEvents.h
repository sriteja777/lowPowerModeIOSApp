/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CloudFamilyAnalysisPETContactEvents : PBCodable <NSCopying> {

	NSMutableArray* _contactEvents;

}

@property (nonatomic,retain) NSMutableArray * contactEvents;              //@synthesize contactEvents=_contactEvents - In the implementation block
+(Class)contactEventType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setContactEvents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contactEvents;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addContactEvent:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)contactEventsCount;
-(void)clearContactEvents;
-(id)contactEventAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end


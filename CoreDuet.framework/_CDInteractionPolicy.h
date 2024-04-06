/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CDRateLimiter;

@interface _CDInteractionPolicy : NSObject {

	_CDRateLimiter* _rateLimiter;
	unsigned long long _lifespanInSeconds;
	unsigned long long _maxNumberStored;
	unsigned long long _timeResolutionInSeconds;
	unsigned long long _maxNumberOfRecipients;
	unsigned long long _maxNumberOfKeywords;
	unsigned long long _maxNumberOfAttachments;

}

@property (retain) _CDRateLimiter * rateLimiter;                            //@synthesize rateLimiter=_rateLimiter - In the implementation block
@property (assign) unsigned long long lifespanInSeconds;                    //@synthesize lifespanInSeconds=_lifespanInSeconds - In the implementation block
@property (assign) unsigned long long maxNumberStored;                      //@synthesize maxNumberStored=_maxNumberStored - In the implementation block
@property (assign) unsigned long long timeResolutionInSeconds;              //@synthesize timeResolutionInSeconds=_timeResolutionInSeconds - In the implementation block
@property (assign) unsigned long long maxNumberOfRecipients;                //@synthesize maxNumberOfRecipients=_maxNumberOfRecipients - In the implementation block
@property (assign) unsigned long long maxNumberOfKeywords;                  //@synthesize maxNumberOfKeywords=_maxNumberOfKeywords - In the implementation block
@property (assign) unsigned long long maxNumberOfAttachments;               //@synthesize maxNumberOfAttachments=_maxNumberOfAttachments - In the implementation block
+(id)policyFromDictionary:(id)arg1 ;
+(unsigned long long)defaultMaxNumberOfKeywords;
+(id)defaultPolicyForMeetings;
+(unsigned long long)defaultMaxNumberOfRecipients;
+(unsigned long long)defaultMaxNumberOfAttachments;
+(unsigned long long)defaultMaxNumberStored;
+(unsigned long long)defaultLifespan;
+(id)defaultPolicy;
+(unsigned long long)defaultTimeResolutionInSeconds;
+(id)defaultPolicyForEmail;
+(id)policyWithRateLimiter:(id)arg1 lifespanInSeconds:(unsigned long long)arg2 maxNumberStored:(unsigned long long)arg3 timeResolutionInSeconds:(unsigned long long)arg4 maxNumberOfRecipients:(unsigned long long)arg5 maxNumberOfKeywords:(unsigned long long)arg6 maxNumberOfAttachments:(unsigned long long)arg7 ;
+(id)defaultPolicyForMessages;
+(id)defaultPolicyForCalls;
+(id)specialPolicyForFirstPartyApps;
-(unsigned long long)maxNumberStored;
-(id)initWithRateLimiter:(id)arg1 lifespanInSeconds:(unsigned long long)arg2 maxNumberStored:(unsigned long long)arg3 timeResolutionInSeconds:(unsigned long long)arg4 maxNumberOfRecipients:(unsigned long long)arg5 maxNumberOfKeywords:(unsigned long long)arg6 maxNumberOfAttachments:(unsigned long long)arg7 ;
-(void)setMaxNumberOfAttachments:(unsigned long long)arg1 ;
-(unsigned long long)maxNumberOfAttachments;
-(void)setLifespanInSeconds:(unsigned long long)arg1 ;
-(unsigned long long)lifespanInSeconds;
-(_CDRateLimiter *)rateLimiter;
-(void)setMaxNumberStored:(unsigned long long)arg1 ;
-(void)setRateLimiter:(_CDRateLimiter *)arg1 ;
-(unsigned long long)maxNumberOfRecipients;
-(void)setMaxNumberOfKeywords:(unsigned long long)arg1 ;
-(void)setTimeResolutionInSeconds:(unsigned long long)arg1 ;
-(unsigned long long)maxNumberOfKeywords;
-(id)description;
-(void)setMaxNumberOfRecipients:(unsigned long long)arg1 ;
-(unsigned long long)timeResolutionInSeconds;
@end

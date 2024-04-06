/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMHomeManagerDelegate.h>

@protocol OS_xpc_object;
@class NSObject, NSString, NSDate, _CDInteractionStore, CNContactStore, HKHealthStore, NSMutableDictionary, _CDCloudFamilyPETDataCollectionSession;

@interface _CDCloudFamilyPETDataCollectionTask : NSObject <HMHomeManagerDelegate> {

	BOOL _selectedForDataCollection;
	BOOL _deleteSessionOnCleanup;
	NSObject*<OS_xpc_object> _activity;
	NSString* _dataDirectory;
	NSString* _sessionPath;
	NSDate* _collectionDate;
	_CDInteractionStore* _interactionStore;
	CNContactStore* _contactStore;
	HKHealthStore* _healthStore;
	NSMutableDictionary* _videoBundleIDLookup;
	_CDCloudFamilyPETDataCollectionSession* _session;
	double _samplingRate;
	unsigned long long _maxBatches;
	unsigned long long _daysPerBatch;

}

@property (nonatomic,copy,readonly) NSString * dataDirectory;                               //@synthesize dataDirectory=_dataDirectory - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionPath;                                 //@synthesize sessionPath=_sessionPath - In the implementation block
@property (nonatomic,copy,readonly) NSDate * collectionDate;                                //@synthesize collectionDate=_collectionDate - In the implementation block
@property (nonatomic,retain) _CDInteractionStore * interactionStore;                        //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                 //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                   //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * videoBundleIDLookup;                   //@synthesize videoBundleIDLookup=_videoBundleIDLookup - In the implementation block
@property (nonatomic,retain) _CDCloudFamilyPETDataCollectionSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) double samplingRate;                                         //@synthesize samplingRate=_samplingRate - In the implementation block
@property (nonatomic,readonly) unsigned long long maxBatches;                               //@synthesize maxBatches=_maxBatches - In the implementation block
@property (nonatomic,readonly) unsigned long long daysPerBatch;                             //@synthesize daysPerBatch=_daysPerBatch - In the implementation block
@property (assign,nonatomic) BOOL selectedForDataCollection;                                //@synthesize selectedForDataCollection=_selectedForDataCollection - In the implementation block
@property (assign,nonatomic) BOOL deleteSessionOnCleanup;                                   //@synthesize deleteSessionOnCleanup=_deleteSessionOnCleanup - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;                           //@synthesize activity=_activity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cleanup;
-(id)initWithStorage:(id)arg1 contactStore:(id)arg2 healthStore:(id)arg3 activity:(id)arg4 sessionPath:(id)arg5 dataDirectory:(id)arg6 collectionDate:(id)arg7 samplingRate:(double)arg8 maxBatches:(unsigned long long)arg9 daysPerBatch:(unsigned long long)arg10 ;
-(void)setSession:(_CDCloudFamilyPETDataCollectionSession *)arg1 ;
-(_CDCloudFamilyPETDataCollectionSession *)session;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(CNContactStore *)contactStore;
-(void)_execute;
-(HKHealthStore *)healthStore;
-(id)allAirDropInteractionsFromStore:(id)arg1 fetchLimit:(unsigned long long)arg2 ;
-(id)labelMembers;
-(double)samplingRate;
-(void)setDeleteSessionOnCleanup:(BOOL)arg1 ;
-(NSDate *)collectionDate;
-(void)setSelectedForDataCollection:(BOOL)arg1 ;
-(BOOL)selectedForDataCollection;
-(unsigned long long)daysPerBatch;
-(id)contactsInHome;
-(id)contactsInContactStore;
-(id)contactKeysToFetch;
-(id)contactRelationsUsingMe:(id)arg1 ;
-(id)contactsEmergencyFamily;
-(id)contactsEmergency;
-(id)photosPeople;
-(id)contactParentsUsingRegexNamesUsingContacts:(id)arg1 ;
-(id)contactIdsInFmfFollowingMyLocation;
-(id)contactIdsInFmfSharingLocationWithMe;
-(id)airDropPeople;
-(id)airDropPeopleAtHome;
-(id)avgOfAllCallsUsingManager:(id)arg1 ;
-(id)contactFamilyRelationForContact:(id)arg1 contactRelations:(id)arg2 me:(id)arg3 ;
-(id)aggregateInteractionDataUsingStore:(id)arg1 contact:(id)arg2 callHistoryManager:(id)arg3 avgCallDur:(id)arg4 ;
-(NSString *)sessionPath;
-(id)generalContactRelationForContact:(id)arg1 ;
-(id)contactEmergencyForContact:(id)arg1 contactEmergency:(id)arg2 ;
-(id)contactFamilyEmergencyForContact:(id)arg1 contactFamilyEmergency:(id)arg2 ;
-(BOOL)deleteSessionOnCleanup;
-(id)contactParentsForContact:(id)arg1 contactParents:(id)arg2 ;
-(id)contactsInHomeForContact:(id)arg1 homeContacts:(id)arg2 ;
-(id)contactFamilyNameForContact:(id)arg1 me:(id)arg2 ;
-(BOOL)nonfamilyRelationExistsInSet:(id)arg1 ;
-(id)personRelationshipVocabularyByLocaleDictionary;
-(id)queryContactsForGivenName:(id)arg1 ;
-(id)relationCheckerForRelation:(id)arg1 ;
-(id)fetchEmergencyContacts;
-(id)relationshipRegularExpressionForRelationship;
-(BOOL)regexMatchForRegex:(id)arg1 string:(id)arg2 ;
-(unsigned long long)indexToInsertDate:(id)arg1 array:(id)arg2 ;
-(id)contactRelationForContact:(id)arg1 ;
-(id)resolveRelationWithContactGivenRelationWithMe:(id)arg1 ;
-(id)contactRelationFromEmergencyContact;
-(id)messagesFeaturesFromInteractions:(id)arg1 ;
-(_CDInteractionStore *)interactionStore;
-(id)thirdPartyMessageFeaturesFromresults:(id)arg1 ;
-(id)chHandlesForContact:(id)arg1 ;
-(id)callFeaturesFromInteractions:(id)arg1 avgCallLength:(double)arg2 contact:(id)arg3 ;
-(NSMutableDictionary *)videoBundleIDLookup;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(NSString *)dataDirectory;
-(id)allEmailAndPhoneNumberHandlesForContact:(id)arg1 ;
-(NSObject*<OS_xpc_object>)activity;
-(id)initWithActivity:(id)arg1 ;
-(unsigned long long)maxBatches;
-(void)execute;
-(void)setInteractionStore:(_CDInteractionStore *)arg1 ;
@end


/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVenueIdentifier : NSObject <GEOVenueIdentifier> {
    NSArray * _componentIdentifiers;
    bool  _hasMUID;
    bool  _hasVenueID;
    unsigned long long  _muid;
    unsigned long long  _venueID;
}

@property (nonatomic, readonly) NSArray *componentIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_hasMUID, nonatomic, readonly) bool hasMUID;
@property (getter=_hasVenueID, nonatomic, readonly) bool hasVenueID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long muid;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long venueID;

- (void).cxx_destruct;
- (bool)_hasMUID;
- (bool)_hasVenueID;
- (id)componentIdentifiers;
- (id)initWithVenueID:(unsigned long long)arg1;
- (id)initWithVenueID:(unsigned long long)arg1 buildingID:(unsigned long long)arg2 directoryGroupingID:(unsigned long long)arg3 muid:(unsigned long long)arg4;
- (id)initWithVenueID:(unsigned long long)arg1 buildingID:(unsigned long long)arg2 muid:(unsigned long long)arg3;
- (id)initWithVenueID:(unsigned long long)arg1 componentIdentifiers:(id)arg2;
- (id)initWithVenueID:(unsigned long long)arg1 muid:(unsigned long long)arg2;
- (id)initWithVenueID:(unsigned long long)arg1 muid:(unsigned long long)arg2 componentIdentifiers:(id)arg3;
- (id)initWithVenueIdentifiers:(id)arg1;
- (unsigned long long)muid;
- (id)placeDataVenueIdentifierForBuilding:(id)arg1;
- (id)placeDataVenueIdentifierForVenue;
- (unsigned long long)venueID;

@end
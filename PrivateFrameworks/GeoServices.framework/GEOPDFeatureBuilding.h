/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDFeatureBuilding : PBCodable <NSCopying> {
    GEOPDVenueBuilding * _building;
    NSMutableArray * _directoryGroups;
    NSMutableArray * _levels;
    PBUnknownFields * _unknownFields;
    GEOPDVenueContainer * _venueContainer;
}

@property (nonatomic, retain) GEOPDVenueBuilding *building;
@property (nonatomic, retain) NSMutableArray *directoryGroups;
@property (nonatomic, readonly) bool hasBuilding;
@property (nonatomic, readonly) bool hasVenueContainer;
@property (nonatomic, retain) NSMutableArray *levels;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDVenueContainer *venueContainer;

+ (Class)directoryGroupType;
+ (Class)levelType;

- (void).cxx_destruct;
- (void)addDirectoryGroup:(id)arg1;
- (void)addLevel:(id)arg1;
- (id)building;
- (void)clearDirectoryGroups;
- (void)clearLevels;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directoryGroupAtIndex:(unsigned long long)arg1;
- (id)directoryGroups;
- (unsigned long long)directoryGroupsCount;
- (bool)hasBuilding;
- (bool)hasVenueContainer;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)levelAtIndex:(unsigned long long)arg1;
- (id)levels;
- (unsigned long long)levelsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBuilding:(id)arg1;
- (void)setDirectoryGroups:(id)arg1;
- (void)setLevels:(id)arg1;
- (void)setVenueContainer:(id)arg1;
- (id)unknownFields;
- (id)venueContainer;
- (void)writeTo:(id)arg1;

@end

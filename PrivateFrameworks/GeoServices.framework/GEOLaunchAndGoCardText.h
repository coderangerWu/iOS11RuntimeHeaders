/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLaunchAndGoCardText : PBCodable <NSCopying> {
    GEOFormattedString * _cardTitle;
    GEOFormattedString * _routeDescription;
    GEOFormattedString * _routeTitle;
}

@property (nonatomic, retain) GEOFormattedString *cardTitle;
@property (nonatomic, readonly) bool hasCardTitle;
@property (nonatomic, readonly) bool hasRouteDescription;
@property (nonatomic, readonly) bool hasRouteTitle;
@property (nonatomic, retain) GEOFormattedString *routeDescription;
@property (nonatomic, retain) GEOFormattedString *routeTitle;

- (void).cxx_destruct;
- (id)cardTitle;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCardTitle;
- (bool)hasRouteDescription;
- (bool)hasRouteTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeDescription;
- (id)routeTitle;
- (void)setCardTitle:(id)arg1;
- (void)setRouteDescription:(id)arg1;
- (void)setRouteTitle:(id)arg1;
- (void)writeTo:(id)arg1;

@end

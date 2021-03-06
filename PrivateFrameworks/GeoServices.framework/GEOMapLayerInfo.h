/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapLayerInfo : PBCodable <NSCopying> {
    NSString * _dataURL;
    unsigned int  _formatVersion;
    struct { 
        unsigned int formatVersion : 1; 
        unsigned int timeToLiveSeconds : 1; 
        unsigned int version : 1; 
    }  _has;
    NSString * _patchURL;
    unsigned int  _timeToLiveSeconds;
    unsigned int  _version;
}

@property (nonatomic, retain) NSString *dataURL;
@property (nonatomic) unsigned int formatVersion;
@property (nonatomic, readonly) bool hasDataURL;
@property (nonatomic) bool hasFormatVersion;
@property (nonatomic, readonly) bool hasPatchURL;
@property (nonatomic) bool hasTimeToLiveSeconds;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSString *patchURL;
@property (nonatomic) unsigned int timeToLiveSeconds;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataURL;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)formatVersion;
- (bool)hasDataURL;
- (bool)hasFormatVersion;
- (bool)hasPatchURL;
- (bool)hasTimeToLiveSeconds;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)patchURL;
- (bool)readFrom:(id)arg1;
- (void)setDataURL:(id)arg1;
- (void)setFormatVersion:(unsigned int)arg1;
- (void)setHasFormatVersion:(bool)arg1;
- (void)setHasTimeToLiveSeconds:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setPatchURL:(id)arg1;
- (void)setTimeToLiveSeconds:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)timeToLiveSeconds;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end

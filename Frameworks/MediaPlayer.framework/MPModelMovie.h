/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelMovie : MPModelObject {
    id /* block */  _artworkCatalogBlock;
    NSArray * _clips;
    NSString * _descriptionText;
    double  _duration;
    id /* block */  _editorialArtworkCatalogBlock;
    long long  _explicitRating;
    bool  _hasCloudSyncSource;
    long long  _keepLocalEnableState;
    long long  _keepLocalManagedStatus;
    bool  _libraryAddEligible;
    bool  _libraryAdded;
    NSDate * _libraryAddedDate;
    MPModelFileAsset * _localFileAsset;
    NSDictionary * _movieInfoDictionary;
    MPModelPlaybackPosition * _playbackPosition;
    NSDate * _releaseDate;
    MPModelStoreAsset * _storeAsset;
    NSString * _tagline;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSArray *clips;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic) double duration;
@property (nonatomic, copy) id /* block */ editorialArtworkCatalogBlock;
@property (nonatomic) long long explicitRating;
@property (nonatomic) bool hasCloudSyncSource;
@property (nonatomic) long long keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus;
@property (getter=isLibraryAddEligible, nonatomic) bool libraryAddEligible;
@property (getter=isLibraryAdded, nonatomic) bool libraryAdded;
@property (nonatomic, copy) NSDate *libraryAddedDate;
@property (nonatomic, retain) MPModelFileAsset *localFileAsset;
@property (nonatomic, copy) NSDictionary *movieInfoDictionary;
@property (nonatomic, retain) MPModelPlaybackPosition *playbackPosition;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic, retain) MPModelStoreAsset *storeAsset;
@property (nonatomic, copy) NSString *tagline;
@property (nonatomic, copy) NSString *title;

+ (id)__MPModelPropertyMovieArtwork__PROPERTY;
+ (id)__MPModelPropertyMovieDescriptionText__PROPERTY;
+ (id)__MPModelPropertyMovieDuration__PROPERTY;
+ (id)__MPModelPropertyMovieEditorialArtwork__PROPERTY;
+ (id)__MPModelPropertyMovieExplicitRating__PROPERTY;
+ (id)__MPModelPropertyMovieHasCloudSyncSource__PROPERTY;
+ (id)__MPModelPropertyMovieInfoDictionary__PROPERTY;
+ (id)__MPModelPropertyMovieKeepLocalEnableState__PROPERTY;
+ (id)__MPModelPropertyMovieKeepLocalManagedStatus__PROPERTY;
+ (id)__MPModelPropertyMovieLibraryAddEligible__PROPERTY;
+ (id)__MPModelPropertyMovieLibraryAddedDate__PROPERTY;
+ (id)__MPModelPropertyMovieLibraryAdded__PROPERTY;
+ (id)__MPModelPropertyMovieReleaseDate__PROPERTY;
+ (id)__MPModelPropertyMovieTagline__PROPERTY;
+ (id)__MPModelPropertyMovieTitle__PROPERTY;
+ (id)__MPModelRelationshipMovieClips__PROPERTY;
+ (id)__MPModelRelationshipMovieLocalFileAsset__PROPERTY;
+ (id)__MPModelRelationshipMoviePlaybackPosition__PROPERTY;
+ (id)__MPModelRelationshipMovieStoreAsset__PROPERTY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__clips__KEY;
+ (id)__descriptionText__KEY;
+ (id)__duration__KEY;
+ (id)__editorialArtworkCatalogBlock__KEY;
+ (id)__explicitRating__KEY;
+ (id)__hasCloudSyncSource__KEY;
+ (id)__keepLocalEnableState__KEY;
+ (id)__keepLocalManagedStatus__KEY;
+ (id)__libraryAddEligible__KEY;
+ (id)__libraryAddedDate__KEY;
+ (id)__libraryAdded__KEY;
+ (id)__localFileAsset__KEY;
+ (id)__movieInfoDictionary__KEY;
+ (id)__playbackPosition__KEY;
+ (id)__releaseDate__KEY;
+ (id)__storeAsset__KEY;
+ (id)__tagline__KEY;
+ (id)__title__KEY;
+ (id)kindWithVariants:(unsigned long long)arg1;
+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)storeItemMetadataRequestItemIdentifierForIdentifiers:(id)arg1;
+ (bool)storeItemMetadataRequestNeedsPersonalizationForIdentifiers:(id)arg1;
+ (bool)supportsKeepLocalStatusObservation;
+ (bool)supportsLibraryAddStatusObservation;
+ (bool)supportsLibraryRemoval;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (id /* block */)artworkCatalogBlock;
- (id)clips;
- (id)descriptionText;
- (double)duration;
- (id)editorialArtworkCatalog;
- (id /* block */)editorialArtworkCatalogBlock;
- (long long)explicitRating;
- (bool)hasCloudSyncSource;
- (bool)isLibraryAddEligible;
- (bool)isLibraryAdded;
- (long long)keepLocalEnableState;
- (long long)keepLocalManagedStatus;
- (struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })libraryAddStatusObserverConfiguration;
- (id)libraryAddedDate;
- (long long)libraryRemovalSupportedOptions;
- (id)localFileAsset;
- (id)mediaItemPropertyValues;
- (id)movieInfoDictionary;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)playbackPosition;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)releaseDate;
- (void)setArtworkCatalogBlock:(id /* block */)arg1;
- (void)setClips:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setEditorialArtworkCatalogBlock:(id /* block */)arg1;
- (void)setExplicitRating:(long long)arg1;
- (void)setHasCloudSyncSource:(bool)arg1;
- (void)setKeepLocalEnableState:(long long)arg1;
- (void)setKeepLocalManagedStatus:(long long)arg1;
- (void)setLibraryAddEligible:(bool)arg1;
- (void)setLibraryAdded:(bool)arg1;
- (void)setLibraryAddedDate:(id)arg1;
- (void)setLocalFileAsset:(id)arg1;
- (void)setMovieInfoDictionary:(id)arg1;
- (void)setPlaybackPosition:(id)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setStoreAsset:(id)arg1;
- (void)setTagline:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)storeAsset;
- (id)tagline;
- (id)title;

@end

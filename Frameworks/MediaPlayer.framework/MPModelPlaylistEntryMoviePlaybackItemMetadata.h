/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelPlaylistEntryMoviePlaybackItemMetadata : MPModelMoviePlaybackItemMetadata {
    MPModelGenericObject * _modelGenericObject;
    MPModelPlaylistEntry * _playlistEntry;
}

@property (nonatomic, retain) MPModelPlaylistEntry *playlistEntry;

+ (id)requiredProperties;

- (void).cxx_destruct;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)modelGenericObject;
- (id)movie;
- (id)playlistEntry;
- (void)setMovie:(id)arg1;
- (void)setPlaylistEntry:(id)arg1;

@end

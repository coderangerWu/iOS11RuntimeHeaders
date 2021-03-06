/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOResourcesVersionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask> {
    NSSet * _activeScales;
    NSSet * _activeScenarios;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _completionHandler;
    GEOResourceLoader * _immediateResourceLoader;
    NSArray * _loadedResources;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    GEOResourcesVersionMigrator * _migrator;
    GEOTileGroup * _newTileGroup;
    GEOActiveTileGroup * _oldTileGroup;
    GEOReportedProgress * _progress;
    GEOMapLayerDataStorePruner * _pruner;
    GEOResources * _resourceManifest;
    bool  _running;
    NSArray * _unloadedConditionalResources;
    GEOResourceLoader * _wifiOnlyResourceLoader;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;

+ (Class)_resourceLoaderClass;
+ (id)_resourcesDirectory:(id)arg1;

- (void).cxx_destruct;
- (void)_loadImmediateResources:(id)arg1 conditionalWifiResources:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_resourcesDirectory;
- (id)_staleResourceForResource:(id)arg1;
- (void)cancel;
- (id)init;
- (id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 oldTileGroup:(id)arg5 activeScales:(id)arg6 activeScenarios:(id)arg7;
- (id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 oldTileGroup:(id)arg5 activeScales:(id)arg6 activeScenarios:(id)arg7 pruner:(id)arg8;
- (void)populateTileGroup:(id)arg1;
- (id)progress;
- (void)removeOldData:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1 callbackQueue:(id)arg2;

@end

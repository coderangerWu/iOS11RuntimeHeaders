/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCoreDataCoreSpotlightDelegate : NSObject {
    NSManagedObjectContext * _context;
    NSString * _domainIdentifier;
    NSString * _indexName;
}

- (void)_doFullReimport;
- (bool)_initialImportCompleted;
- (id)_processedOidsForDictionary:(id)arg1;
- (id)_processedOidsForSaveRequest:(id)arg1;
- (void)_reindexInstancesOf:(id)arg1 in:(id)arg2;
- (id)_searchableItemForObject:(id)arg1;
- (void)_updateSpotlightIndexForObjectsWithIDs:(id)arg1;
- (void)_updateSpotlightIndexFromNotification:(id)arg1;
- (void)_updateSpotlightIndexFromSaveRequest:(id)arg1;
- (id)attributeSetForObject:(id)arg1;
- (void)dealloc;
- (id)domainIdentifier;
- (id)indexName;
- (id)initForStoreWithDescription:(id)arg1 model:(id)arg2;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id /* block */)arg3;

@end

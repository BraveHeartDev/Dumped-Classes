@interface PLChangeNotificationCenter : NSObject
{
	BOOL _isProcessingRemoteDidSave;
	id _thumbnailIndexIsolation;
	id _changedThumbnailIndexes;
	unsigned int _thumbnailIndexesChangeCounter;
	int _cameraPreviewChangeListenerCount;
	id _cameraPreviewChangedToken;
	int _stackViewImageChangeListenerCount;
	id _snapshots;
	struct _changedAlbumLists;
	struct _albumListsContent;
	struct _changedAlbums;
	struct _albumsContent;
	struct _changedAssets;
	id _assetsWithCloudCommentChanges;
	struct _momentsContent;
	struct _changedMoments;
	struct _momentListsContent;
	struct _changedMomentLists;
	struct _changedCloudFeedEntries;
	id _moc;
	id _enqueuedNotifications;
	id _changedInflightAssetsAlbumsToSnapshots;
	id _remoteNotificationData;
	BOOL _isOverloaded;
	id _overloadedObjects;
}

+ dealloc
+ init
+ addObserver:selector:name:object:
+ removeObserver:name:object:
+ addObserverForName:object:queue:usingBlock:
+ removeObserver:
+ observeValueForKeyPath:ofObject:change:context:
+ postShouldReloadNotification
+ processContextDidChangeNotification:
+ managedObjectContextWillBeOverloaded:withNotificationData:usingObjectIDs:
+ managedObjectContextWasOverloaded:withNotificationData:usingObjectIDs:
+ managedObjectContext:willProcessRemoteContextSave:usingObjectIDs:isCoalescedEvent:
+ managedObjectContext:didProcessRemoteContextSave:usingObjectIDs:
+ processChangeHubEvent:withGroup:
+ processContextDidSaveNotification:
+ backingCenter
+ _takeSnapshotOfObject:
+ _saveCurrentStateForAlbum:
+ _splitContextDidChangeNotification:
+ _sendNotificationsForSplitChanges
+ _processThumbnailsUpdatedEvent:
+ descriptionOfSplitChanges
+ _enqueuePhotoLibraryNotifications
+ _enqueueAlbumNotifications
+ _enqueueMomentChangeNotifications
+ _enqueueAlbumListNotifications
+ _enqueueMomentListChangeNotifications
+ _enqueueCloudCommentsNotifications
+ _enqueueCloudFeedEntriesChangeNotifications
+ _enqueueAssetChangeNotification
+ _persistUserAlbumChanges
+ _cleanupState
+ _postEnqueuedNotifications
+ _enqueueNotification:object:userInfoWithObjects:forKeys:count:
+ _snapshotForObject:
+ _enqueueAssetContainerListChangeNotification:
+ _enqueueAlbumChangeNotification:
+ _enqueueInvitationRecordsChangeNotification:
+ enqueueNotification:
+ _enqueueAssetContainerChangeNotification:
+ _isInterestedInUpdatesOfObject:
+ _takeSnapshotFromCommittedValuesOfObject:
+ _shouldForceFetchingAlbumsToReload
+ _evaluateContainersWithUpdatedContent
+ _evaluateUpdatedAssets
+ _enqueueNotification:object:userInfo:
+ _keysOfInterestForObject:
+ _takeSnapshotOfObject:useCommitedValues:
+ _takeSnapshotsFromContext:forRemoteContextSaveNotification:usingObjectIDs:
+ _registerForCameraPreviewWellChanges
+ _unregisterForCameraPreviewWellChanges
+ addAssetContainerChangeObserver:container:
+ removeAssetContainerChangeObserver:container:
+ addAssetContainerListChangeObserver:containerList:
+ removeAssetContainerListChangeObserver:containerList:
+ addCloudCommentsChangeObserver:asset:
+ removeCloudCommentsChangeObserver:asset:
+ addInvitationRecordsObserver:
+ removeInvitationRecordsObserver:
+ addCloudFeedEntriesObserver:
+ removeCloudFeedEntriesObserver:
+ addAssetChangeObserver:
+ removeAssetChangeObserver:
+ addShouldReloadObserver:
+ removeShouldReloadObserver:
+ inflightAssetsAlbumWillChange:
+ _orderedRelationshipsOfInterestForObject:
+ _attributesOfInterestForObject:
+ _toOneRelationshipsOfInterestForObject:
+ enumerateIndexMappingCachesForObject:withBlock:
+ addCameraPreviewWellImageChangeObserver:
+ removeCameraPreviewWellImageChangeObserver:
+ _registerForStackViewImageChanges
+ _unregisterForStackViewImageChanges
- dealloc
- init
- addObserver:selector:name:object:
- removeObserver:name:object:
- addObserverForName:object:queue:usingBlock:
- removeObserver:
- observeValueForKeyPath:ofObject:change:context:
- postShouldReloadNotification
- processContextDidChangeNotification:
- managedObjectContextWillBeOverloaded:withNotificationData:usingObjectIDs:
- managedObjectContextWasOverloaded:withNotificationData:usingObjectIDs:
- managedObjectContext:willProcessRemoteContextSave:usingObjectIDs:isCoalescedEvent:
- managedObjectContext:didProcessRemoteContextSave:usingObjectIDs:
- processChangeHubEvent:withGroup:
- processContextDidSaveNotification:
- backingCenter
- _takeSnapshotOfObject:
- _saveCurrentStateForAlbum:
- _splitContextDidChangeNotification:
- _sendNotificationsForSplitChanges
- _processThumbnailsUpdatedEvent:
- descriptionOfSplitChanges
- _enqueuePhotoLibraryNotifications
- _enqueueAlbumNotifications
- _enqueueMomentChangeNotifications
- _enqueueAlbumListNotifications
- _enqueueMomentListChangeNotifications
- _enqueueCloudCommentsNotifications
- _enqueueCloudFeedEntriesChangeNotifications
- _enqueueAssetChangeNotification
- _persistUserAlbumChanges
- _cleanupState
- _postEnqueuedNotifications
- _enqueueNotification:object:userInfoWithObjects:forKeys:count:
- _snapshotForObject:
- _enqueueAssetContainerListChangeNotification:
- _enqueueAlbumChangeNotification:
- _enqueueInvitationRecordsChangeNotification:
- enqueueNotification:
- _enqueueAssetContainerChangeNotification:
- _isInterestedInUpdatesOfObject:
- _takeSnapshotFromCommittedValuesOfObject:
- _shouldForceFetchingAlbumsToReload
- _evaluateContainersWithUpdatedContent
- _evaluateUpdatedAssets
- _enqueueNotification:object:userInfo:
- _keysOfInterestForObject:
- _takeSnapshotOfObject:useCommitedValues:
- _takeSnapshotsFromContext:forRemoteContextSaveNotification:usingObjectIDs:
- _registerForCameraPreviewWellChanges
- _unregisterForCameraPreviewWellChanges
- addAssetContainerChangeObserver:container:
- removeAssetContainerChangeObserver:container:
- addAssetContainerListChangeObserver:containerList:
- removeAssetContainerListChangeObserver:containerList:
- addCloudCommentsChangeObserver:asset:
- removeCloudCommentsChangeObserver:asset:
- addInvitationRecordsObserver:
- removeInvitationRecordsObserver:
- addCloudFeedEntriesObserver:
- removeCloudFeedEntriesObserver:
- addAssetChangeObserver:
- removeAssetChangeObserver:
- addShouldReloadObserver:
- removeShouldReloadObserver:
- inflightAssetsAlbumWillChange:
- _orderedRelationshipsOfInterestForObject:
- _attributesOfInterestForObject:
- _toOneRelationshipsOfInterestForObject:
- enumerateIndexMappingCachesForObject:withBlock:
- addCameraPreviewWellImageChangeObserver:
- removeCameraPreviewWellImageChangeObserver:
- _registerForStackViewImageChanges
- _unregisterForStackViewImageChanges
@end
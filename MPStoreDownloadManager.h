@interface MPStoreDownloadManager : NSObject
{
	id _accessQueue;
	id _blockObservers;
	id _cellularDownloadAlertView;
	id _cellularDownloadRequestCompletionHandlers;
	id _downloadManager;
	id _downloads;
	id _downloadIdentifiersToDownloads;
	id _downloadsToObservers;
	id _libraryIdentifiersToDownloads;
	id _observersForAllDownloads;
	id _purchaseManager;
	id _storeIdentifiersToDownloads;
}

+ downloadManager:downloadStatesDidChange:
+ downloadForMediaItem:
+ addFinishHandler:forDownloads:
+ addDownloads:
+ requestPermissionToDownloadWithType:completionHandler:
+ addObserver:forDownloads:
+ removeObserver:forDownloads:
+ cancelDownloads:
+ _networkTypeDidChangeNotification:
+ downloads
+ downloadForStoreID:
+ downloadForMediaItemPersistentID:
+ _updateMediaItemPropertiesForFinishedStoreDownload:SSDownload:
+ _updateDownloadsWithAdditions:removals:
+ _matchCellularRestrictedDidChangeNotification:
+ _onQueue_hasExistingDownloadForStoreDownload:
+ _sendDownloadsDidFinishToObserversForDownloads:notifyDownloadManager:completionHandler:
+ _registerBlockObserver:
+ _sendDownloadsDidFinishPurchasesToObserversForDownloads:
+ _existingDownloadForSSDownload:
+ _onQueue_addDownloadToMapTables:
+ _sendDownloadsDidProgressToObserversForDownloads:
+ _dismissAndCleanupCellularDownloadAlertViewWithResult:
+ _onQueue_findStoreDownloadWithSSDownload:SSPurchase:
+ _observersForAllDownloads
+ _observersForDownload:
+ _onQueue_removeDownloadFromMapTables:
+ _sendDownloadsDidChangeToObserversWithAddedDownloads:removedDownloads:
+ purchaseManager:didFinishPurchasesWithResponses:
+ prioritizeDownloads:
+ _addPurchaseFinishedHandler:forDownloads:
+ _unregisterBlockObserver:
+ dealloc
+ init
+ _init
+ alertView:didDismissWithButtonIndex:
+ .cxx_destruct
- downloadManager:downloadStatesDidChange:
- downloadForMediaItem:
- addFinishHandler:forDownloads:
- addDownloads:
- requestPermissionToDownloadWithType:completionHandler:
- addObserver:forDownloads:
- removeObserver:forDownloads:
- cancelDownloads:
- _networkTypeDidChangeNotification:
- downloads
- downloadForStoreID:
- downloadForMediaItemPersistentID:
- _updateMediaItemPropertiesForFinishedStoreDownload:SSDownload:
- _updateDownloadsWithAdditions:removals:
- _matchCellularRestrictedDidChangeNotification:
- _onQueue_hasExistingDownloadForStoreDownload:
- _sendDownloadsDidFinishToObserversForDownloads:notifyDownloadManager:completionHandler:
- _registerBlockObserver:
- _sendDownloadsDidFinishPurchasesToObserversForDownloads:
- _existingDownloadForSSDownload:
- _onQueue_addDownloadToMapTables:
- _sendDownloadsDidProgressToObserversForDownloads:
- _dismissAndCleanupCellularDownloadAlertViewWithResult:
- _onQueue_findStoreDownloadWithSSDownload:SSPurchase:
- _observersForAllDownloads
- _observersForDownload:
- _onQueue_removeDownloadFromMapTables:
- _sendDownloadsDidChangeToObserversWithAddedDownloads:removedDownloads:
- purchaseManager:didFinishPurchasesWithResponses:
- prioritizeDownloads:
- _addPurchaseFinishedHandler:forDownloads:
- _unregisterBlockObserver:
- dealloc
- init
- _init
- alertView:didDismissWithButtonIndex:
- .cxx_destruct
@end
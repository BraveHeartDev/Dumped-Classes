@interface NSUbiquitousKeyValueStore : NSObject
{
	id _private1;
	id _private2;
	id _private3;
	pointer _private4;
	Array _reserved;
}

+ dictionaryForKey:
+ doubleForKey:
+ setDouble:forKey:
+ initWithBundleIdentifier:storeIdentifier:additionalStore:
+ _scheduleRemoteSynchronization
+ _sourceDidChange:
+ _configurationDidChange
+ _registerToDaemon
+ _pleaseSynchronize:
+ initWithBundleIdentifier:storeIdentifier:
+ _setShouldAvoidSynchronize:
+ _storeChangeFromSourceChange:
+ _hasPendingSynchronize
+ _setHasPendingSynchronize:
+ _rethrowException:
+ synchronizeWithSourceForced:
+ _postDidChangeNotificationExternalChanges:sourceChangeCount:
+ _syncConcurrentlyForced:
+ _syncConcurrently
+ _adjustTimer:
+ _adjustTimerForAutosync
+ _synchronizeForced:notificationQueue:
+ _shouldAvoidSynchronize
+ _synchronizeForced:
+ maximumKeyCount
+ maximumKeyLength
+ maximumDataLengthPerKey
+ maximumTotalDataLength
+ _useSourceAsyncWithBlock:
+ _useSourceSyncWithBlock:
+ registerDefaultValues:
+ synchronizeWithCompletionHandler:
+ _unregisterFromDaemon
+ setArray:forKey:
+ setDictionary:forKey:
+ longLongForKey:
+ setLongLong:forKey:
+ dealloc
+ init
+ boolForKey:
+ removeObjectForKey:
+ synchronize
+ stringForKey:
+ setBool:forKey:
+ initWithBundleIdentifier:
+ dictionaryRepresentation
+ setData:forKey:
+ setString:forKey:
+ dataForKey:
+ objectForKey:
+ setObject:forKey:
+ finalize
+ arrayForKey:
- dictionaryForKey:
- doubleForKey:
- setDouble:forKey:
- initWithBundleIdentifier:storeIdentifier:additionalStore:
- _scheduleRemoteSynchronization
- _sourceDidChange:
- _configurationDidChange
- _registerToDaemon
- _pleaseSynchronize:
- initWithBundleIdentifier:storeIdentifier:
- _setShouldAvoidSynchronize:
- _storeChangeFromSourceChange:
- _hasPendingSynchronize
- _setHasPendingSynchronize:
- _rethrowException:
- synchronizeWithSourceForced:
- _postDidChangeNotificationExternalChanges:sourceChangeCount:
- _syncConcurrentlyForced:
- _syncConcurrently
- _adjustTimer:
- _adjustTimerForAutosync
- _synchronizeForced:notificationQueue:
- _shouldAvoidSynchronize
- _synchronizeForced:
- maximumKeyCount
- maximumKeyLength
- maximumDataLengthPerKey
- maximumTotalDataLength
- _useSourceAsyncWithBlock:
- _useSourceSyncWithBlock:
- registerDefaultValues:
- synchronizeWithCompletionHandler:
- _unregisterFromDaemon
- setArray:forKey:
- setDictionary:forKey:
- longLongForKey:
- setLongLong:forKey:
- dealloc
- init
- boolForKey:
- removeObjectForKey:
- synchronize
- stringForKey:
- setBool:forKey:
- initWithBundleIdentifier:
- dictionaryRepresentation
- setData:forKey:
- setString:forKey:
- dataForKey:
- objectForKey:
- setObject:forKey:
- finalize
- arrayForKey:
@end
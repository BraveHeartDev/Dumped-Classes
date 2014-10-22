@interface PFUbiquitySetupAssistant : NSObject
{
	id _options;
	id _psc;
	id _store;
	id _storeType;
	id _storeURL;
	id _actualStoreFileURL;
	id _storeMetadataDict;
	BOOL _needsMetadataWrite;
	id _storeKV;
	BOOL _ubiquityEnabled;
	id _ubiquityIdentityToken;
	id _ubiquityRootURL;
	id _ubiquityRootSubpath;
	id _ubiquityName;
	id _ubiquityContainerIdentifier;
	id _localPeerID;
	id _modelVersionHash;
	id _previousModelVersionHash;
	id _ubiquityRootLocation;
	id _localRootLocation;
	id _stack;
	id _storeMetadata;
	id _localPeerState;
	id _metaKV;
	id _baseline;
	BOOL _baselineFileExistsInCloud;
	BOOL _hasUploadingBaseline;
	BOOL _monitorUploadingBaselineAsync;
	BOOL _didBaselineCopy;
	id _baselineKV;
	BOOL _votedOffIsland;
	BOOL _reapUbiquitousLogs;
	BOOL _respondToBaselineRoll;
	BOOL _storeFileExists;
	BOOL _storeFileIsReadOnly;
	BOOL _hasStoreMetadataFile;
	BOOL _hasStoreMetadataEntry;
	BOOL _hasContainerUUID;
	BOOL _hasContainerUUIDInStore;
	BOOL _needsMetadataRecovery;
	id _localPeerReceipt;
	id _receiptKV;
	id _containerIdentifier;
	id _preStoreContainerUUID;
	BOOL _usedExistingUUIDMapping;
	BOOL _hasLocalTransactionLogs;
	BOOL _hasMigrationOptions;
	BOOL _didMigrateBaseline;
	BOOL _storeWasMigrated;
	id _migrationAssistant;
	id _migrationManager;
	BOOL _replayLogsSynchronously;
	BOOL _useLocalAccount;
	BOOL _seedStore;
	id _seedStoreURL;
	BOOL _haveExistingUUIDMappings;
	BOOL _abortSetup;
	id _entry;
	BOOL _gotExportNotification;
	int _sideLoadLock;
	id _logLocationsExportedDuringSideLoad;
	id _gidToRid;
	id _entityNameToGidSet;
	id _initialSyncSemaphore;
	int _initialSyncComplete;
	id _queryLocations;
	BOOL _notifyAboutSetupProgress;
	long long _numSetupTries;
	usigned long long _retryDelaySec;
	BOOL _failSetup;
	id _failSetupError;
	BOOL _gotAccountChange;
	BOOL _cacheFilePresenterForUbiquityRoot;
}

@end
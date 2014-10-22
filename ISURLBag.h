@interface ISURLBag : NSObject
{
	id _context;
	id _defaultConstraints;
	id _dictionary;
	id _guidPatterns;
	id _guidSchemes;
	id _headerPatterns;
	double _invalidationTime;
	BOOL _loadedFromDiskCache;
}

+ initWithURLBagContext:
+ dealloc
+ init
+ valueForKey:
+ writeToFile:options:error:
+ isValid
+ initWithContentsOfFile:
+ urlForKey:
+ URLBagContext
+ initWithRawDictionary:
+ _setDictionary:
+ _copyGUIDPatternsFromDictionary:
+ _copyGUIDSchemesFromDictionary:
+ _copyHeaderPatternsFromDictionary:
+ _networkConstraintsCachePath
+ _loadFromSignedDictionary:returningError:
+ _writeNetworkConstraintsCacheFile
+ _writeURLResolutionCacheFile
+ invalidationTime
+ setInvalidationTime:
+ copyExtraHeadersForURL:
+ shouldSendGUIDForURL:
+ urlIsTrusted:
+ loadFromDictionary:returningError:
+ availableStorefrontItemKinds
+ setInvalidationTimeWithExprationInterval:
+ sanitizedURLForURL:
+ setURLBagContext:
+ URLBagDictionary
+ loadedFromDiskCache
+ setLoadedFromDiskCache:
+ URLForURL:clientIdentifier:
+ versionIdentifier
+ searchQueryParametersForClientIdentifier:networkType:
+ networkConstraintsForDownloadKind:
- initWithURLBagContext:
- dealloc
- init
- valueForKey:
- writeToFile:options:error:
- isValid
- initWithContentsOfFile:
- urlForKey:
- URLBagContext
- initWithRawDictionary:
- _setDictionary:
- _copyGUIDPatternsFromDictionary:
- _copyGUIDSchemesFromDictionary:
- _copyHeaderPatternsFromDictionary:
- _networkConstraintsCachePath
- _loadFromSignedDictionary:returningError:
- _writeNetworkConstraintsCacheFile
- _writeURLResolutionCacheFile
- invalidationTime
- setInvalidationTime:
- copyExtraHeadersForURL:
- shouldSendGUIDForURL:
- urlIsTrusted:
- loadFromDictionary:returningError:
- availableStorefrontItemKinds
- setInvalidationTimeWithExprationInterval:
- sanitizedURLForURL:
- setURLBagContext:
- URLBagDictionary
- loadedFromDiskCache
- setLoadedFromDiskCache:
- URLForURL:clientIdentifier:
- versionIdentifier
- searchQueryParametersForClientIdentifier:networkType:
- networkConstraintsForDownloadKind:
@end
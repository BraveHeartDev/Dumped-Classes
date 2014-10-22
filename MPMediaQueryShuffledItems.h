@interface MPMediaQueryShuffledItems : NSObject
{
	usigned long long _activeShuffleType;
	BOOL _dirty;
	id _orderedArray;
	id _indexMap;
	id _sourceMediaQuery;
	id _sourceMediaQueryItems;
	BOOL _autoReshufflingDisabled;
}

+ _resetCaches
+ realShuffleType
+ autoReshufflingDisabled
+ setAutoReshufflingDisabled:
+ focusedRange
+ setFocusedRange:
+ initWithSourceMediaQuery:orderedItems:indexMap:shuffleType:
+ _rebuildCaches
+ _getFixedItemCount:
+ nonRepeatingCount
+ nonGrowingCount
+ indexOfItemWithPersistentID:greaterThanOrEqualToIndex:
+ indexOfObject:greaterThanOrEqualToIndex:
+ _rebuildCachesWithInitialSourceIndex:
+ _shuffleMutableOrderedArrayWithInitialIndex:
+ _rebuildGroupedCachesWithInitialSourceItemIndex:
+ _rebuildItemCachesWithInitialSourceItemIndex:
+ _includeInShuffleItemsForQuery:
+ initWithSourceMediaQuery:
+ indexOfItemWithPersistentID:
+ invalidateSourceMediaQueryAndLoadItems
+ shuffleAlbumsWithInitialIndex:
+ shuffleItemsWithInitialIndex:
+ unshuffle
+ sourceMediaQuery
+ initWithCoder:
+ encodeWithCoder:
+ count
+ objectAtIndex:
+ indexOfObject:
+ copyWithZone:
+ items
+ .cxx_destruct
- _resetCaches
- realShuffleType
- autoReshufflingDisabled
- setAutoReshufflingDisabled:
- focusedRange
- setFocusedRange:
- initWithSourceMediaQuery:orderedItems:indexMap:shuffleType:
- _rebuildCaches
- _getFixedItemCount:
- nonRepeatingCount
- nonGrowingCount
- indexOfItemWithPersistentID:greaterThanOrEqualToIndex:
- indexOfObject:greaterThanOrEqualToIndex:
- _rebuildCachesWithInitialSourceIndex:
- _shuffleMutableOrderedArrayWithInitialIndex:
- _rebuildGroupedCachesWithInitialSourceItemIndex:
- _rebuildItemCachesWithInitialSourceItemIndex:
- _includeInShuffleItemsForQuery:
- initWithSourceMediaQuery:
- indexOfItemWithPersistentID:
- invalidateSourceMediaQueryAndLoadItems
- shuffleAlbumsWithInitialIndex:
- shuffleItemsWithInitialIndex:
- unshuffle
- sourceMediaQuery
- initWithCoder:
- encodeWithCoder:
- count
- objectAtIndex:
- indexOfObject:
- copyWithZone:
- items
- .cxx_destruct
@end
@interface ABMembersDataSource : NSObject
{
	id _delegate;
	id _styleProvider;
	pointer _addressBook;
	id _model;
	id _sectionIndexTitles;
	pointer _sectionHeaderToSortingIndex;
	pointer _displayableSectionHeaderToSectionHeader;
	pointer _sectionHeaderToDisplayableSectionHeader;
	pointer _displayableSectionIndexToSectionIndex;
	pointer _sectionIndexToDisplayableSectionIndex;
	id _bannerView;
	id _meCard;
}

+ styleProvider
+ setStyleProvider:
+ globalRowForDisplayedMemberIndex:
+ shouldShowGroups
+ setBannerView:inTableView:
+ _invalidateMeCard
+ createAllDisplayableSectionIndexAndHeaderCaches
+ displayableSectionHeaderFromSectionHeader:
+ displayableSectionIndexFromSectionIndex:
+ sectionIndexFromDisplayableSectionIndex:
+ sectionHeaderSortingIndices
+ globalRowForBanner
+ displayedMemberIndexForIndexPath:inTableView:
+ indexPathForDisplayedMemberIndex:inTableView:
+ dealloc
+ setDelegate:
+ tableView:willDisplayCell:forRowAtIndexPath:
+ tableView:willDisplayHeaderView:forSection:
+ tableView:heightForRowAtIndexPath:
+ tableView:heightForHeaderInSection:
+ tableView:viewForHeaderInSection:
+ tableView:didSelectRowAtIndexPath:
+ scrollViewWillBeginDragging:
+ tableView:numberOfRowsInSection:
+ tableView:cellForRowAtIndexPath:
+ numberOfSectionsInTableView:
+ sectionIndexTitlesForTableView:
+ tableView:sectionForSectionIndexTitle:atIndex:
+ delegate
+ tableView:frameForSectionIndexGivenProposedFrame:
+ model
+ setModel:
+ addressBook
+ bannerView
+ setAddressBook:
+ titleForHeaderInSection:
- styleProvider
- setStyleProvider:
- globalRowForDisplayedMemberIndex:
- shouldShowGroups
- setBannerView:inTableView:
- _invalidateMeCard
- createAllDisplayableSectionIndexAndHeaderCaches
- displayableSectionHeaderFromSectionHeader:
- displayableSectionIndexFromSectionIndex:
- sectionIndexFromDisplayableSectionIndex:
- sectionHeaderSortingIndices
- globalRowForBanner
- displayedMemberIndexForIndexPath:inTableView:
- indexPathForDisplayedMemberIndex:inTableView:
- dealloc
- setDelegate:
- tableView:willDisplayCell:forRowAtIndexPath:
- tableView:willDisplayHeaderView:forSection:
- tableView:heightForRowAtIndexPath:
- tableView:heightForHeaderInSection:
- tableView:viewForHeaderInSection:
- tableView:didSelectRowAtIndexPath:
- scrollViewWillBeginDragging:
- tableView:numberOfRowsInSection:
- tableView:cellForRowAtIndexPath:
- numberOfSectionsInTableView:
- sectionIndexTitlesForTableView:
- tableView:sectionForSectionIndexTitle:atIndex:
- delegate
- tableView:frameForSectionIndexGivenProposedFrame:
- model
- setModel:
- addressBook
- bannerView
- setAddressBook:
- titleForHeaderInSection:
@end
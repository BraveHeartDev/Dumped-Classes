@interface SBIconListView : UIView
{
	id _model;
	id _viewMap;
	long long _orientation;
	double _statusBarHeight;
	id _bouncedIcon;
	id _removedIcons;
	id _rotationContainers;
	bit[1] _needsLayout;
	bit[1] _rotating;
	id _fadeView;
	BOOL _purged;
	id _notShownIconViews;
	BOOL _isEditing;
	id _layoutDelegate;
	struct _wallpaperRelativeFrame;
}

+ didMoveToSuperview
+ removeAllIconAnimations
+ initWithModel:orientation:viewMap:
+ visibleIcons
+ iconColumnsForCurrentOrientation
+ sideIconInset
+ iconAtPoint:index:proposedOrder:grabbedIcon:
+ iconsInRowForSpacingCalculation
+ horizontalIconPadding
+ defaultIconSize
+ originForIconAtCoordinate:
+ columnAtPoint:
+ topIconInset
+ rowAtPoint:
+ layoutIconsNow
+ _wallpaperRelativeIconCenterForIconView:
+ enumerateIconViewsUsingBlock:
+ _wallpaperRelativeIconCenterForIconImageCenter:
+ coordinateForIcon:
+ _sendLayoutDelegateWouldHaveMovedIcon:
+ _layoutIcon:atIndex:createViewNow:pop:
+ containsIcon:
+ firstFreeSlotIndexForType:
+ firstFreeSlotOrLastSlotIndexForType:
+ originForIconAtIndex:
+ _popIconView:
+ _updateEditingStateForIcons:animated:
+ removedIcons
+ setIconsNeedLayout
+ layoutIconsIfNeeded:domino:
+ insertIcon:atIndex:moveNow:pop:
+ removeIconAtIndex:
+ baseIconViewClass
+ iconCoordinateForIndex:forOrientation:
+ centerForIconCoordinate:
+ _sendLayoutDelegateLayoutInvalidated
+ indexForCoordinate:forOrientation:
+ iconAtPoint:index:
+ showIconImagesFromColumn:toColumn:totalColumns:allowAnimations:
+ enumerateIconsUsingBlock:
+ iconRowsForSpacingCalculation
+ bottomIconInset
+ horizontalBumpForColumn:
+ verticalIconPadding
+ iconRowsForCurrentOrientation
+ modelClass
+ viewMap
+ setLayoutDelegate:
+ setWallpaperRelativeFrame:
+ rowForIcon:
+ compactIcons:
+ firstFreeSlotIndex
+ firstFreeSlotOrLastSlotIndex
+ placeIcon:atIndex:moveNow:pop:
+ insertIcon:atIndex:moveNow:
+ removeIcon:
+ setAlphaForAllIcons:
+ originForIcon:
+ centerForIcon:
+ viewForIcon:
+ coordinateForIconAtIndex:
+ indexOfIcon:
+ showAllIcons
+ updateEditingStateAnimated:
+ isDock
+ setBouncedIcon:
+ bouncedIcon
+ performRotationWithDuration:
+ cleanupAfterRotation
+ purged
+ setPurged:
+ wallpaperRelativeFrame
+ layoutDelegate
+ isFull
+ dealloc
+ init
+ setFrame:
+ description
+ orientation
+ statusBarHeight
+ isEmpty
+ isEditing
+ setEditing:
+ model
+ setOrientation:
+ icons
+ setStatusBarHeight:
+ setModel:
+ iconLocation
+ prepareToRotateToInterfaceOrientation:
- didMoveToSuperview
- removeAllIconAnimations
- initWithModel:orientation:viewMap:
- visibleIcons
- iconColumnsForCurrentOrientation
- sideIconInset
- iconAtPoint:index:proposedOrder:grabbedIcon:
- iconsInRowForSpacingCalculation
- horizontalIconPadding
- defaultIconSize
- originForIconAtCoordinate:
- columnAtPoint:
- topIconInset
- rowAtPoint:
- layoutIconsNow
- _wallpaperRelativeIconCenterForIconView:
- enumerateIconViewsUsingBlock:
- _wallpaperRelativeIconCenterForIconImageCenter:
- coordinateForIcon:
- _sendLayoutDelegateWouldHaveMovedIcon:
- _layoutIcon:atIndex:createViewNow:pop:
- containsIcon:
- firstFreeSlotIndexForType:
- firstFreeSlotOrLastSlotIndexForType:
- originForIconAtIndex:
- _popIconView:
- _updateEditingStateForIcons:animated:
- removedIcons
- setIconsNeedLayout
- layoutIconsIfNeeded:domino:
- insertIcon:atIndex:moveNow:pop:
- removeIconAtIndex:
- baseIconViewClass
- iconCoordinateForIndex:forOrientation:
- centerForIconCoordinate:
- _sendLayoutDelegateLayoutInvalidated
- indexForCoordinate:forOrientation:
- iconAtPoint:index:
- showIconImagesFromColumn:toColumn:totalColumns:allowAnimations:
- enumerateIconsUsingBlock:
- iconRowsForSpacingCalculation
- bottomIconInset
- horizontalBumpForColumn:
- verticalIconPadding
- iconRowsForCurrentOrientation
- modelClass
- viewMap
- setLayoutDelegate:
- setWallpaperRelativeFrame:
- rowForIcon:
- compactIcons:
- firstFreeSlotIndex
- firstFreeSlotOrLastSlotIndex
- placeIcon:atIndex:moveNow:pop:
- insertIcon:atIndex:moveNow:
- removeIcon:
- setAlphaForAllIcons:
- originForIcon:
- centerForIcon:
- viewForIcon:
- coordinateForIconAtIndex:
- indexOfIcon:
- showAllIcons
- updateEditingStateAnimated:
- isDock
- setBouncedIcon:
- bouncedIcon
- performRotationWithDuration:
- cleanupAfterRotation
- purged
- setPurged:
- wallpaperRelativeFrame
- layoutDelegate
- isFull
- dealloc
- init
- setFrame:
- description
- orientation
- statusBarHeight
- isEmpty
- isEditing
- setEditing:
- model
- setOrientation:
- icons
- setStatusBarHeight:
- setModel:
- iconLocation
- prepareToRotateToInterfaceOrientation:
@end
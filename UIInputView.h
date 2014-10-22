@interface UIInputView : UIView
{
	long long _style;
	id _renderConfig;
	BOOL _suppressBackgroundStyling;
	BOOL _disableSplitSupport;
	id _leftContentView;
	id _rightContentView;
	double _contentRatio;
	struct _leftContentSize;
	struct _rightContentSize;
	struct _defaultSize;
	double _gapWidth;
	double _leftOffset;
	BOOL _isTransitioning;
	double _transitionGap;
	double _transitionLeftOffset;
	double _transitionRatio;
	id _mergedImage;
	id _splitImage;
	id _mergedSliceMap;
	id _splitSliceMap;
	id _visibleLayers;
	id _transitionLayer;
}

+ _disableSplitSupport
+ _suppressBackgroundStyling
+ set_disableSplitSupport:
+ set_suppressBackgroundStyling:
+ initWithFrame:
+ dealloc
+ pointInside:withEvent:
+ setFrame:
+ _isTransitioning
+ tintColor
+ _updateBackgroundColor
+ _setRenderConfig:
+ _clipCornersOfView:
+ _setProgress:boundedBy:
+ _beginSplitTransitionIfNeeded:gapWidth:
+ _endSplitTransitionIfNeeded:
+ _inheritedRenderConfig
+ _isSplit
+ _updateClipCorners
+ leftContentViewSize
+ rightContentViewSize
+ _defaultSize
+ _supportsSplit
+ _setLeftOffset:gapWidth:
+ didEndSplitTransition
+ _isToolbars
+ setContentRatio:
+ leftContentView
+ rightContentView
+ _setNeedsContentSizeUpdate
+ _additionalClipHeight
+ _initWithFrame:inputViewStyle:useSplitViews:
+ inputViewStyle
+ contentRatio
+ willBeginSplitTransition
+ _splitBorderedBackgroundWithCorners:
+ _toolbarBorderedBackground
+ initWithFrame:inputViewStyle:
+ setInputViewStyle:
+ layoutMergedSubviews
+ layoutSplitSubviewsWithLeftContentSize:rightContentSize:
+ updateMergedSubviewConstraints
+ updateSplitSubviewContraintsWithLeftContentSize:rightContentSize:
+ setLeftContentViewSize:
+ setRightContentViewSize:
+ _mergedImage
+ set_mergedImage:
+ _splitImage
+ set_splitImage:
+ _mergedSliceMap
+ set_mergedSliceMap:
+ _splitSliceMap
+ set_splitSliceMap:
- _disableSplitSupport
- _suppressBackgroundStyling
- set_disableSplitSupport:
- set_suppressBackgroundStyling:
- initWithFrame:
- dealloc
- pointInside:withEvent:
- setFrame:
- _isTransitioning
- tintColor
- _updateBackgroundColor
- _setRenderConfig:
- _clipCornersOfView:
- _setProgress:boundedBy:
- _beginSplitTransitionIfNeeded:gapWidth:
- _endSplitTransitionIfNeeded:
- _inheritedRenderConfig
- _isSplit
- _updateClipCorners
- leftContentViewSize
- rightContentViewSize
- _defaultSize
- _supportsSplit
- _setLeftOffset:gapWidth:
- didEndSplitTransition
- _isToolbars
- setContentRatio:
- leftContentView
- rightContentView
- _setNeedsContentSizeUpdate
- _additionalClipHeight
- _initWithFrame:inputViewStyle:useSplitViews:
- inputViewStyle
- contentRatio
- willBeginSplitTransition
- _splitBorderedBackgroundWithCorners:
- _toolbarBorderedBackground
- initWithFrame:inputViewStyle:
- setInputViewStyle:
- layoutMergedSubviews
- layoutSplitSubviewsWithLeftContentSize:rightContentSize:
- updateMergedSubviewConstraints
- updateSplitSubviewContraintsWithLeftContentSize:rightContentSize:
- setLeftContentViewSize:
- setRightContentViewSize:
- _mergedImage
- set_mergedImage:
- _splitImage
- set_splitImage:
- _mergedSliceMap
- set_mergedSliceMap:
- _splitSliceMap
- set_splitSliceMap:
@end
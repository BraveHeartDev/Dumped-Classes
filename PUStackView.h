@interface PUStackView : UIView
{
	Array _transforms;
	Array _imageHidden;
	BOOL _needsDynamicLayout;
	usigned long long _style;
	id _photoDecoration;
	long long _numberOfVisibleItems;
	id _emptyPlaceholderImage;
	long long __numberOfViews;
	id __photoViews;
	id __imageSizes;
	id __photoDecorationVariants;
	struct _stackSize;
	struct _stackOffset;
	struct _stackPerspectiveOffset;
	struct _stackPerspectiveFactor;
	struct _stackPerspectiveInsets;
}

+ setStackSize:
+ stackSize
+ initWithFrame:
+ layoutSubviews
+ setStyle:
+ style
+ setPhotoDecoration:
+ photoDecoration
+ numberOfVisibleItems
+ setAlpha:forItemAtIndex:
+ newLayoutAttributesForItemAtIndex:relativeToView:
+ stackOffset
+ stackPerspectiveInsets
+ stackPerspectiveOffset
+ setNumberOfVisibleItems:
+ setImageSize:forItemAtIndex:
+ setImage:forItemAtIndex:
+ setVideoBannerVisible:duration:isSlalom:forItemAtIndex:
+ stackItemViews
+ frameOfFrontStackItemRelativeToView:
+ wouldCoverAllItemsInStackView:
+ setStackOffset:
+ setStackPerspectiveInsets:
+ setStackPerspectiveOffset:
+ _updateDynamicLayout
+ _numberOfViews
+ _photoViews
+ _getCenter:bounds:forPhotoViewAtIndex:
+ _rebuildDecorationVariants
+ _setNeedsDynamicLayout
+ _updateVisibleDecorationVariants
+ _imageSizes
+ _photoDecorationVariants
+ emptyPlaceholderImage
+ _setPhotoDecorationVariants:
+ stackPerspectiveFactor
+ setStackPerspectiveFactor:
+ isImageHiddenForItemAtIndex:
+ setImageHidden:forItemAtIndex:
+ setEmptyPlaceholderImage:
+ newLayoutAttributesForVisbleItemsRelativeToView:
+ .cxx_destruct
- setStackSize:
- stackSize
- initWithFrame:
- layoutSubviews
- setStyle:
- style
- setPhotoDecoration:
- photoDecoration
- numberOfVisibleItems
- setAlpha:forItemAtIndex:
- newLayoutAttributesForItemAtIndex:relativeToView:
- stackOffset
- stackPerspectiveInsets
- stackPerspectiveOffset
- setNumberOfVisibleItems:
- setImageSize:forItemAtIndex:
- setImage:forItemAtIndex:
- setVideoBannerVisible:duration:isSlalom:forItemAtIndex:
- stackItemViews
- frameOfFrontStackItemRelativeToView:
- wouldCoverAllItemsInStackView:
- setStackOffset:
- setStackPerspectiveInsets:
- setStackPerspectiveOffset:
- _updateDynamicLayout
- _numberOfViews
- _photoViews
- _getCenter:bounds:forPhotoViewAtIndex:
- _rebuildDecorationVariants
- _setNeedsDynamicLayout
- _updateVisibleDecorationVariants
- _imageSizes
- _photoDecorationVariants
- emptyPlaceholderImage
- _setPhotoDecorationVariants:
- stackPerspectiveFactor
- setStackPerspectiveFactor:
- isImageHiddenForItemAtIndex:
- setImageHidden:forItemAtIndex:
- setEmptyPlaceholderImage:
- newLayoutAttributesForVisbleItemsRelativeToView:
- .cxx_destruct
@end
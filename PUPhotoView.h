@interface PUPhotoView : UIView
{
	id _photoDecorationBorderView;
	id _photoDecorationOverlayView;
	id _bannerView;
	id _bannerImageView;
	id _bannerLabel;
	BOOL _hasTransform;
	BOOL _isVideoBannerVisible;
	BOOL _avoidsImageViewIfPossible;
	BOOL _slalom;
	long long _fillMode;
	id _photoImage;
	id _photoDecoration;
	id _videoDuration;
	id _photoImageView;
	id __crossfadeImageView;
	id _bannerImage;
	id _bannerText;
	struct _photoSize;
	struct _imageTransform;
}

+ initWithFrame:
+ layoutSubviews
+ sizeThatFits:
+ setFillMode:
+ _updateImageView
+ setAvoidsImageViewIfPossible:
+ setPhotoSize:
+ setPhotoImage:
+ setVideoBannerVisible:videoDuration:isSlalom:
+ setPhotoStreamBannerVisible:
+ setPhotoDecoration:
+ photoDecoration
+ photoSize
+ _updateSubviewOrdering
+ imageContentFrame
+ setBannerImage:
+ setBannerText:
+ _updatePhotoDecoration
+ _updateBannerView
+ setPhotoImageView:
+ bannerImage
+ bannerText
+ _photoDecorationBorderViewFrameForImageContentFrame:
+ setImageTransform:
+ animateCrossfadeToImage:
+ isVideoBannerVisible
+ imageTransform
+ photoImage
+ avoidsImageViewIfPossible
+ videoDuration
+ isSlalom
+ photoImageView
+ _crossfadeImageView
+ set_crossfadeImageView:
+ .cxx_destruct
+ fillMode
- initWithFrame:
- layoutSubviews
- sizeThatFits:
- setFillMode:
- _updateImageView
- setAvoidsImageViewIfPossible:
- setPhotoSize:
- setPhotoImage:
- setVideoBannerVisible:videoDuration:isSlalom:
- setPhotoStreamBannerVisible:
- setPhotoDecoration:
- photoDecoration
- photoSize
- _updateSubviewOrdering
- imageContentFrame
- setBannerImage:
- setBannerText:
- _updatePhotoDecoration
- _updateBannerView
- setPhotoImageView:
- bannerImage
- bannerText
- _photoDecorationBorderViewFrameForImageContentFrame:
- setImageTransform:
- animateCrossfadeToImage:
- isVideoBannerVisible
- imageTransform
- photoImage
- avoidsImageViewIfPossible
- videoDuration
- isSlalom
- photoImageView
- _crossfadeImageView
- set_crossfadeImageView:
- .cxx_destruct
- fillMode
@end
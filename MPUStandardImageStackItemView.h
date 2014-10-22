@interface MPUStandardImageStackItemView : MPUStackItemView
{
	id _borderView;
	id _imageView;
	double _dropShadowAlpha;
	id _dropShadowColor;
	usigned long long _dropShadowEdges;
	double _dropShadowWidth;
	id _image;
	double _imageAlpha;
	double _overlayBorderWidth;
	double _overlayBorderAlpha;
	id _overlayBorderColor;
	double _overlayCenterAlpha;
	id _overlayCenterColor;
	struct _imageContentsRect;
	struct _imageTransform;
}

+ initWithFrame:
+ setImage:
+ layoutSubviews
+ sizeThatFits:
+ image
+ setDropShadowAlpha:
+ _updateForBorderViewChange
+ dropShadowAlpha
+ dropShadowEdges
+ dropShadowWidth
+ imageAlpha
+ imageContentsRect
+ overlayBorderWidth
+ overlayBorderAlpha
+ overlayBorderColor
+ overlayCenterAlpha
+ overlayCenterColor
+ setOverlayCenterAlpha:
+ setOverlayBorderAlpha:
+ setOverlayBorderWidth:
+ setOverlayBorderColor:
+ setOverlayCenterColor:
+ setImageAlpha:
+ setImageContentsRect:
+ setDropShadowEdges:
+ setDropShadowWidth:
+ setImageTransform:
+ imageTransform
+ dropShadowColor
+ setDropShadowColor:
+ .cxx_destruct
- initWithFrame:
- setImage:
- layoutSubviews
- sizeThatFits:
- image
- setDropShadowAlpha:
- _updateForBorderViewChange
- dropShadowAlpha
- dropShadowEdges
- dropShadowWidth
- imageAlpha
- imageContentsRect
- overlayBorderWidth
- overlayBorderAlpha
- overlayBorderColor
- overlayCenterAlpha
- overlayCenterColor
- setOverlayCenterAlpha:
- setOverlayBorderAlpha:
- setOverlayBorderWidth:
- setOverlayBorderColor:
- setOverlayCenterColor:
- setImageAlpha:
- setImageContentsRect:
- setDropShadowEdges:
- setDropShadowWidth:
- setImageTransform:
- imageTransform
- dropShadowColor
- setDropShadowColor:
- .cxx_destruct
@end
@interface MPDetailSlider : UISlider
{
	id _currentTimeInverseLabel;
	id _currentTimeLabel;
	id _scrubController;
	BOOL _allowsScrubbing;
	BOOL _autoscrubActive;
	id _autoscrubTimer;
	double _availableDuration;
	BOOL _canCommit;
	double _currentTime;
	id _delegate;
	id _downloadingTrackOverlay;
	double _duration;
	id _glowDetailScrubImageView;
	BOOL _isTracking;
	double _minTimeLabelWidth;
	double _maxTrackWidth;
	struct _previousLocationInView;
	long long _style;
	struct _timeLabelInsets;
	long long _timeLabelStyle;
	id _thumbImageView;
	double _trackInset;
	double _detailScrubbingVerticalRange;
}

+ setAllowsDetailScrubbing:
+ allowsDetailScrubbing
+ localizedScrubSpeedText
+ setAvailableDuration:
+ detailScrubbingAvailableForCurrentDuration
+ setTimeLabelStyle:
+ cancelTracking
+ setValue:duration:
+ _setupControlsForStyle
+ initWithFrame:style:maxTrackWidth:
+ thumbHitRect
+ timeLabelVerticalOffsetForStyle:
+ timeLabelFontForStyle:
+ timeLabelTextColorForStyle:
+ timeLabelShadowOffsetForStyle:
+ timeLabelShadowColorForStyle:
+ _stringForCurrentTime:
+ timeLabelHorizontalOffsetForStyle:
+ _stringForInverseCurrentTime:
+ _updateTrackInset
+ _setValueWhileTracking:duration:
+ _updateForAvailableDuraton
+ _updateTimeDisplayForTime:
+ _commitValue
+ _autoscrubTick:
+ _resetScrubInfo
+ _updateTimeDisplayForTime:force:
+ allowsScrubbing
+ _modernThumbImageWithColor:height:includeShadow:
+ _colorSliceImageWithColor:height:
+ _stringForTime:
+ thumbViewRect
+ detailScrubController:didChangeValue:
+ detailScrubController:didChangeScrubSpeed:
+ setAllowsScrubbing:
+ setMinTimeLabelWidth:
+ setTimeLabelInsets:
+ availableDuration
+ detailScrubbingVerticalRange
+ setDetailScrubbingVerticalRange:
+ timeLabelInsets
+ timeLabelStyle
+ minTimeLabelWidth
+ initWithFrame:
+ dealloc
+ setDelegate:
+ hitTest:withEvent:
+ setFrame:
+ layoutSubviews
+ delegate
+ duration
+ setDuration:
+ isTracking
+ tintColorDidChange
+ initWithFrame:style:
+ cancelTrackingWithEvent:
+ beginTrackingWithTouch:withEvent:
+ continueTrackingWithTouch:withEvent:
+ endTrackingWithTouch:withEvent:
+ trackRectForBounds:
+ thumbRectForBounds:trackRect:value:
+ createThumbView
+ currentThumbImage
+ setValue:animated:
+ .cxx_destruct
- setAllowsDetailScrubbing:
- allowsDetailScrubbing
- localizedScrubSpeedText
- setAvailableDuration:
- detailScrubbingAvailableForCurrentDuration
- setTimeLabelStyle:
- cancelTracking
- setValue:duration:
- _setupControlsForStyle
- initWithFrame:style:maxTrackWidth:
- thumbHitRect
- timeLabelVerticalOffsetForStyle:
- timeLabelFontForStyle:
- timeLabelTextColorForStyle:
- timeLabelShadowOffsetForStyle:
- timeLabelShadowColorForStyle:
- _stringForCurrentTime:
- timeLabelHorizontalOffsetForStyle:
- _stringForInverseCurrentTime:
- _updateTrackInset
- _setValueWhileTracking:duration:
- _updateForAvailableDuraton
- _updateTimeDisplayForTime:
- _commitValue
- _autoscrubTick:
- _resetScrubInfo
- _updateTimeDisplayForTime:force:
- allowsScrubbing
- _modernThumbImageWithColor:height:includeShadow:
- _colorSliceImageWithColor:height:
- _stringForTime:
- thumbViewRect
- detailScrubController:didChangeValue:
- detailScrubController:didChangeScrubSpeed:
- setAllowsScrubbing:
- setMinTimeLabelWidth:
- setTimeLabelInsets:
- availableDuration
- detailScrubbingVerticalRange
- setDetailScrubbingVerticalRange:
- timeLabelInsets
- timeLabelStyle
- minTimeLabelWidth
- initWithFrame:
- dealloc
- setDelegate:
- hitTest:withEvent:
- setFrame:
- layoutSubviews
- delegate
- duration
- setDuration:
- isTracking
- tintColorDidChange
- initWithFrame:style:
- cancelTrackingWithEvent:
- beginTrackingWithTouch:withEvent:
- continueTrackingWithTouch:withEvent:
- endTrackingWithTouch:withEvent:
- trackRectForBounds:
- thumbRectForBounds:trackRect:value:
- createThumbView
- currentThumbImage
- setValue:animated:
- .cxx_destruct
@end
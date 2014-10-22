@interface _UILegibilitySettingsProvider : NSObject
{
	BOOL _hasContrast;
	BOOL _accumulatorIsPrimed;
	double _mostRecentSaturation;
	double _accumulatedSaturation;
	double _mostRecentBrightness;
	double _accumulatedBrightness;
	id _contentColor;
	double _mostRecentContrast;
	double _accumulatedContrast;
	double _mostRecentLuminance;
	double _accumulatedLuminance;
	double _nextChangeBarrier;
	long long _currentStyle;
}

+ pl_primeForUseWithCameraOverlays
+ currentStyle
+ settings
+ clearContentColorAccumulator
+ accumulateChangesToContentColor:contrast:
+ accumulatedBrightness
+ accumulatedLuminance
+ accumulatedSaturation
+ setContentColor:
+ setMostRecentBrightness:
+ setMostRecentContrast:
+ setMostRecentLuminance:
+ setMostRecentSaturation:
+ setAccumulatedContrast:
+ setHasContrast:
+ hasContrast
+ accumulatorIsPrimed
+ setAccumulatedBrightness:
+ setAccumulatedLuminance:
+ setAccumulatedSaturation:
+ setAccumulatorIsPrimed:
+ accumulatedContrast
+ setCurrentStyle:
+ setNextChangeBarrier:
+ nextChangeBarrier
+ contentColor
+ accumulateChangesToContentColor:
+ mostRecentSaturation
+ mostRecentBrightness
+ mostRecentContrast
+ mostRecentLuminance
- pl_primeForUseWithCameraOverlays
- currentStyle
- settings
- clearContentColorAccumulator
- accumulateChangesToContentColor:contrast:
- accumulatedBrightness
- accumulatedLuminance
- accumulatedSaturation
- setContentColor:
- setMostRecentBrightness:
- setMostRecentContrast:
- setMostRecentLuminance:
- setMostRecentSaturation:
- setAccumulatedContrast:
- setHasContrast:
- hasContrast
- accumulatorIsPrimed
- setAccumulatedBrightness:
- setAccumulatedLuminance:
- setAccumulatedSaturation:
- setAccumulatorIsPrimed:
- accumulatedContrast
- setCurrentStyle:
- setNextChangeBarrier:
- nextChangeBarrier
- contentColor
- accumulateChangesToContentColor:
- mostRecentSaturation
- mostRecentBrightness
- mostRecentContrast
- mostRecentLuminance
@end
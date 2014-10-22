@interface UILongPressGestureRecognizer : UIGestureRecognizer
{
	id _touches;
	id _activeTouches;
	usigned long long _numberOfTouchesRequired;
	double _minimumPressDuration;
	double _allowableMovement;
	struct _startPointScreen;
	id _enoughTimeElapsed;
	id _tooMuchTimeElapsed;
	id _imp;
	bit[1] _gotTouchEnd;
	bit[1] _gotTooMany;
	bit[1] _gotEnoughTaps;
	bit[1] _cancelPastAllowableMovement;
	long long _buttonType;
}

+ invalidate
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ initWithTarget:action:
+ locationInView:
+ setDelay:
+ _physicalButtonsBegan:withEvent:
+ touchesCancelled:withEvent:
+ _buttonType
+ _physicalButtonsEnded:withEvent:
+ _physicalButtonsCancelled:withEvent:
+ setView:
+ _touchSloppinessFactor
+ touchesBegan:withEvent:
+ touchesMoved:withEvent:
+ touchesEnded:withEvent:
+ numberOfTouches
+ locationOfTouch:inView:
+ canPreventGestureRecognizer:
+ setMinimumPressDuration:
+ startPoint
+ _setButtonType:
+ numberOfTouchesRequired
+ numberOfTapsRequired
+ delay
+ setNumberOfTapsRequired:
+ setNumberOfTouchesRequired:
+ _resetGestureRecognizer
+ setAllowableMovement:
+ centroid
+ touches
+ clearTimer
+ setTouches:
+ enoughTimeElapsed:
+ tooMuchElapsed:
+ centroidScreen
+ startTimer
+ _interactionsEndedWithValidTouches:
+ _startTapFinishedTimer
+ minimumPressDuration
+ cancelPastAllowableMovement
+ setCancelPastAllowableMovement:
+ tapIsPossibleForTapRecognizer:
+ tapRecognizerRecognizedTap:
+ tapRecognizerFailedToRecognizeTap:
+ allowableMovement
- invalidate
- dealloc
- initWithCoder:
- encodeWithCoder:
- initWithTarget:action:
- locationInView:
- setDelay:
- _physicalButtonsBegan:withEvent:
- touchesCancelled:withEvent:
- _buttonType
- _physicalButtonsEnded:withEvent:
- _physicalButtonsCancelled:withEvent:
- setView:
- _touchSloppinessFactor
- touchesBegan:withEvent:
- touchesMoved:withEvent:
- touchesEnded:withEvent:
- numberOfTouches
- locationOfTouch:inView:
- canPreventGestureRecognizer:
- setMinimumPressDuration:
- startPoint
- _setButtonType:
- numberOfTouchesRequired
- numberOfTapsRequired
- delay
- setNumberOfTapsRequired:
- setNumberOfTouchesRequired:
- _resetGestureRecognizer
- setAllowableMovement:
- centroid
- touches
- clearTimer
- setTouches:
- enoughTimeElapsed:
- tooMuchElapsed:
- centroidScreen
- startTimer
- _interactionsEndedWithValidTouches:
- _startTapFinishedTimer
- minimumPressDuration
- cancelPastAllowableMovement
- setCancelPastAllowableMovement:
- tapIsPossibleForTapRecognizer:
- tapRecognizerRecognizedTap:
- tapRecognizerFailedToRecognizeTap:
- allowableMovement
@end
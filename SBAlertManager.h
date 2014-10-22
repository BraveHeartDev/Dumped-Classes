@interface SBAlertManager : NSObject
{
	id _screen;
	id _alertWindow;
	id _deferredAlertWindow;
	id _lockAlertWindow;
	id _alerts;
	id _observers;
	BOOL _deactivatingAllAlerts;
	id _delegate;
	struct _delegateFlags;
}

+ allAlerts
+ hasStackedAlerts
+ deactivate:
+ activeAlertWindow
+ deactivateAlertsAfterLaunch
+ topMostWindow
+ stackedAlertsIncludingActiveAlert:
+ alertIsReadyToBeDeactivated:
+ alert:requestsBackgroundStyleChangeWithAnimationFactory:
+ alertIsReadyToBeRemovedFromView:
+ windowForAlert:
+ _deactivate:
+ _activate:
+ _makeAlertWindowOpaque:
+ _resetAlertWindowOpacity
+ _removeFromView:
+ containsAlert:
+ deactivateAll
+ setAlertsShouldDeactivateAfterLaunch
+ applicationWillAnimateActivation
+ applicationFinishedAnimatingBeneathAlert
+ activeAlert
+ initWithScreen:
+ dealloc
+ setDelegate:
+ init
+ description
+ debugDescription
+ delegate
+ screen
+ windows
+ removeObserver:
+ addObserver:
+ activate:
- allAlerts
- hasStackedAlerts
- deactivate:
- activeAlertWindow
- deactivateAlertsAfterLaunch
- topMostWindow
- stackedAlertsIncludingActiveAlert:
- alertIsReadyToBeDeactivated:
- alert:requestsBackgroundStyleChangeWithAnimationFactory:
- alertIsReadyToBeRemovedFromView:
- windowForAlert:
- _deactivate:
- _activate:
- _makeAlertWindowOpaque:
- _resetAlertWindowOpacity
- _removeFromView:
- containsAlert:
- deactivateAll
- setAlertsShouldDeactivateAfterLaunch
- applicationWillAnimateActivation
- applicationFinishedAnimatingBeneathAlert
- activeAlert
- initWithScreen:
- dealloc
- setDelegate:
- init
- description
- debugDescription
- delegate
- screen
- windows
- removeObserver:
- addObserver:
- activate:
@end
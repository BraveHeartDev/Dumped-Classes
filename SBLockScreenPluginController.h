@interface SBLockScreenPluginController : NSObject
{
	id _pluginLoader;
	id _plugins;
	id _activePlugin;
	id _displayedPlugin;
	id _transitionFactory;
	id _delegate;
	id _lockScreenViewController;
	BOOL _pluginControllerReceivedViewWillDisappear;
	BOOL _pluginControllerReceivedViewDidDisappear;
	id _previousWindow;
	id _testSettings;
	BOOL _lockScreenHasNotifications;
	BOOL _allowDisplayOfPlugins;
	double _fadeDuration;
}

+ lockScreenViewController
+ enableLockScreenBundleWithName:activationContext:
+ disableLockScreenBundleWithName:deactivationContext:
+ _pluginView
+ _addObservers
+ initWithLockScreenViewController:
+ defaultContentRegionForPluginController:withOrientation:
+ _lockScreenView
+ isPluginVisible
+ activePluginBundleName
+ _lockScreenWillMoveToWindow
+ _lockScreenDidMoveToWindow
+ _refreshLockScreenPlugin
+ _handleUIRelock
+ _handlePluginDisable:
+ _updateCallPluginPresentationStyle
+ _handleApplicationExit:
+ _removeActivePlugin
+ _pluginHidesNotificationList:
+ sendEventToPlugin:
+ _loadLockScreenPluginWithName:activationContext:
+ _setActivePlugin:
+ _highestPriorityPluginIgnoringViewDisplay:
+ _setDisplayedPlugin:
+ isPhonePluginActive
+ displayedPlugin
+ activePlugin
+ _updateNotificationListForNewlyActivatedPlugin
+ _setEffectivePresentationStyleForDisplayedPluginIfNecessary
+ _transitionContextWithOldPlugin:newPlugin:
+ setLockScreenViewController:
+ _disablePluginsPassingTest:withReason:
+ _pluginForName:controller:
+ _removeDisplayedPlugin
+ _notifyDisplayedPluginRemovedFromWindow
+ _notifyDisplayedPluginAddedToWindow
+ _transitionFromExclusionaryPluginToNotificationList
+ _transitionFromNotificationListToExclusionaryPlugin
+ activePluginHidesNotificationList
+ pluginControllerShouldAnimateOthersResumption
+ isPhonePluginVisible
+ handleUIUnlock
+ setLockScreenHasNotifications:
+ pluginLoader
+ setPluginLoader:
+ lockScreenHasNotifications
+ allowDisplayOfPlugins
+ setAllowDisplayOfPlugins:
+ setFadeDuration:
+ dealloc
+ setDelegate:
+ delegate
+ settings:changedValueForKey:
+ reset
+ handleMenuButtonTap
+ handleMenuButtonDoubleTap
+ wantsMenuButtonHeldEvent
+ handleMenuButtonHeld
+ handleLockButtonPressed
+ handleVolumeUpButtonPressed
+ handleVolumeDownButtonPressed
+ handleHeadsetButtonPressed:
+ fadeDuration
- lockScreenViewController
- enableLockScreenBundleWithName:activationContext:
- disableLockScreenBundleWithName:deactivationContext:
- _pluginView
- _addObservers
- initWithLockScreenViewController:
- defaultContentRegionForPluginController:withOrientation:
- _lockScreenView
- isPluginVisible
- activePluginBundleName
- _lockScreenWillMoveToWindow
- _lockScreenDidMoveToWindow
- _refreshLockScreenPlugin
- _handleUIRelock
- _handlePluginDisable:
- _updateCallPluginPresentationStyle
- _handleApplicationExit:
- _removeActivePlugin
- _pluginHidesNotificationList:
- sendEventToPlugin:
- _loadLockScreenPluginWithName:activationContext:
- _setActivePlugin:
- _highestPriorityPluginIgnoringViewDisplay:
- _setDisplayedPlugin:
- isPhonePluginActive
- displayedPlugin
- activePlugin
- _updateNotificationListForNewlyActivatedPlugin
- _setEffectivePresentationStyleForDisplayedPluginIfNecessary
- _transitionContextWithOldPlugin:newPlugin:
- setLockScreenViewController:
- _disablePluginsPassingTest:withReason:
- _pluginForName:controller:
- _removeDisplayedPlugin
- _notifyDisplayedPluginRemovedFromWindow
- _notifyDisplayedPluginAddedToWindow
- _transitionFromExclusionaryPluginToNotificationList
- _transitionFromNotificationListToExclusionaryPlugin
- activePluginHidesNotificationList
- pluginControllerShouldAnimateOthersResumption
- isPhonePluginVisible
- handleUIUnlock
- setLockScreenHasNotifications:
- pluginLoader
- setPluginLoader:
- lockScreenHasNotifications
- allowDisplayOfPlugins
- setAllowDisplayOfPlugins:
- setFadeDuration:
- dealloc
- setDelegate:
- delegate
- settings:changedValueForKey:
- reset
- handleMenuButtonTap
- handleMenuButtonDoubleTap
- wantsMenuButtonHeldEvent
- handleMenuButtonHeld
- handleLockButtonPressed
- handleVolumeUpButtonPressed
- handleVolumeDownButtonPressed
- handleHeadsetButtonPressed:
- fadeDuration
@end
@interface MusicMiniPlayerCoordinator : NSObject
{
	id _miniPlayerPalette;
	id _playbackControlsView;
	id _navigationController;
	id _prospectiveStation;
	id _repeatActionSheet;
	BOOL _shouldPaletteBeAttached;
	id _stationActionsPopoverController;
	id _stationActionsViewController;
	id _trackActionsModalItem;
	id _trackActionsPopoverController;
	id _trackActionsViewController;
	id _viewController;
}

+ _itemDidChangeNotification:
+ transportControls:tappedButtonPart:
+ repeatTypeForPlaybackControls:
+ shuffleTypeForPlaybackControls:
+ controlsOverlay:shouldUseDetailScrubberForItem:
+ playbackControls:changedRepeatType:
+ playbackControls:changedShuffleType:
+ dealloc
+ init
+ _init
+ actionSheet:clickedButtonAtIndex:
+ popoverControllerDidDismissPopover:
+ modalItem:didDismissWithButtonIndex:
+ popoverController:willRepositionPopoverToRect:inView:
+ willShowViewController:inNavigationController:
+ stationActionsViewController:willBeginAction:
+ stationActionsViewController:didFinishAction:withObject:error:
+ transportControlsTappedNowPlayingButton:
+ musicMiniPlayerActionsViewController:didSelectAction:
+ _addStationFromItem:usingArtist:
+ _prepareToAddStation
+ _completeAdditionOfStation:fromItem:usingArtist:canShowAlert:
+ trackActioningObject:didSelectAction:atIndex:
+ prospectivePlaybackInformationDidChangeForViewController:
+ _playbackCoordinatorCurrentStationDidChangeNotification:
+ _presentTrackActionsFromView:
+ _handleAction:withObject:
+ _presentNowPlaying
+ _makeStationVisible:
+ _presentStationActionsFromView:
+ _currentProspectivePlaybackInformation
+ _updateMiniPlayerPaletteForNavigationController:
+ _updateMiniPlayerAttachment
+ _startGeniusPlaylistFromItem:
+ _presentAddStation
+ transportControls:addStationForItem:usingArtist:
+ transportControls:presentStationActionsForItem:
+ transportControls:requestsStationVisibility:
+ .cxx_destruct
- _itemDidChangeNotification:
- transportControls:tappedButtonPart:
- repeatTypeForPlaybackControls:
- shuffleTypeForPlaybackControls:
- controlsOverlay:shouldUseDetailScrubberForItem:
- playbackControls:changedRepeatType:
- playbackControls:changedShuffleType:
- dealloc
- init
- _init
- actionSheet:clickedButtonAtIndex:
- popoverControllerDidDismissPopover:
- modalItem:didDismissWithButtonIndex:
- popoverController:willRepositionPopoverToRect:inView:
- willShowViewController:inNavigationController:
- stationActionsViewController:willBeginAction:
- stationActionsViewController:didFinishAction:withObject:error:
- transportControlsTappedNowPlayingButton:
- musicMiniPlayerActionsViewController:didSelectAction:
- _addStationFromItem:usingArtist:
- _prepareToAddStation
- _completeAdditionOfStation:fromItem:usingArtist:canShowAlert:
- trackActioningObject:didSelectAction:atIndex:
- prospectivePlaybackInformationDidChangeForViewController:
- _playbackCoordinatorCurrentStationDidChangeNotification:
- _presentTrackActionsFromView:
- _handleAction:withObject:
- _presentNowPlaying
- _makeStationVisible:
- _presentStationActionsFromView:
- _currentProspectivePlaybackInformation
- _updateMiniPlayerPaletteForNavigationController:
- _updateMiniPlayerAttachment
- _startGeniusPlaylistFromItem:
- _presentAddStation
- transportControls:addStationForItem:usingArtist:
- transportControls:presentStationActionsForItem:
- transportControls:requestsStationVisibility:
- .cxx_destruct
@end
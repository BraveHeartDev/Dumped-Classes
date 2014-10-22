@interface MPMusicPlayerControllerServerInternal : MPServerObject
{
	id _delegate;
	id _musicPlayerServer;
	int _activeClientPID;
	id _clientPorts;
	id _clientPortsForPIDs;
	id _clientStateForPIDs;
	id _videoViewController;
	bit[1] _queuePrepared;
}

+ _playbackStateDidChangeNotification:
+ playbackState
+ repeatMode
+ setRepeatMode:
+ prepareToPlay
+ play
+ beginSeekingForward
+ beginSeekingBackward
+ endSeeking
+ skipToNextItem
+ skipToBeginning
+ skipToPreviousItem
+ currentPlaybackTime
+ setCurrentPlaybackTime:
+ currentPlaybackRate
+ setCurrentPlaybackRate:
+ _itemDidChangeNotification:
+ _itemPlaybackDidEndNotification:
+ _avController
+ _tvOutCapabilityDidChangeNotification:
+ nowPlayingItem
+ setQueueWithQuery:firstItem:
+ setQueueWithItemCollection:
+ shuffleMode
+ setShuffleMode:
+ isGeniusAvailable
+ isGeniusAvailableForSeedItems:
+ setQueueWithSeedItems:
+ nowPlayingItemAtIndex:
+ nowPlayingRadioTrackID
+ pauseWithFadeoutDuration:
+ allowsBackgroundVideo
+ setAllowsBackgroundVideo:
+ playbackSpeed
+ setPlaybackSpeed:
+ indexOfNowPlayingItem
+ unshuffledIndexOfNowPlayingItem
+ isNowPlayingItemFromGeniusMix
+ currentChapterIndex
+ setCurrentChapterIndex:
+ setQueueWithGeniusMixPlaylist:
+ setQueueWithRadioStation:
+ skipInDirection:
+ serverIsAlive
+ setUseApplicationSpecificQueue:
+ registerForServerDiedNotifications
+ setQueueWithQuery:
+ playItem:
+ queueAsQuery
+ queueAsRadioStation
+ prepareQueueForPlayback
+ setNowPlayingItem:
+ shuffle
+ skipToBeginningOrPreviousItem
+ skipToNextChapter
+ skipToPreviousChapter
+ _tearDownVideoView
+ _prepareQueueIfNecessary
+ _setQueueWithQuery:
+ _clientState
+ _endPlayback
+ _numberOfItems
+ useApplicationSpecificQueue
+ _clientPortInvalidated:
+ _clientPIDHasPermissionToPlay:
+ _endPlaybackForClientIfNecessary:
+ _avControllerForClientPID:
+ _clientPortInvalidatedNotification:
+ _applicationStateChangedNotification:
+ _clientStateForPID:
+ _currentClientPIDHasPermissionToPlay
+ _registerClientPort:forProcessID:hasAudioBackgroundMode:
+ _setQueuePrepared:
+ dealloc
+ init
+ numberOfItems
+ stop
+ pause
+ .cxx_destruct
- _playbackStateDidChangeNotification:
- playbackState
- repeatMode
- setRepeatMode:
- prepareToPlay
- play
- beginSeekingForward
- beginSeekingBackward
- endSeeking
- skipToNextItem
- skipToBeginning
- skipToPreviousItem
- currentPlaybackTime
- setCurrentPlaybackTime:
- currentPlaybackRate
- setCurrentPlaybackRate:
- _itemDidChangeNotification:
- _itemPlaybackDidEndNotification:
- _avController
- _tvOutCapabilityDidChangeNotification:
- nowPlayingItem
- setQueueWithQuery:firstItem:
- setQueueWithItemCollection:
- shuffleMode
- setShuffleMode:
- isGeniusAvailable
- isGeniusAvailableForSeedItems:
- setQueueWithSeedItems:
- nowPlayingItemAtIndex:
- nowPlayingRadioTrackID
- pauseWithFadeoutDuration:
- allowsBackgroundVideo
- setAllowsBackgroundVideo:
- playbackSpeed
- setPlaybackSpeed:
- indexOfNowPlayingItem
- unshuffledIndexOfNowPlayingItem
- isNowPlayingItemFromGeniusMix
- currentChapterIndex
- setCurrentChapterIndex:
- setQueueWithGeniusMixPlaylist:
- setQueueWithRadioStation:
- skipInDirection:
- serverIsAlive
- setUseApplicationSpecificQueue:
- registerForServerDiedNotifications
- setQueueWithQuery:
- playItem:
- queueAsQuery
- queueAsRadioStation
- prepareQueueForPlayback
- setNowPlayingItem:
- shuffle
- skipToBeginningOrPreviousItem
- skipToNextChapter
- skipToPreviousChapter
- _tearDownVideoView
- _prepareQueueIfNecessary
- _setQueueWithQuery:
- _clientState
- _endPlayback
- _numberOfItems
- useApplicationSpecificQueue
- _clientPortInvalidated:
- _clientPIDHasPermissionToPlay:
- _endPlaybackForClientIfNecessary:
- _avControllerForClientPID:
- _clientPortInvalidatedNotification:
- _applicationStateChangedNotification:
- _clientStateForPID:
- _currentClientPIDHasPermissionToPlay
- _registerClientPort:forProcessID:hasAudioBackgroundMode:
- _setQueuePrepared:
- dealloc
- init
- numberOfItems
- stop
- pause
- .cxx_destruct
@end
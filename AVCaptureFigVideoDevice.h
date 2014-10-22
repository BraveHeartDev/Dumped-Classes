@interface AVCaptureFigVideoDevice : AVCaptureDevice
{
	id _deviceProperties;
	id _sensorProperties;
	id _activeFormat;
	struct _activeMinFrameDuration;
	BOOL _activeMinFrameDurationSetByClient;
	struct _activeMaxFrameDuration;
	BOOL _activeMaxFrameDurationSetByClient;
	long long _focusMode;
	struct _focusPointOfInterest;
	float _focusPosition;
	BOOL _manualFocusSupportEnabled;
	int _focusInFlightCount;
	BOOL _adjustingFocus;
	long long _autoFocusRangeRestriction;
	BOOL _smoothAutoFocusEnabled;
	long long _exposureMode;
	struct _exposureDuration;
	float _exposureGain;
	BOOL _manualExposureSupportEnabled;
	float _autoExposureBias;
	struct _exposurePointOfInterest;
	BOOL _adjustingExposure;
	long long _wbMode;
	float _whiteBalanceTemperature;
	BOOL _adjustingWB;
	BOOL _automaticallyAdjustsImageControlMode;
	long long _imageControlMode;
	long long _pendingImageControlMode;
	long long _flashMode;
	BOOL _flashActive;
	BOOL _flashAvailable;
	long long _torchMode;
	BOOL _torchActive;
	float _torchLevel;
	BOOL _torchAvailable;
	id _torchAppsSerialQueue;
	id _torchAppsKillTimer;
	pointer _recorderForTorchApps;
	BOOL _isConnected;
	BOOL _subjectMonitoringEnabled;
	BOOL _faceDetectionDrivenImageProcessingEnabled;
	struct _faceRectangle;
	int _faceRectangleAngle;
	BOOL _faceDetectionMetadataEnabled;
	BOOL _automaticallyEnablesLowLightBoostWhenAvailable;
	BOOL _lowLightBoostEnabled;
	BOOL _highDynamicRangeSceneDetectionEnabled;
	BOOL _sceneIsHighDynamicRange;
	float _saturation;
	float _contrast;
	long long _videoZoomDownscaleStageHint;
	long long _videoZoomUpscaleStageHint;
	float _videoZoomFactor;
	float _videoZoomRampTarget;
	int _videoZoomRampCounter;
	float _videoZoomRampAcceleration;
	BOOL _videoZoomDrawOverlay;
	id _formats;
	pointer _deviceClock;
	id _weakReference;
}

@end
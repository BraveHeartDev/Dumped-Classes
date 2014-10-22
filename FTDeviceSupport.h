@interface FTDeviceSupport : NSObject
{
	BOOL _blockPost;
	BOOL _supportsFrontCamera;
	BOOL _supportsBackCamera;
	BOOL _supportsiMessage;
	BOOL _supportsSMS;
	BOOL _supportsMMS;
	BOOL _supportsFT;
	BOOL _supportsFTA;
	BOOL _supportsWiFi;
	BOOL _supportsWLAN;
	BOOL _supportsNonWiFiFaceTime;
	BOOL _supportsCellularData;
	BOOL _shouldUseSIMState;
	BOOL _commCenterDead;
	BOOL _simBecameNotReady;
	int _carrierBundleSupported;
	int _iMessageAllowedToken;
	BOOL _faceTimeBlocked;
	BOOL _iMessageBlocked;
	BOOL _accountModificationRestricted;
	long long _performanceClass;
}

+ callingAvailable
+ profileConnectionDidReceiveRestrictionChangedNotification:userInfo:
+ profileConnectionDidReceiveEffectiveSettingsChangedNotification:userInfo:
+ dealloc
+ init
+ model
+ _updateCapabilities
+ madridSupported
+ performanceClass
+ iMessageAvailable
+ supportsCellularData
+ supportsWiFi
+ supportsWLAN
+ accountModificationRestricted
+ supportsMMS
+ _watchNotifyTokens
+ _updateManagedConfigurationSettings
+ _registerForCapabilityNotifications
+ _registerForManagedConfigurationNotifications
+ _unregisterForManagedConfigurationNotifications
+ madridBlocked
+ callingBlocked
+ faceTimeBlocked
+ madridAvailable
+ conferencingEnabled
+ conferencingBlocked
+ conferencingAllowed
+ telephonyCapabilities
+ userAgentString
+ _operatorChanged
+ _carrierChanged
+ _registerForInternalCoreTelephonyNotifications
+ commCenterDead
+ iMessageBlocked
+ supportsNonWiFiCalling
+ deviceTypeIDPrefix
+ _simStatusChanged:
+ _handleTechnologyChange:
+ _handlePhoneNumberRegistrationStateChanged:
+ CTNetworkInformation
+ nonWifiCallingAvailable
+ deviceName
+ deviceInformationString
+ deviceIDPrefix
+ supportsSMSIdentification
+ telephoneNumber
+ supportsSMS
+ isC2KEquipment
+ productName
+ productBuildVersion
+ isTelephonyDevice
+ registrationSupported
+ supportsAppleIDIdentification
+ faceTimeSupported
+ callingSupported
+ iMessageSupported
+ identityServicesSupported
+ _registerForLockdownNotifications
+ _registerForCarrierNotifications
+ _unregisterForCarrierNotifications
+ _unregisterForCoreTelephonyNotifications
+ _unregisterForCommCenterReadyNotifications
+ _registerForCommCenterReadyNotifications
+ _registerForCoreTelephonyNotifications
+ _commCenterAlive
+ _lockdownStateChanged:
+ carrierSettingsChanged:
+ nonWifiFaceTimeAvailable
+ faceTimeAvailable
+ supportsFrontFacingCamera
+ supportsBackFacingCamera
+ wantsBreakBeforeMake
+ supportsNonWiFiFaceTime
+ supportsSimultaneousVoiceAndDataRightNow
+ productVersion
+ deviceType
- callingAvailable
- profileConnectionDidReceiveRestrictionChangedNotification:userInfo:
- profileConnectionDidReceiveEffectiveSettingsChangedNotification:userInfo:
- dealloc
- init
- model
- _updateCapabilities
- madridSupported
- performanceClass
- iMessageAvailable
- supportsCellularData
- supportsWiFi
- supportsWLAN
- accountModificationRestricted
- supportsMMS
- _watchNotifyTokens
- _updateManagedConfigurationSettings
- _registerForCapabilityNotifications
- _registerForManagedConfigurationNotifications
- _unregisterForManagedConfigurationNotifications
- madridBlocked
- callingBlocked
- faceTimeBlocked
- madridAvailable
- conferencingEnabled
- conferencingBlocked
- conferencingAllowed
- telephonyCapabilities
- userAgentString
- _operatorChanged
- _carrierChanged
- _registerForInternalCoreTelephonyNotifications
- commCenterDead
- iMessageBlocked
- supportsNonWiFiCalling
- deviceTypeIDPrefix
- _simStatusChanged:
- _handleTechnologyChange:
- _handlePhoneNumberRegistrationStateChanged:
- CTNetworkInformation
- nonWifiCallingAvailable
- deviceName
- deviceInformationString
- deviceIDPrefix
- supportsSMSIdentification
- telephoneNumber
- supportsSMS
- isC2KEquipment
- productName
- productBuildVersion
- isTelephonyDevice
- registrationSupported
- supportsAppleIDIdentification
- faceTimeSupported
- callingSupported
- iMessageSupported
- identityServicesSupported
- _registerForLockdownNotifications
- _registerForCarrierNotifications
- _unregisterForCarrierNotifications
- _unregisterForCoreTelephonyNotifications
- _unregisterForCommCenterReadyNotifications
- _registerForCommCenterReadyNotifications
- _registerForCoreTelephonyNotifications
- _commCenterAlive
- _lockdownStateChanged:
- carrierSettingsChanged:
- nonWifiFaceTimeAvailable
- faceTimeAvailable
- supportsFrontFacingCamera
- supportsBackFacingCamera
- wantsBreakBeforeMake
- supportsNonWiFiFaceTime
- supportsSimultaneousVoiceAndDataRightNow
- productVersion
- deviceType
@end
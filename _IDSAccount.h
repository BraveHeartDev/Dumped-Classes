@interface _IDSAccount : NSObject
{
	id _accountConfig;
	id _serviceToken;
	id _uniqueID;
	id _service;
	id _devices;
	id _delegateContext;
	id _delegateToInfo;
	id _registrationDelegateToInfo;
	BOOL _devicesLoaded;
	BOOL _isEnabled;
}

+ setPassword:
+ serviceName
+ setAuthToken:
+ pushToken
+ dealloc
+ description
+ isActive
+ _isEnabled
+ canSend
+ addDelegate:queue:
+ uniqueID
+ devices
+ account:dependentDevicesUpdated:
+ _callDelegatesWithBlock:
+ aliasStrings
+ setAccountInfo:
+ _setIsEnabled:
+ initWithDictionary:uniqueID:serviceName:delegateContext:
+ initWithLoginID:uniqueID:serviceName:delegateContext:
+ setLoginID:
+ dateRegistered
+ _objectForKey:
+ registrationInfo
+ _updateDependentDevicesWithDevicesInfo:
+ _loadCachedDevices
+ _keychainRegistration
+ _registeredURIs
+ _callRegistrationDelegatesWithBlock:
+ profileID
+ registrationStatus
+ regionID
+ regionBasePhoneNumber
+ nextRegistrationDate
+ regionServerContext
+ aliases
+ profileInfo
+ _setObject:forKey:
+ vettedAliases
+ authenticateAccount
+ addAliases:
+ removeAliases:
+ unvalidateAliases:
+ validateAliases:
+ registerAccount
+ unregisterAccount
+ updateAuthorizationCredentials:token:
+ validateProfile
+ loginID
+ passwordUpdated
+ updateAccountWithAccountInfo:
+ accountInfo
+ addRegistrationDelegate:queue:
+ removeRegistrationDelegate:
+ account:registrationStatusInfoChanged:
+ account:aliasesChanged:
+ account:vettedAliasesChanged:
+ account:profileChanged:
+ account:loginChanged:
+ account:displayNameChanged:
+ refreshRegistrationForAccount:
+ activeDevicesUpdatedForAccount:
+ registeredURIs
+ deactivateAndPurgeIdentify
+ _reregisterAndReidentify:
+ registrationCertificate
+ _connect
+ removeDelegate:
+ accountType
- setPassword:
- serviceName
- setAuthToken:
- pushToken
- dealloc
- description
- isActive
- _isEnabled
- canSend
- addDelegate:queue:
- uniqueID
- devices
- account:dependentDevicesUpdated:
- _callDelegatesWithBlock:
- aliasStrings
- setAccountInfo:
- _setIsEnabled:
- initWithDictionary:uniqueID:serviceName:delegateContext:
- initWithLoginID:uniqueID:serviceName:delegateContext:
- setLoginID:
- dateRegistered
- _objectForKey:
- registrationInfo
- _updateDependentDevicesWithDevicesInfo:
- _loadCachedDevices
- _keychainRegistration
- _registeredURIs
- _callRegistrationDelegatesWithBlock:
- profileID
- registrationStatus
- regionID
- regionBasePhoneNumber
- nextRegistrationDate
- regionServerContext
- aliases
- profileInfo
- _setObject:forKey:
- vettedAliases
- authenticateAccount
- addAliases:
- removeAliases:
- unvalidateAliases:
- validateAliases:
- registerAccount
- unregisterAccount
- updateAuthorizationCredentials:token:
- validateProfile
- loginID
- passwordUpdated
- updateAccountWithAccountInfo:
- accountInfo
- addRegistrationDelegate:queue:
- removeRegistrationDelegate:
- account:registrationStatusInfoChanged:
- account:aliasesChanged:
- account:vettedAliasesChanged:
- account:profileChanged:
- account:loginChanged:
- account:displayNameChanged:
- refreshRegistrationForAccount:
- activeDevicesUpdatedForAccount:
- registeredURIs
- deactivateAndPurgeIdentify
- _reregisterAndReidentify:
- registrationCertificate
- _connect
- removeDelegate:
- accountType
@end
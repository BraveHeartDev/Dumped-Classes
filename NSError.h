@interface NSError : NSObject
{
	pointer _reserved;
	long long _code;
	id _domain;
	id _userInfo;
}

+ ax_nonRedundantDescription
+ initWithXPCEncoding:
+ copyXPCEncoding
+ isSiriUISnippetPluginError
+ replacementObjectForPortCoder:
+ _web_initWithDomain_nowarn:code:URL:
+ _web_initWithDomain:code:failingURL:
+ _web_failingURL
+ _web_errorIsInDomain:
+ _web_localizedDescription
+ _cocoaErrorString:
+ _collectApplicableUserInfoFormatters:max:
+ _formatCocoaErrorString:parameters:applicableFormatters:count:
+ _cocoaErrorString:fromBundle:tableName:
+ isExpiredPasswordError
+ isConnectivityError
+ isPasswordMismatchError
+ isInvalidSubscriberError
+ isServerError
+ isSecurityError
+ isEqualToError:
+ isStreamDomain:error:
+ isNewPasswordError
+ shouldPresentErrorForTaskType:
+ MCVerboseDescription
+ MCFindPrimaryError
+ MCUSEnglishDescription
+ MCUSEnglishSuggestion
+ MCCopyAsPrimaryError
+ MCContainsErrorDomain:code:
+ MCErrorType
+ tl_nonRedundantDescription
+ zilchDecoderTileLoadingError
+ _geo_newXPCData
+ _initWithPluginErrorCode:contentURL:pluginPageURL:pluginName:MIMEType:
+ _webkit_initWithDomain:code:URL:
+ _mapkit_directionsErrorWithDetail:
+ _mapkit_isDirectionsError
+ _mapkit_directionsErrorCode
+ _mapkit_underlyingGEOError
+ _mapkit_error
+ _mapkit_isCLLocationUnknown
+ _mapkit_isCLDenied
+ _mapkit_isCLHeadingFailure
+ _mapkit_isCLErrorNetwork
+ _mapkit_locationErrorSettingsURL
+ errorBySettingFatalError:
+ isFatalError
+ isEqual:compareUserInfo:
+ encodeableError
+ encodeableError
+ encodeableError
+ encodeableError
+ mf_shortDescription
+ mf_isUserCancelledError
+ mf_moreInfo
+ mf_shouldBeReportedToUser
+ mf_isInaccessibleAccountCredentialError
+ mf_isMissingAccountCredentialError
+ DAExtendedDescription
+ MMCSIsAuthorizationError
+ MMCSIsNetworkConditionsError
+ MMCSIsFatalError
+ _MMCSApplyBlock:
+ MMCSErrorType
+ MMCSIsCancelError
+ MMCSRetryAfterDate
+ MSIsTemporaryNetworkError
+ MSIsQuotaError
+ MSNeedsBackoff
+ MSIsCounted
+ MSCanBeIgnored
+ MSIsFatal
+ MSIsBadTokenError
+ MSIsAuthError
+ MSMMCSRetryAfterDate
+ MSIsRegistrationError
+ MSFindPrimaryError
+ _MSVerboseDescriptionRecursionCount:
+ _MSApplyBlock:
+ MSContainsErrorWithDomain:code:
+ MSMakePrimaryError
+ MSASStateMachineIsCanceledError
+ MSVerboseDescription
+ _gkIsUnauthenticatedError
+ _cfTypeID
+ _cocoaErrorStringWithKind:variant:
+ _cocoaErrorStringWithKind:
+ _retainedUserInfoCallBackForKey:
+ helpAnchor
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ description
+ domain
+ code
+ copyWithZone:
+ userInfo
+ initWithDomain:code:userInfo:
+ localizedDescription
+ localizedRecoverySuggestion
+ localizedRecoveryOptions
+ recoveryAttempter
+ localizedFailureReason
+ finalize
- ax_nonRedundantDescription
- initWithXPCEncoding:
- copyXPCEncoding
- isSiriUISnippetPluginError
- replacementObjectForPortCoder:
- _web_initWithDomain_nowarn:code:URL:
- _web_initWithDomain:code:failingURL:
- _web_failingURL
- _web_errorIsInDomain:
- _web_localizedDescription
- _cocoaErrorString:
- _collectApplicableUserInfoFormatters:max:
- _formatCocoaErrorString:parameters:applicableFormatters:count:
- _cocoaErrorString:fromBundle:tableName:
- isExpiredPasswordError
- isConnectivityError
- isPasswordMismatchError
- isInvalidSubscriberError
- isServerError
- isSecurityError
- isEqualToError:
- isStreamDomain:error:
- isNewPasswordError
- shouldPresentErrorForTaskType:
- MCVerboseDescription
- MCFindPrimaryError
- MCUSEnglishDescription
- MCUSEnglishSuggestion
- MCCopyAsPrimaryError
- MCContainsErrorDomain:code:
- MCErrorType
- tl_nonRedundantDescription
- zilchDecoderTileLoadingError
- _geo_newXPCData
- _initWithPluginErrorCode:contentURL:pluginPageURL:pluginName:MIMEType:
- _webkit_initWithDomain:code:URL:
- _mapkit_directionsErrorWithDetail:
- _mapkit_isDirectionsError
- _mapkit_directionsErrorCode
- _mapkit_underlyingGEOError
- _mapkit_error
- _mapkit_isCLLocationUnknown
- _mapkit_isCLDenied
- _mapkit_isCLHeadingFailure
- _mapkit_isCLErrorNetwork
- _mapkit_locationErrorSettingsURL
- errorBySettingFatalError:
- isFatalError
- isEqual:compareUserInfo:
- encodeableError
- encodeableError
- encodeableError
- encodeableError
- mf_shortDescription
- mf_isUserCancelledError
- mf_moreInfo
- mf_shouldBeReportedToUser
- mf_isInaccessibleAccountCredentialError
- mf_isMissingAccountCredentialError
- DAExtendedDescription
- MMCSIsAuthorizationError
- MMCSIsNetworkConditionsError
- MMCSIsFatalError
- _MMCSApplyBlock:
- MMCSErrorType
- MMCSIsCancelError
- MMCSRetryAfterDate
- MSIsTemporaryNetworkError
- MSIsQuotaError
- MSNeedsBackoff
- MSIsCounted
- MSCanBeIgnored
- MSIsFatal
- MSIsBadTokenError
- MSIsAuthError
- MSMMCSRetryAfterDate
- MSIsRegistrationError
- MSFindPrimaryError
- _MSVerboseDescriptionRecursionCount:
- _MSApplyBlock:
- MSContainsErrorWithDomain:code:
- MSMakePrimaryError
- MSASStateMachineIsCanceledError
- MSVerboseDescription
- _gkIsUnauthenticatedError
- _cfTypeID
- _cocoaErrorStringWithKind:variant:
- _cocoaErrorStringWithKind:
- _retainedUserInfoCallBackForKey:
- helpAnchor
- dealloc
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- description
- domain
- code
- copyWithZone:
- userInfo
- initWithDomain:code:userInfo:
- localizedDescription
- localizedRecoverySuggestion
- localizedRecoveryOptions
- recoveryAttempter
- localizedFailureReason
- finalize
@end
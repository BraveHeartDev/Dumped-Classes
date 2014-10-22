@interface SSURLRequestProperties : NSObject
{
	long long _allowedRetryCount;
	usigned long long _cachePolicy;
	id _clientAuditBundleIdentifier;
	id _clientAuditTokenData;
	id _clientIdentifier;
	id _dispatchQueue;
	long long _expectedContentLength;
	id _httpBody;
	id _httpBodyStream;
	id _httpHeaders;
	id _httpMethod;
	BOOL _isITunesStoreRequest;
	BOOL _largeDownload;
	usigned long long _networkServiceType;
	id _requestParameters;
	char _requiresExtendedValidationCertificates;
	BOOL _shouldAddKBSyncData;
	BOOL _shouldDecodeResponse;
	BOOL _shouldDisableCellular;
	BOOL _shouldDisableCellularFallback;
	BOOL _shouldProcessProtocol;
	BOOL _shouldSendSecureToken;
	BOOL _shouldSetCookies;
	double _timeoutInterval;
	id _urlBagKey;
	long long _urlBagType;
	id _urlBagURLBlock;
	id _urls;
	id _userAgentComponents;
}

+ networkServiceType
+ cachePolicy
+ timeoutInterval
+ HTTPMethod
+ HTTPBody
+ HTTPBodyStream
+ expectedContentLength
+ initWithURLRequest:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ init
+ isEqual:
+ description
+ copyWithZone:
+ URL
+ initWithURL:
+ URLs
+ mutableCopyWithZone:
+ initWithXPCEncoding:
+ copyXPCEncoding
+ copyURLRequest
+ shouldDecodeResponse
+ isITunesStoreRequest
+ userAgentComponents
+ allowedRetryCount
+ shouldProcessProtocol
+ shouldSendSecureToken
+ shouldSetCookies
+ clientAuditBundleIdentifier
+ clientAuditTokenData
+ isLargeDownload
+ requiresExtendedValidationCertificates
+ shouldAddKBSyncData
+ shouldDisableCellular
+ shouldDisableCellularFallback
+ clientIdentifier
+ canBeResolved
+ requestParameters
+ URLBagKey
+ URLBagType
+ URLBagURLBlock
+ HTTPHeaders
+ _initCommon
- networkServiceType
- cachePolicy
- timeoutInterval
- HTTPMethod
- HTTPBody
- HTTPBodyStream
- expectedContentLength
- initWithURLRequest:
- dealloc
- initWithCoder:
- encodeWithCoder:
- init
- isEqual:
- description
- copyWithZone:
- URL
- initWithURL:
- URLs
- mutableCopyWithZone:
- initWithXPCEncoding:
- copyXPCEncoding
- copyURLRequest
- shouldDecodeResponse
- isITunesStoreRequest
- userAgentComponents
- allowedRetryCount
- shouldProcessProtocol
- shouldSendSecureToken
- shouldSetCookies
- clientAuditBundleIdentifier
- clientAuditTokenData
- isLargeDownload
- requiresExtendedValidationCertificates
- shouldAddKBSyncData
- shouldDisableCellular
- shouldDisableCellularFallback
- clientIdentifier
- canBeResolved
- requestParameters
- URLBagKey
- URLBagType
- URLBagURLBlock
- HTTPHeaders
- _initCommon
@end
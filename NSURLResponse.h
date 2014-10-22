@interface NSURLResponse : NSObject
{
	id _internal;
}

+ encoding
+ _setExpectedContentLength:
+ _setMIMEType:
+ _createdDate
+ _lastModifiedDate
+ _mustRevalidate
+ _freshnessLifetime
+ _calculatedExpiration
+ _peerCertificateChain
+ dealloc
+ _cacheTime
+ allHeaderFields
+ statusCode
+ maxExpectedContentLength
+ _initWithCFURLResponse:
+ textEncodingName
+ expectedContentLength
+ suggestedFilename
+ initWithCoder:
+ encodeWithCoder:
+ init
+ description
+ copyWithZone:
+ URL
+ MIMEType
+ _CFURLResponse
+ initWithURL:MIMEType:expectedContentLength:textEncodingName:
- encoding
- _setExpectedContentLength:
- _setMIMEType:
- _createdDate
- _lastModifiedDate
- _mustRevalidate
- _freshnessLifetime
- _calculatedExpiration
- _peerCertificateChain
- dealloc
- _cacheTime
- allHeaderFields
- statusCode
- maxExpectedContentLength
- _initWithCFURLResponse:
- textEncodingName
- expectedContentLength
- suggestedFilename
- initWithCoder:
- encodeWithCoder:
- init
- description
- copyWithZone:
- URL
- MIMEType
- _CFURLResponse
- initWithURL:MIMEType:expectedContentLength:textEncodingName:
@end
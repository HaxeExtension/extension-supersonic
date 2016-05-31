//
//  SSNMHttpHeader.h
//  NetworkManager
//
//  Created by yossi mozgerashvily on 7/20/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#ifndef NetworkManager_SSNMHttpHeader_h
#define NetworkManager_SSNMHttpHeader_h


#define SSNMHttpHeaderAccept @"Accept"	/*Content-Types that are acceptable for the response. See Content negotiation.*/
#define SSNMHttpHeaderAcceptCharset @"Accept-Charset"	/*Character sets that are acceptable*/
#define SSNMHttpHeaderAcceptDatetime @"Accept-Datetime"	/*Acceptable version in time*/
#define SSNMHttpHeaderAcceptEncoding @"Accept-Encoding"	/*List of acceptable encodings. See HTTP compression.*/
#define SSNMHttpHeaderAcceptLanguage @"Accept-Language"	/*List of acceptable human languages for response. See Content negotiation.*/
#define SSNMHttpHeaderAcceptPatch29 @"Accept-Patch[29]"	/*Specifies which patch document formats this server supports*/
#define SSNMHttpHeaderAcceptRanges @"Accept-Ranges"	/*What partial content range types this server supports*/
#define SSNMHttpHeaderAccessControlAllowOrigin @"Access-Control-Allow-Origin"	/*Specifying which web sites can participate in cross-origin resource sharing*/
#define SSNMHttpHeaderAge @"Age"	/*The age the object has been in a proxy cache in seconds*/
#define SSNMHttpHeaderAllow @"Allow"	/*Valid actions for a specified resource. To be used for a 405 Method not allowed*/
#define SSNMHttpHeaderAuthorization @"Authorization"	/*Authentication credentials for HTTP authentication*/
#define SSNMHttpHeaderCacheControl @"Cache-Control"	/*Used to specify directives that must be obeyed by all caching mechanisms along the request-response chain*/
#define SSNMHttpHeaderCacheControl @"Cache-Control"	/*Tells all caching mechanisms from server to client whether they may cache this object. It is measured in seconds*/
#define SSNMHttpHeaderConnection @"Connection"	/*Control options for the current connection and list of hop-by-hop request fields[8]*/
#define SSNMHttpHeaderConnection @"Connection"	/*Control options for the current connection and list of hop-by-hop response fields8]*/
#define SSNMHttpHeaderContentDisposition30 @"Content-Disposition[30]"	/*An opportunity to raise a "File Download" dialogue box for a known MIME type with binary format or suggest a filename for dynamic content. Quotes are necessary with special characters.*/
#define SSNMHttpHeaderContentEncoding @"Content-Encoding"	/*The type of encoding used on the data. See HTTP compression.*/
#define SSNMHttpHeaderContentLanguage @"Content-Language"	/*The natural language or languages of the intended audience for the enclosed content[31]*/
#define SSNMHttpHeaderContentLength @"Content-Length"	/*The length of the request body in octets (8-bit bytes)*/
#define SSNMHttpHeaderContentLength @"Content-Length"	/*The length of the response body in octets (8-bit bytes)*/
#define SSNMHttpHeaderContentLocation @"Content-Location"	/*An alternate location for the returned data*/
#define SSNMHttpHeaderContentMD5 @"Content-MD5"	/*A Base64-encoded binary MD5 sum of the content of the request body*/
#define SSNMHttpHeaderContentMD5 @"Content-MD5"	/*A Base64-encoded binary MD5 sum of the content of the response*/
#define SSNMHttpHeaderContentRange @"Content-Range"	/*Where in a full body message this partial message belongs*/
#define SSNMHttpHeaderContentSecurityPolicyXContentSecurityPolicyXWebKitCSP41 @"Content-Security-Policy, X-Content-Security-Policy, X-WebKit-CSP[41]"	/*Content Security Policy definition.*/
#define SSNMHttpHeaderContentType @"Content-Type"	/*The MIME type of the body of the request (used with POST and PUT requests)*/
#define SSNMHttpHeaderContentType @"Content-Type"	/*The MIME type of this content*/
#define SSNMHttpHeaderCookie @"Cookie"	/*An HTTP cookie previously sent by the server with Set-Cookie (below)*/
#define SSNMHttpHeaderDate @"Date"	/*The date and time that the message was sent (in "HTTP-date" format as defined by RFC 7231 Date/Time Formats)*/
#define SSNMHttpHeaderDate @"Date"	/*The date and time that the message was sent (in "HTTP-date" format as defined by RFC 7231)*/
#define SSNMHttpHeaderDNT11 @"DNT[11]"	/*Requests a web application to disable their tracking of a user. This is Mozilla's version of the X-Do-Not-Track header field (since Firefox 4.0 Beta 11). Safari and IE9 also have support for this field.[12] On March 7, 2011, a draft proposal was submitted to IETF.[13] The W3C Tracking Protection Working Group is producing a specification.[14]*/
#define SSNMHttpHeaderETag @"ETag"	/*An identifier for a specific version of a resource, often a message digest*/
#define SSNMHttpHeaderExpect @"Expect"	/*Indicates that particular server behaviors are required by the client*/
#define SSNMHttpHeaderExpires @"Expires"	/*Gives the date/time after which the response is considered stale (in "HTTP-date" format as defined by RFC 7231)*/
#define SSNMHttpHeaderFrom @"From"	/*The email address of the user making the request*/
#define SSNMHttpHeaderFrontEndHttps18 @"Front-End-Https[18]"	/*Non-standard header field used by Microsoft applications and load-balancers*/
#define SSNMHttpHeaderHost @"Host"	/*The domain name of the server (for virtual hosting), and the TCP port number on which the server is listening. The port number may be omitted if the port is the standard port for the service requested.[10] Mandatory since HTTP/1.1.*/
#define SSNMHttpHeaderIfMatch @"If-Match"	/*Only perform the action if the client supplied entity matches the same entity on the server. This is mainly for methods like PUT to only update a resource if it has not been modified since the user last updated it.*/
#define SSNMHttpHeaderIfModifiedSince @"If-Modified-Since"	/*Allows a 304 Not Modified to be returned if content is unchanged*/
#define SSNMHttpHeaderIfNoneMatch @"If-None-Match"	/*Allows a 304 Not Modified to be returned if content is unchanged, see HTTP ETag*/
#define SSNMHttpHeaderIfRange @"If-Range"	/*If the entity is unchanged, send me the part(s) that I am missing; otherwise, send me the entire new entity*/
#define SSNMHttpHeaderIfUnmodifiedSince @"If-Unmodified-Since"	/*Only send the response if the entity has not been modified since a specific time.*/
#define SSNMHttpHeaderLastModified @"Last-Modified"	/*The last modified date for the requested object (in "HTTP-date" format as defined by RFC 7231)*/
#define SSNMHttpHeaderLink @"Link"	/*Used to express a typed relationship with another resource, where the relation type is defined by RFC 5988*/
#define SSNMHttpHeaderLocation @"Location"	/*Used in redirection, or when a new resource has been created.*/
#define SSNMHttpHeaderMaxForwards @"Max-Forwards"	/*Limit the number of times the message can be forwarded through proxies or gateways.*/
#define SSNMHttpHeaderOrigin @"Origin"	/*Initiates a request for cross-origin resource sharing (asks server for an 'Access-Control-Allow-Origin' response field) .*/
#define SSNMHttpHeaderP3P @"P3P"	/*This field is supposed to set P3P policy, in the form of P3P:CP="your_compact_policy". However, P3P did not take off,[34]most browsers have never fully implemented it, a lot of websites set this field with fake policy text, that was enough to fool browsers the existence of P3P policy and grant permissions for third party cookies.*/
#define SSNMHttpHeaderPragma @"Pragma"	/*Implementation-specific fields that may have various effects anywhere along the request-response chain.*/
#define SSNMHttpHeaderPragma @"Pragma"	/*Implementation-specific fields that may have various effects anywhere along the request-response chain.*/
#define SSNMHttpHeaderProxyAuthenticate @"Proxy-Authenticate"	/*Request authentication to access the proxy.*/
#define SSNMHttpHeaderProxyAuthorization @"Proxy-Authorization"	/*Authorization credentials for connecting to a proxy.*/
#define SSNMHttpHeaderProxyConnection22 @"Proxy-Connection[22]"	/*Implemented as a misunderstanding of the HTTP specifications. Common because of mistakes in implementations of early HTTP versions. Has exactly the same functionality as standard Connection field.*/
#define SSNMHttpHeaderPublicKeyPins35 @"Public-Key-Pins[35]"	/*HTTP Public Key Pinning, announces hash of website's authentic TLS certificate*/
#define SSNMHttpHeaderRange @"Range"	/*Request only part of an entity. Bytes are numbered from 0. See Byte serving.*/
#define SSNMHttpHeaderRefererSic @"Referer [sic]"	/*This is the address of the previous web page from which a link to the currently requested page was followed. (The word “referrer” has been misspelled in the RFC as well as in most implementations to the point that it has become standard usage and is considered correct terminology)*/
#define SSNMHttpHeaderRefresh @"Refresh"	/*Used in redirection, or when a new resource has been created. This refresh redirects after 5 seconds.*/
#define SSNMHttpHeaderRetryAfter @"Retry-After"	/*If an entity is temporarily unavailable, this instructs the client to try again later. Value could be a specified period of time (in seconds) or a HTTP-date.[36]*/
#define SSNMHttpHeaderServer @"Server"	/*A name for the server*/
#define SSNMHttpHeaderSetCookie @"Set-Cookie"	/*An HTTP cookie*/
#define SSNMHttpHeaderStatus @"Status"	/*CGI header field specifying the status of the HTTP response. Normal HTTP responses use a separate "Status-Line" instead, defined by RFC 7230.[37]*/
#define SSNMHttpHeaderStrictTransportSecurity @"Strict-Transport-Security"	/*A HSTS Policy informing the HTTP client how long to cache the HTTPS only policy and whether this applies to subdomains.*/
#define SSNMHttpHeaderTE @"TE"	/*The transfer encodings the user agent is willing to accept: the same values as for the response header field Transfer-Encoding can be used, plus the "trailers" value (related to the "chunked" transfer method) to notify the server it expects to receive additional fields in the trailer after the last, zero-sized, chunk.*/
#define SSNMHttpHeaderTrailer @"Trailer"	/*The Trailer general field value indicates that the given set of header fields is present in the trailer of a message encoded withchunked transfer coding.*/
#define SSNMHttpHeaderTransferEncoding @"Transfer-Encoding"	/*The form of encoding used to safely transfer the entity to the user. Currently defined methods are: chunked, compress, deflate, gzip, identity.*/
#define SSNMHttpHeaderUpgrade @"Upgrade"	/*Ask the server to upgrade to another protocol.*/
#define SSNMHttpHeaderUpgrade @"Upgrade"	/*Ask the client to upgrade to another protocol.*/
#define SSNMHttpHeaderUserAgent @"User-Agent"	/*The user agent string of the user agent*/
#define SSNMHttpHeaderVary @"Vary"	/*Tells downstream proxies how to match future request headers to decide whether the cached response can be used rather than requesting a fresh one from the origin server.*/
#define SSNMHttpHeaderVia @"Via"	/*Informs the server of proxies through which the request was sent.*/
#define SSNMHttpHeaderVia @"Via"	/*Informs the client of proxies through which the response was sent.*/
#define SSNMHttpHeaderWarning @"Warning"	/*A general warning about possible problems with the entity body.*/
#define SSNMHttpHeaderWarning @"Warning"	/*A general warning about possible problems with the entity body.*/
#define SSNMHttpHeaderWWWAuthenticate @"WWW-Authenticate"	/*Indicates the authentication scheme that should be used to access the requested entity.*/
#define SSNMHttpHeaderXATTDeviceId20 @"X-ATT-DeviceId[20]"	/*Allows easier parsing of the MakeModel/Firmware that is usually found in the User-Agent String of AT&T Devices*/
#define SSNMHttpHeaderXContentDuration46 @"X-Content-Duration[46]"	/*Provide the duration of the audio or video in seconds; only supported by Gecko browsers*/
#define SSNMHttpHeaderXContentTypeOptions42 @"X-Content-Type-Options[42]"	/*The only defined value, "nosniff", prevents Internet Explorer from MIME-sniffing a response away from the declared content-type. This also applies to Google Chrome, when downloading extensions.[43]*/
#define SSNMHttpHeaderXCsrfToken26 @"X-Csrf-Token[26]"	/*Used to prevent cross-site request forgery. Alternative header names are: X-CSRFToken[27] and X-XSRF-TOKEN[28]*/
#define SSNMHttpHeaderXForwardedFor15 @"X-Forwarded-For[15]"	/*a de facto standard for identifying the originating IP address of a client connecting to a web server through an HTTP proxy or load balancer*/
#define SSNMHttpHeaderXForwardedHost16 @"X-Forwarded-Host[16]"	/*a de facto standard for identifying the original host requested by the client in the Host HTTP request header, since the host name and/or port of the reverse proxy (load balancer) may differ from the origin server handling the request.*/
#define SSNMHttpHeaderXForwardedProto17 @"X-Forwarded-Proto[17]"	/*a de facto standard for identifying the originating protocol of an HTTP request, since a reverse proxy (load balancer) may communicate with a web server using HTTP even if the request to the reverse proxy is HTTPS. An alternative form of the header (X-ProxyUser-Ip) is used by Google clients talking to Google servers.*/
#define SSNMHttpHeaderXFrameOptions38 @"X-Frame-Options[38]"	/*Clickjacking protection: deny - no rendering within a frame, sameorigin - no rendering if origin mismatch, allow-from - allow from specified location, allowall - non-standard, allow from any location*/
#define SSNMHttpHeaderXHttpMethodOverride19 @"X-Http-Method-Override[19]"	/*Requests a web application override the method specified in the request (typically POST) with the method given in the header field (typically PUT or DELETE). Can be used when a user agent or firewall prevents PUT or DELETE methods from being sent directly (note that this either a bug in the software component, which ought to be fixed, or an intentional configuration, in which case bypassing it may be the wrong thing to do).*/
#define SSNMHttpHeaderXPoweredBy44 @"X-Powered-By[44]"	/*specifies the technology (e.g. ASP.NET, PHP, JBoss) supporting the web application (version details are often in X-Runtime, X-Version, or X-AspNet-Version)*/
#define SSNMHttpHeaderXRequestedWith @"X-Requested-With"	/*mainly used to identify Ajax requests. Most JavaScript frameworks send this field with value of XMLHttpRequest*/
#define SSNMHttpHeaderXUACompatible45 @"X-UA-Compatible[45]"	/*Recommends the preferred rendering engine (often a backward-compatibility mode) to use to display the content. Also used to activate Chrome Frame in Internet Explorer.*/
#define SSNMHttpHeaderXUIDH232425 @"X-UIDH[23][24][25]"	/*Server-side deep packet insertion of a unique ID identifying customers of Verizon Wireless; also known as "perma-cookie" or "supercookie"*/
#define SSNMHttpHeaderXWapProfile21 @"X-Wap-Profile[21]"	/*Links to an XML file on the Internet with a full description and details about the device currently connecting. In the example to the right is an XML file for an AT&T Samsung Galaxy S2.*/
#define SSNMHttpHeaderXXSSProtection40 @"X-XSS-Protection[40]"	/*Cross-site scripting (XSS) filter*/



#endif

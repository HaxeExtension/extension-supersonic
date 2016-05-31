//
//  SSPCEErrorDefs.h
//  PreCacheEngine
//
//  Created by Mira Weiss on 14/02/2016.
//  Copyright © 2016 Mira Weiss. All rights reserved.
//

#ifndef SSPCEErrorsDefs_h
#define SSPCEErrorsDefs_h

#define SSPCE_DOMAIN @"com.supersonic.sspce"

#define SSPCE_ERROR_CODE_FILE_CACHE_ERROR_INITIATION         1
#define SSPCE_ERROR_CODE_CACHE_UNIT_FAILED                   2
#define SSPCE_ERROR_CODE_DOWNLOAD_CACHE_UNIT_FAILED          3
#define SSPCE_ERROR_CODE_DELETE_CACHE_UNIT_FAILED            4

#define SSPCE_ERROR_CODE_PREPARE_ASYNC_FAILED               20
#define SSPCE_ERROR_CODE_CACHE_UNIT_ASYNC_FAILED            21

#define SSPCE_ERROR_CODE_EXECUTE_HTTP_REQUEST_FAILED        100
#define SSPCE_ERROR_CODE_HTTP_RESPONSE_IS_NOT_OK            101
#define SSPCE_ERROR_CODE_HTTP_REQUEST_FAILED                102

#define SSPCE_ERROR_CODE_PRECACHE_STATE_INITIALIZED         200
#define SSPCE_ERROR_CODE_PRECACHE_STATE_PREPARED            201

//errors
#define SSPCE_ERROR_DOMAIN SSPCE_DOMAIN

#define SSPCE_ERROR(_code,_description) [[NSError alloc] initWithDomain:SSPCE_ERROR_DOMAIN \
code:_code \
userInfo:@ {NSLocalizedDescriptionKey : _description}];


#define SSPCE_CHAINED_ERROR(_code,_description,_error) [NSError errorWithDomain:SSPCE_ERROR_DOMAIN \
code:_code \
userInfo:@{NSLocalizedDescriptionKey : _description,\
NSUnderlyingErrorKey : _error}];

#endif /* SSPCEErrorsDefs_h */

//
//  SSNMErrorDefs.h
//  NetworkManager
//
//  Created by yossi mozgerashvily on 7/28/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#ifndef NetworkManager_SSNMErrorDefs_h
#define NetworkManager_SSNMErrorDefs_h

#define SSNM_DOMAIN_PREFIX @"com.supersonic.ssnm"

#define ERROR_CODE_BAD_HTTP_REQUEST                     100
#define ERROR_CODE_RETRY_FAILED                         101
#define ERROR_CODE_MAXIMUM_AMOUNT_OF_RETRIES_REACHED    102

#define ERROR_CODE_REDIRECTION_FAILED                   1001


#define SSNM_CREATE_ERROR(_code,_desc) [[NSError alloc] initWithDomain:SSNM_DOMAIN_PREFIX  \
code:_code \
userInfo:@{NSLocalizedDescriptionKey : _desc}];

#define SSNM_CREATE_ERROR_WITH_INTERNAL_ERROR(_code,_desc,_internalerror) [[NSError alloc] initWithDomain:SSNM_DOMAIN_PREFIX \
code:_code \
userInfo:@{ NSUnderlyingErrorKey : _internalerror, \
            NSLocalizedDescriptionKey : _desc}];


#endif

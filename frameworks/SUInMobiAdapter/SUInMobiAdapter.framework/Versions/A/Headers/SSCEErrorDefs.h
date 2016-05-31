//
//  SSCEErrorDefs.h
//  CacheEngine
//
//  Created by Mira Weiss on 14/02/2016.
//  Copyright © 2016 Supersonic. All rights reserved.
//

#ifndef SSCEErrorDefs_h
#define SSCEErrorDefs_h

#define SSCE_DONAIN @"com.supersonic.ssce"

#define SSCE_ERROR_DOMAIN SSCE_DONAIN

#define SSCE_ERROR_CODE_PLATFORM                  1
#define SSCE_ERROR_CODE_MAX_SIZE_REACHED          2
#define SSCE_ERROR_CODE_ID_EXISTS                 3
#define SSCE_ERROR_CODE_ID_DOESNT_EXIST           4
#define SSCE_ERROR_CODE_COULD_NOT_READ_FILE       5
#define SSCE_ERROR_CODE_COULD_NOT_REMOVE_FILE     6
#define SSCE_ERROR_CODE_COULD_NOT_RESET_CACHE     7
#define SSCE_ERROR_CODE_EXCEPTION_WAS_THROWN      8
#define SSCE_ERROR_CODE_COULD_NOT_INIT_CACHE      9
#define SSCE_ERROR_CODE_COULD_NOT_REMOVE_OBJECT   10
#define SSCE_ERROR_CODE_COULD_NOT_ADD_OBJECT      11
#define SSCE_ERROR_CODE_GENERIC                   0xFFFFFFFF

#define SSCE_ERROR(_code,_description) [[NSError alloc] initWithDomain:SSCE_ERROR_DOMAIN \
code:_code \
userInfo:@ {NSLocalizedDescriptionKey : _description}];

#define SSCE_CHAINED_ERROR(_code,_description,_error) [NSError errorWithDomain:SSCE_ERROR_DOMAIN \
code:_code \
userInfo:@{NSLocalizedDescriptionKey : _description,\
NSUnderlyingErrorKey : _error}];

#endif /* SSCEErrorDefs_h */

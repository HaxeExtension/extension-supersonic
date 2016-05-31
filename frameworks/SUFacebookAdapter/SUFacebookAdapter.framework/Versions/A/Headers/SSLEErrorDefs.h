//
//  SSLEErrorDefs.h
//  PresentationEngine
//
//  Created by Mira Weiss on 14/02/2016.
//  Copyright © 2016 Supersonic. All rights reserved.
//

#ifndef SSLEErrorDefs_h
#define SSLEErrorDefs_h

#define SSLE_ERROR_DOMAIN @"com.supersonic.ssle"

#define SSLE_ERROR_CODE_WIDGET_EXISTS           1
#define SSLE_ERROR_CODE_WIDGET_DOES_NOT_EXIST   2
#define SSLE_ERROR_CODE_ASYNC_ACTION_ERROR      3

// Erros
#define SSLE_ERROR(_code,_desc) [[NSError alloc] initWithDomain:SSLE_ERROR_DOMAIN  \
code:_code \
userInfo:@{NSLocalizedDescriptionKey : _desc}];


#endif /* SSLEErrorDefs_h */

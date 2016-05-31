//
//  Defs.h
//  NetworkManager
//
//  Created by yossi mozgerashvily on 7/14/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#ifndef NetworkManager_Defs_h
#define NetworkManager_Defs_h

#import <Foundation/Foundation.h>

typedef NSUInteger SSNMPriority;

//exception
#define SSNM_MAKE_EXCEPTION(_name, _description) [[NSException alloc] initWithName:_name reason:_description userInfo:nil]
#define SSNM_THROW_EXCEPTION(_name, _description) @throw SSNM_MAKE_EXCEPTION(_name, _description)
#define SSNM_THROW_IF_NIL(_parameter) if (_parameter == nil) { \
SSNM_THROW_EXCEPTION(NSInvalidArgumentException, @"## _parameter ## is nil");\
}

#define SSNM_NO_INIT -(instancetype) init __attribute__((unavailable("init not available")));

#define SSNM_HTTP_STATUS_CODE_OK 200

#endif

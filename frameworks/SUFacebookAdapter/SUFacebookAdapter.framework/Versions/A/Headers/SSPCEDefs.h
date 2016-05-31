//
//  SSPCEDefs.h
//  PreCacheEngine
//
//  Created by Mira Weiss on 18/01/2016.
//  Copyright © 2016 Mira Weiss. All rights reserved.
//

#ifndef PreCacheEngine_SSPCEDefs_h
#define PreCacheEngine_SSPCEDefs_h

//assert
#ifdef DEBUG
#define SSPCE_ASSERT(condition) NSAssert(condition, nil)
#define SSPCE_FAIL SSPCE_ASSERT(false)
#else
#define SSPCE_ASSERT(condition)
#define SSPCE_FAIL
#endif


//exceptions
#define SSPCE_MAKE_EXCEPTION(_name, _description) [[NSException alloc] initWithName:_name reason:_description userInfo:nil]
#define SSPCE_THROW_EXCEPTION(_name, _description) @throw SSPCE_MAKE_EXCEPTION(_name, _description)
#define SSPCE_THROW_IF_NIL(_parameter) if (_parameter == nil) { \
SSPCE_THROW_EXCEPTION(NSInvalidArgumentException, @"## _parameter ## is nil");\
}

//trace
#ifdef DEBUG
#define SSPCE_TRACE(msg, ...) NSLog(msg , __VA_ARGS__)
#define SSPCE_TRACE0(msg) SSPCE_TRACE(msg, nil)
#define SSPCE_TRACE_PRETTY_FUNCTION NSLog(@"%s", __PRETTY_FUNCTION__)
#else
#define SSPCE_TRACE(msg, ...)
#define SSPCE_TRACE0(msg)
#define SSPCE_TRACE_PRETTY_FUNCTION
#endif


#endif /* PreCacheEngine_SSPCEDefs_h */

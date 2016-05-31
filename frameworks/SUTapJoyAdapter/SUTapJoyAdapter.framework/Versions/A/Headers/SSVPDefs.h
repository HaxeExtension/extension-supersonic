//
//  SSVPDefs.h
//  VideoPlayer
//
//  Created by yossi mozgerashvily on 9/9/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#ifndef VideoPlayer_SSVPDefs_h
#define VideoPlayer_SSVPDefs_h

//exception
#define SSVP_MAKE_EXCEPTION(_name, _description) [[NSException alloc] initWithName:_name reason:_description userInfo:nil]
#define SSVP_THROW_EXCEPTION(_name, _description) @throw SSVP_MAKE_EXCEPTION(_name, _description)
#define SSVP_THROW_IF_NIL(_parameter) if (_parameter == nil) { \
SSVP_THROW_EXCEPTION(NSInvalidArgumentException, @"## _parameter ## is nil");\
}

//trace
#ifdef DEBUG
#define SSVP_TRACE(msg, ...) NSLog(msg , __VA_ARGS__)
#define SSVP_TRACE0(msg) SSNM_TRACE(msg, nil)
#define SSCE_TRACE_PRETTY_FUNCTION NSLog(@"%s", __PRETTY_FUNCTION__)
#else
#define SSVP_TRACE(msg, ...)
#define SSVP_TRACE0(msg)
#define SSCE_TRACE_PRETTY_FUNCTION
#endif

//assert
#ifdef DEBUG
#define SSVP_ASSERT(condition) NSAssert(condition, nil)
#else
#define SSVP_ASSERT(condition)
#endif

#endif

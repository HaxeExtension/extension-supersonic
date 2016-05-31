//
//  SSCEDefs.h
//  CacheEngine
//
//  Created by yossi mozgerashvily on 8/18/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#ifndef CacheEngine_SSCEDefs_h
#define CacheEngine_SSCEDefs_h

#import <Foundation/Foundation.h>

typedef unsigned long long SSCESize;
typedef NSString* SSCEUid;

#define DEFAULT_GROUP_ID @"default_group_id"

#ifdef DEBUG
#define SSCE_ASSERT(condition) NSAssert(condition, nil)
#define SSCE_FAIL SSCE_ASSERT(false)
#else
#define SSCE_ASSERT(condition)
#define SSCE_FAIL
#endif

#define SSCE_ABSTRACT_METHOD [NSException raise:NSInternalInconsistencyException\
            format:@"You must override %@ in a subclass", NSStringFromSelector(_cmd)];

#define SSCE_MAKE_EXCEPTION(_name, _description) [[NSException alloc] initWithName:_name reason:_description userInfo:nil]
#define SSCE_THROW_EXCEPTION(_name, _description) @throw SSCE_MAKE_EXCEPTION(_name, _description)

#ifdef DEBUG
#define SSCE_TRACE(msg, ...) NSLog(msg , __VA_ARGS__)
#define SSCE_TRACE0(msg) SSNM_TRACE(msg, nil)
#define SSCE_TRACE_PRETTY_FUNCTION NSLog(@"%s", __PRETTY_FUNCTION__)
#else
#define SSCE_TRACE(msg, ...)
#define SSCE_TRACE0(msg)
#define SSCE_TRACE_PRETTY_FUNCTION
#endif

#endif

//
//  SSVEDefs.h
//  ValidationEngine
//
//  Created by Yotam Ohayon on 9/6/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#ifndef ValidationEngine_SSVEDefs_h
#define ValidationEngine_SSVEDefs_h

#import <Foundation/Foundation.h>

#ifdef DEBUG
#define SSVE_ASSERT(condition) NSAssert(condition, nil)
#define SSVE_FAIL SSCE_ASSERT(false)
#else
#define SSVE_ASSERT(condition)
#define SSVE_FAIL
#endif

#ifdef DEBUG
#define SSVE_TRACE(msg, ...) NSLog(msg , __VA_ARGS__)
#define SSVE_TRACE0(msg) SSNM_TRACE(msg, nil)
#define SSVE_TRACE_PRETTY_FUNCTION NSLog(@"%s", __PRETTY_FUNCTION__)
#else
#define SSVE_TRACE(msg, ...)
#define SSVE_TRACE0(msg)
#define SSVE_TRACE_PRETTY_FUNCTION
#endif

#endif

//
//  SSEDefs.h
//  Environment
//
//  Created by yossi mozgerashvily on 10/20/15.
//  Copyright © 2015 Supersonic. All rights reserved.
//

#ifdef DEBUG
#define SSE_ASSERT(condition) NSAssert(condition, nil)
#define SSE_FAIL(_reason, ...) NSAssert(false, _reason, ##__VA_ARGS__)
#define SSE_FAIL_C(_reason, ...) NSCAssert(false, _reason, ##__VA_ARGS__)
#else
#define SSE_ASSERT(condition)
#define SSE_FAIL(_reason, ...)
#define SSE_FAIL_C(_reason, ...)
#endif

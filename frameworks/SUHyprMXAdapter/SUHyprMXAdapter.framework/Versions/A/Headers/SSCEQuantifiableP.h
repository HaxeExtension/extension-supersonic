//
//  SSCEQuantifiableP.h
//  CacheEngine
//
//  Created by yossi mozgerashvily on 8/18/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#ifndef CacheEngine_SSCEQuantifiableP_h
#define CacheEngine_SSCEQuantifiableP_h

#import "SSCEDefs.h"

@protocol SSCEQuantifiableP <NSObject>

@required

@property (readonly) SSCESize maxSize;
@property (readonly) SSCESize currentSize;

@end

#endif

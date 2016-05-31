//
//  SSNMPrioritizable.h
//  NetworkManager
//
//  Created by yossi mozgerashvily on 7/20/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#ifndef NetworkManager_SSNMPrioritizable_h
#define NetworkManager_SSNMPrioritizable_h

#import "SSNMDefs.h"

@protocol SSNMPrioritizable

@required
@property SSNMPriority priority;

@end

#endif
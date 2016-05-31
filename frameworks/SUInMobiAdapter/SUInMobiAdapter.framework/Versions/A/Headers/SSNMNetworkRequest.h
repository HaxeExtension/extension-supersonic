//
//  SSNMNetworkRequest.h
//  NetworkManager
//
//  Created by yossi mozgerashvily on 7/14/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#ifndef NetworkManager_SSNMNetworkRequest_h
#define NetworkManager_SSNMNetworkRequest_h

#import "SSNMPrioritizable.h"

@protocol SSNMNetworkRequest <SSNMPrioritizable>
@required
- (void) run;
@property SSNMPriority priority;
@end


#endif

//
//  SSNMRequestContainer.h
//  NetworkManager
//
//  Created by yossi mozgerashvily on 8/2/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#ifndef NetworkManager_SSNMRequestContainer_h
#define NetworkManager_SSNMRequestContainer_h

@protocol SSNMNetworkRequest;

@protocol SSNMRequestContainer

@required
- (BOOL) addRequest:(id<SSNMNetworkRequest>)request;
- (BOOL) addRequestByForce:(id<SSNMNetworkRequest>)request;
- (BOOL) removeRequest:(id<SSNMNetworkRequest>)request;
@end

#endif

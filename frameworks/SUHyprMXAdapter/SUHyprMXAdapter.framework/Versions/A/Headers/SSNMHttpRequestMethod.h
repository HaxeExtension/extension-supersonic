//
//  SSNMHttpRequestMethod.h
//  NetworkManager
//
//  Created by yossi mozgerashvily on 7/20/15.
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#ifndef NetworkManager_SSNMHttpRequestMethod_h
#define NetworkManager_SSNMHttpRequestMethod_h

typedef NS_ENUM(NSInteger, SSNMHttpRequestMethod) {
    SSNMHttpRequestMethodUnknown = 0,
    SSNMHttpRequestMethodGet,
    SSNMHttpRequestMethodPost,
    SSNMHttpRequestMethodPut,
    SSNMHttpRequestMethodDelete,
    SSNMHttpRequestMethodLast
};

NSString* SSNMHttpRequestMethodToStr(SSNMHttpRequestMethod method);

#endif

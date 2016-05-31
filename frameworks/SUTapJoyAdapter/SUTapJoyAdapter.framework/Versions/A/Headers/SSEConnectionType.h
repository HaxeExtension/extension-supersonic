//
//  SSEConnectionType.h
//  Environment
//
//  Created by yossi mozgerashvily on 10/20/15.
//  Copyright © 2015 Supersonic. All rights reserved.
//

#ifndef SSEConnectionType_h
#define SSEConnectionType_h

typedef NS_ENUM(NSInteger, SSEConnectionType) {
    SSEConnectionTypeUnknown,
    SSEConnectionTypeNotReachable,
    SSEConnectionTypeWifi,
    SSEConnectionTypeWWAN,
    SSEConnectionTypeLast
};

NSString* SSEConnectionTypeToString(SSEConnectionType orientation);

#endif /* SSEConnectionType_h */

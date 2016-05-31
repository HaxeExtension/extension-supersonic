//
//  SSWVBridgeP.h
//  WebView
//
//  Created by Mira Weiss on 06/03/2016.
//  Copyright © 2016 Mira Weiss. All rights reserved.
//

#ifndef SSWVBridgeP_h
#define SSWVBridgeP_h

@class SSWVMessage;

@protocol SSWVBridgeP

- (void) sendMessageToWebView:(SSWVMessage*)message;
- (void) sendMessageToJSInterface:(SSWVMessage*)message;
- (void) postMessage:(NSString*)stringMessageFromJavaScript;

@end


#endif /* SSWVBridgeP_h */

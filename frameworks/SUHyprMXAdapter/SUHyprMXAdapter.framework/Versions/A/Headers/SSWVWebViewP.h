//
//  SSWVWebViewP.h
//  WebView
//
//  Created by Mira Weiss on 06/03/2016.
//  Copyright © 2016 Mira Weiss. All rights reserved.
//

#ifndef SSWVWebViewP_h
#define SSWVWebViewP_h

#import <Foundation/Foundation.h>
@class UIView;

@protocol SSWVWebViewP;

@protocol SSWVWebViewDelegate

- (void) loadSuccessfully:(id<SSWVWebViewP>)webView;
- (void) failedToLoadWithError:(NSError*)error webView:(id<SSWVWebViewP>)webView;

@end

@protocol SSWVWebViewP

@property (weak) id<SSWVWebViewDelegate> webViewDelegate;

- (UIView *)view;
- (void) loadRequest:(NSURLRequest*)request;
- (void) stopLoading;
- (void) evaluateJavaScript:(NSString*)javaScript;

- (Class) webViewClass;

@end


#endif /* SSWVWebViewP_h */

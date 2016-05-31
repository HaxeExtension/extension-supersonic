//
// Created by Moat on 12/28/14.
// Copyright © 2016 Moat. All rights reserved.
//
// This class provides functionality for tracking WebView based ads.

#import <UIKit/UIKit.h>
#import "MBRXMoatObject.h"

@interface MBRXMoatBootstrap : MBRXMoatObject

// Use this to track web-based ads that implement the Moat JS tag. This method accepts a UIWebView or a component
// housing one. "Opaque" containers, such as Google's DFPBannerView, can be used. The return value indicates whether
// Moat was able to initialize tracking.
+(bool)injectDelegateWrapper:(UIView *)webViewOrWebViewContainer;

@end

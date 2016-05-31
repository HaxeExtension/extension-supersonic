//
// Created by Moat on 2/24/15.
// Copyright © 2016 Moat. All rights reserved.
//
// This class is used to track native ads -- ads that are rendered using native UI elements rather than a WebView.
// The class creates an internally managed WebView instance, loads our JavaScript tag into it, and then dispatches
// viewability-related signals (pertaining to the native ad it is tracking) into that WebView.

#import <UIKit/UIKit.h>
#import "MBRXMoatBootstrap.h"

@interface MBRXMoatTracker : MBRXMoatObject

// Use this to track ads that can't run JavaScript. This method accepts any UIView. Web-based ads, including "opaque"
// web containers (Google's DFPBannerView, etc.) are best tracked using MoatBootstrap's injectDelegateWrapper instead.
+ (MBRXMoatTracker *)trackerWithAdView:(UIView *)adView partnerCode:(NSString *)partnerCode;

// Use this to track hybrid, two-view ads that consist both of a native UIView and a web-based component.
+ (bool) trackAdView:(UIView *)adView withWebComponent:(UIView *)webViewOrWebViewContainer;

- (void) trackAd:(NSDictionary *)adIds;

@end

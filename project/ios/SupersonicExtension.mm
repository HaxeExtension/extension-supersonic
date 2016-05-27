#include <SupersonicExtension.h>
//#import <UIKit/UIKit.h>
#import <AdSupport/ASIdentifierManager.h>
#import "Supersonic/Supersonic.h"
#include "RVDelegate.mm"

extern "C" void reportSupersonicEvent (const char* event);

//// REWARDED VIDEO
///////////////////////////////////////////////////////////////////////////
static const char* RewardedVideoInitSuccess = "onRewardedVideoInitSuccess";
static const char* RewardedVideoInitFail = "onRewardedVideoInitFail";
static const char* RewardedVideoShowFail = "onRewardedVideoShowFail";
static const char* RewardedVideoAdOpened = "onRewardedVideoAdOpened";
static const char* RewardedVideoAdClosed = "onRewardedVideoAdClosed";
static const char* VideoAvailabilityChanged = "onVideoAvailabilityChanged";
static const char* VideoStart = "onVideoStart";
static const char* VideoEnd = "onVideoEnd";
static const char* RewardedVideoAdRewarded = "onRewardedVideoAdRewarded";

//// INTERSTITIAL
///////////////////////////////////////////////////////////////////////////
static const char* InterstitialInitSuccess = "onInterstitialInitSuccess";
static const char* InterstitialInitFailed = "onInterstitialInitFailed";
static const char* InterstitialReady = "onInterstitialReady";
static const char* InterstitialLoadFailed = "onInterstitialLoadFailed";
static const char* InterstitialShowSuccess = "onInterstitialShowSuccess";
static const char* InterstitialShowFailed = "onInterstitialShowFailed";
static const char* InterstitialClick = "onInterstitialClick";
static const char* InterstitialClose = "onInterstitialClose";
static const char* InterstitialOpen = "onInterstitialOpen";

namespace SupersonicExtension {
	
	UIViewController *root;
    
	void init(const char *__app_key){
		root = [[[UIApplication sharedApplication] keyWindow] rootViewController];
        NSString* appKey = [NSString stringWithUTF8String:__app_key];
        NSString* adId = @"TEST";
        if([[ASIdentifierManager sharedManager] isAdvertisingTrackingEnabled]) {
            adId = [[[ASIdentifierManager sharedManager] advertisingIdentifier] UUIDString];
        }

        [Supersonic sharedInstance];
        [[Supersonic sharedInstance] setRVDelegate:[RVDelegate alloc]];
        [[Supersonic sharedInstance] initRVWithAppKey:appKey withUserId:adId];
    }
    
    bool showRewardedVideo(const char *placementName){
        [[Supersonic sharedInstance] showRV];
        return true;
    }

    bool showInterstitial(const char *placementName){
/*
        if(interstitialListener==nil) return false;
        if(![interstitialListener isReady]) return false;
        [interstitialListener show];
        interstitialListener = [[InterstitialListener alloc] initWithID:interstitialID];
*/
        return true;
    }

}

#include <SupersonicExtension.h>
extern "C" void reportSupersonicEvent (const char* event, const char *data);

#import <UIKit/UIKit.h>
#import <AdSupport/ASIdentifierManager.h>
#import "Supersonic/Supersonic.h"
#include "RVDelegate.mm"
#include "ISDelegate.mm"


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

NSString *placement2JSON(SupersonicPlacementInfo * pInfo){
    if(pInfo == NULL) return NULL;
    return [NSString stringWithFormat:@"{\"placementName\":\"%@\",\"rewardName\":\"%@\",\"rewardAmount\":%@}", [pInfo placementName], [pInfo rewardName], [pInfo rewardAmount]];
}        


namespace SupersonicExtension {
	
	UIViewController *root;
    
	void init(const char *__app_key){
		root = [[[UIApplication sharedApplication] keyWindow] rootViewController];
        NSString* appKey = [NSString stringWithUTF8String:__app_key];
        NSString* adId = @"TEST";
        if([[ASIdentifierManager sharedManager] isAdvertisingTrackingEnabled]) {
            adId = [[[ASIdentifierManager sharedManager] advertisingIdentifier] UUIDString];
        }

        [[Supersonic sharedInstance] setRVDelegate:[RVDelegate alloc]];
        [[Supersonic sharedInstance] initRVWithAppKey:appKey withUserId:adId];

        [[Supersonic sharedInstance] setISDelegate:[ISDelegate alloc]];
        [[Supersonic sharedInstance] initISWithAppKey:appKey withUserId:adId];
        
        NSLog(@"SupersonicExtension init complete");
    }
    
    bool showRewardedVideo(const char *placementName){
        NSLog(@"SupersonicExtension showRewardedVideo");
        NSString *pName = [NSString stringWithUTF8String:placementName];
        [[Supersonic sharedInstance] showRVWithPlacementName:pName];
        return true;
    }

    bool showInterstitial(const char *placementName){
        NSLog(@"SupersonicExtension showInterstitial");
        NSString *pName = [NSString stringWithUTF8String:placementName];
        [[Supersonic sharedInstance] showISWithViewController:root placementName:pName];
        return true;
    }

    void cacheInterstitial(){
        NSLog(@"SupersonicExtension cacheInterstitial");
        [[Supersonic sharedInstance] loadIS];
    }

    bool isInterstitialReady(){
        NSLog(@"SupersonicExtension isInterstitialReady");
        return [[Supersonic sharedInstance] isInterstitialAvailable];
    }

    bool isRewardedVideoAvailable(){
        NSLog(@"SupersonicExtension isRewardedVideoAvailable");
        return [[Supersonic sharedInstance] isAdAvailable];
    }
    
    const char *getRewardedVideoPlacementInfo(const char *placementName){
        NSLog(@"SupersonicExtension getRewardedVideoPlacementInfo");
        NSString *pName = [NSString stringWithUTF8String:placementName];
        SupersonicPlacementInfo * pInfo = [[Supersonic sharedInstance] getRVPlacementInfo:pName];
        NSString *res = placement2JSON(pInfo);
        if(res == NULL) return NULL;
        return [res UTF8String];
    }

}

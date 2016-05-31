
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


@interface RVDelegate : NSObject <SupersonicRVDelegate>
@end
@implementation RVDelegate
/**
* Invoked when initialization of RewardedVideo ad unit has finished successfully
*/
- (void)supersonicRVInitSuccess{
	reportSupersonicEvent(RewardedVideoInitSuccess, NULL);
}
/**
* Invoked when RewardedVideo initialization process has failed. NSError
* contains the reason for the failure.
*/
- (void)supersonicRVInitFailedWithError:(NSError *)error{
	reportSupersonicEvent(RewardedVideoInitFail,"");
}
/**
* Invoked when there is a change in the ad availability status.
* @param - hasAvailableAds - value will change to YES when rewarded videos are available. * You can then show the video by calling showRV(). Value will change to NO when no videos are available.
*/
- (void)supersonicRVAdAvailabilityChanged:(BOOL)hasAvailableAds{
	reportSupersonicEvent(VideoAvailabilityChanged,hasAvailableAds?"true":"false");
}
/**
* Invoked when the user completed the video and should be rewarded.
* If using server-to-server callbacks you may ignore these events and wait
* for the callback from the Supersonic server.
* @param - placementInfo - SupersonicPlacementInfo - an object contains the placement's reward name and amount
*/
- (void)supersonicRVAdRewarded:(SupersonicPlacementInfo*)placementInfo{
	NSString *data = placement2JSON(placementInfo);
	reportSupersonicEvent(RewardedVideoAdRewarded, [data UTF8String]);
}
/**
* Invoked when an Ad failed to display.
* @param - error - NSError which contains the reason for the
* failure. The error contains error.code and error.message.
*/
- (void)supersonicRVAdFailedWithError:(NSError *)error{
	reportSupersonicEvent(RewardedVideoShowFail, "");
}
/**
* Invoked when the RewardedVideo ad view has opened.
*/
- (void)supersonicRVAdOpened{
	reportSupersonicEvent(RewardedVideoAdOpened, NULL);
}
/**
* Invoked when the user is about to return to the application after closing the
* RewardedVideo ad.
*/
- (void)supersonicRVAdClosed{
	reportSupersonicEvent(RewardedVideoAdClosed, NULL);
}
/**
* Note: the events below are not available for all supported Rewarded Video
* Ad Networks.
* Check which events are available per Ad Network you choose to include in
* your build.
* We recommend only using events which register to ALL Ad Networks you
* include in your build.
*/
/**
* Available for: AdColony, Vungle, AppLovin, UnityAds
* Invoked when the video ad starts playing.
*/
- (void)supersonicRVAdStarted{
	reportSupersonicEvent(VideoStart, NULL);
}
/**
* Available for: AdColony, Flurry, Vungle, AppLovin, UnityAds
* Invoked when the video ad finishes playing.
*/
- (void)supersonicRVAdEnded{
	reportSupersonicEvent(VideoEnd, NULL);
}
@end
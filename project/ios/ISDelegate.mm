
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


@interface ISDelegate : NSObject <SupersonicISDelegate>
@end
@implementation ISDelegate
/**
* Called when initiation process of the Interstitial products has finished successfully.
**/
- (void)supersonicISInitSuccess{
	reportSupersonicEvent(InterstitialInitSuccess, NULL);
}
/**
* Called each time an initiation stage fails, or if you have a problem in
* the integration
* You can learn about the reason by examining the 'error' value
**/
- (void)supersonicISInitFailedWithError:(NSError *)error{
	reportSupersonicEvent(InterstitialInitFailed, "");
}
/*
Invoked when Interstitial Ad is ready to be shown after load function was called.
*/
- (void) supersonicISReady{
	reportSupersonicEvent(InterstitialReady, NULL);
}
/**
* Called each time the Interstitial window has opened successfully.
**/
- (void)supersonicISShowSuccess{ 
	reportSupersonicEvent(InterstitialShowSuccess, NULL);
}
/**
* Called if showing the Interstitial for the user has failed.
* You can learn about the reason by examining the ‘error’ value
**/
- (void)supersonicISShowFailWithError:(NSError *)error{ 
	reportSupersonicEvent(InterstitialShowFailed, "");
}
/**
* Called each time the end user has clicked on the Interstitial ad.
**/
- (void)supersonicISAdClicked{
	reportSupersonicEvent(InterstitialClick, NULL);
 }
/**
* Called each time the Interstitial window is about to close
**/
- (void)supersonicISAdClosed{
	reportSupersonicEvent(InterstitialClose, NULL);
 }
/**
Called each time the Interstitial window is about to open
**/
- (void)supersonicISAdOpened{
	reportSupersonicEvent(InterstitialOpen, NULL);
}
/**
Invoked when there is no Interstitial Ad available after calling load function.
*/
- (void)supersonicISFailed{
	reportSupersonicEvent(InterstitialLoadFailed, NULL);
}
@end
@interface ISDelegate : NSObject <SupersonicISDelegate>
@end
@implementation ISDelegate
/**
* Called when initiation process of the Interstitial products has finished successfully.
**/
- (void)supersonicISInitSuccess{
	NSLog(@"supersonicISInitSuccess");
}
/**
* Called each time an initiation stage fails, or if you have a problem in
* the integration
* You can learn about the reason by examining the 'error' value
**/
- (void)supersonicISInitFailedWithError:(NSError *)error{
	NSLog(@"supersonicISInitFailedWithError");
}
/*
Invoked when Interstitial Ad is ready to be shown after load function was called.
*/
- (void) supersonicISReady{
	NSLog(@"supersonicISReady");
}
/**
* Called each time the Interstitial window has opened successfully.
**/
- (void)supersonicISShowSuccess{ 
	NSLog(@"supersonicISShowSuccess");
}
/**
* Called if showing the Interstitial for the user has failed.
* You can learn about the reason by examining the ‘error’ value
**/
- (void)supersonicISShowFailWithError:(NSError *)error{ 
	NSLog(@"supersonicISShowFailWithError");
}
/**
* Called each time the end user has clicked on the Interstitial ad.
**/
- (void)supersonicISAdClicked{
	NSLog(@"supersonicISAdClicked");
 }
/**
* Called each time the Interstitial window is about to close
**/
- (void)supersonicISAdClosed{
	NSLog(@"supersonicISAdClosed");
 }
/**
Called each time the Interstitial window is about to open
**/
- (void)supersonicISAdOpened{
	NSLog(@"supersonicISAdOpened");
}
/**
Invoked when there is no Interstitial Ad available after calling load function.
*/
- (void)supersonicISFailed{
	NSLog(@"supersonicISFailed");
}
@end
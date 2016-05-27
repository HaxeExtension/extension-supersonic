#ifndef SUPERSONICEXTENSION_H
#define SUPERSONICEXTENSION_H

namespace SupersonicExtension {
	
	void init(const char *__app_key);
	void cacheInterstitial();
	bool isInterstitialReady();
	bool showInterstitial(const char *placementName);

	bool showRewardedVideo(const char *placementName);
	bool isRewardedVideoAvailable();
	char *getRewardedVideoPlacementInfo(const char *placementName);
	
}

#endif
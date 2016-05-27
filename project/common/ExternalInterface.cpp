#ifndef STATIC_LINK
#define IMPLEMENT_API
#endif

#if defined(HX_WINDOWS) || defined(HX_MACOS) || defined(HX_LINUX)
#define NEKO_COMPATIBLE
#endif


#include <hx/CFFI.h>
#include "SupersonicExtension.h"

using namespace SupersonicExtension;

AutoGCRoot* eventHandle = NULL;

static value supersonicextension_init(value app_key, value onEvent){
	eventHandle = new AutoGCRoot(onEvent);
	init(val_string(app_key));
	return alloc_null();
}
DEFINE_PRIM(supersonicextension_init,2);

extern "C" void supersonicextension_main () {	
	val_int(0); // Fix Neko init
	
}
DEFINE_ENTRY_POINT (supersonicextension_main);


static value supersonicextension_interstitial_show(value placementName){
	return alloc_bool(showInterstitial(val_string(placementName)));
}
DEFINE_PRIM(supersonicextension_interstitial_show,1);

static value supersonicextension_rewardedvideo_show(value placementName){
	return alloc_bool(showRewardedVideo(val_string(placementName)));
}
DEFINE_PRIM(supersonicextension_rewardedvideo_show,1);

static value supersonicextension_is_rewarded_video_available(){
	return alloc_bool(isRewardedVideoAvailable());
}
DEFINE_PRIM(supersonicextension_is_rewarded_video_available,0);

static value supersonicextension_get_rewarded_video_placement_info(value placementName){
	return alloc_string(getRewardedVideoPlacementInfo(val_string(placementName)));
}
DEFINE_PRIM(supersonicextension_get_rewarded_video_placement_info,1);

static value supersonicextension_cache_interstitial(){
	cacheInterstitial();
	return alloc_null();
}
DEFINE_PRIM(supersonicextension_cache_interstitial,0);

static value supersonicextension_is_interstitial_ready(){
	return alloc_bool(isInterstitialReady());
}
DEFINE_PRIM(supersonicextension_is_interstitial_ready,0);

extern "C" int SupersonicExtension_register_prims () { return 0; }


extern "C" void reportSupersonicEvent(const char* event)
{
	if(eventHandle == NULL) return;
//    value o = alloc_empty_object();
//    alloc_field(o,val_id("event"),alloc_string(event));
    val_call1(eventHandle->get(), alloc_string(event));
}
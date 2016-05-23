/* Copyright (c) 2016 SempaiGames Games
 * http://www.sempaigames.com
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:

 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

package org.haxe.extension.supersonic;

import android.os.Bundle;
import android.util.Log;
import android.view.ViewGroup;
import android.widget.RelativeLayout;
import com.google.android.gms.ads.identifier.AdvertisingIdClient;
import java.io.IOException;
import org.haxe.extension.Extension;
import org.haxe.lime.HaxeObject;

//Import the Supersonic Class
import com.supersonic.mediationsdk.logger.SupersonicError;
import com.supersonic.mediationsdk.model.Placement;
import com.supersonic.mediationsdk.sdk.RewardedVideoListener;
import com.supersonic.mediationsdk.sdk.Supersonic;
import com.supersonic.mediationsdk.sdk.SupersonicFactory;


public class SupersonicExtension extends Extension {

	protected static HaxeObject _callback = null;
	private static Supersonic mMediationAgent;
	private static final String TAG = "SupersonicExtension";

	//// GENERIC
	///////////////////////////////////////////////////////////////////////////

	public static void init(String appKey, HaxeObject callback){
		if(_callback!=null) return;
		Log.i(TAG,"init called!");
		_callback = callback;

		//Get the mediation publisher instance 
		mMediationAgent = SupersonicFactory.getInstance();

		//Set the Rewarded Video Listener
		mMediationAgent.setRewardedVideoListener(new MyRewardedVideoListener());
		//Init Rewarded Video
		mMediationAgent.initRewardedVideo(mainActivity, appKey, getGAID());

		//Set the Interstitial Listener
		mMediationAgent.setInterstitialListener(new MyInterstitialListener());
		//Init Interstitial
		mMediationAgent.initInterstitial(mainActivity, appKey, getGAID());

		try{
			mMediationAgent.shouldTrackNetworkState(true);
		}catch(Exception e){
			Log.i(TAG,"Could not enable TrackNetworkState. Not to worry :/");
		}
	}

	public static void reportEvent(String type, String data){
		if(_callback==null) {
			Log.w(TAG,"Can't send event "+type+" because _callback object is null!");
			return;
		}
		_callback.call2("onEvent",type,data);
	}

	public static String placement2JSON(Placement placement){
		if(placement == null) return null;
		return "{\"rewardName\":\""+placement.getRewardName()+"\",\"rewardAmount\":"+placement.getRewardAmount()+"}";
	}

	//// REWARDED VIDEO
	///////////////////////////////////////////////////////////////////////////

	public static boolean isRewardedVideoAvailable() {
		return mMediationAgent.isRewardedVideoAvailable();
	}

	public static void showRewardedVideo(String placementName){
		mMediationAgent.showRewardedVideo(placementName);	
	}

	public static String getRewardedVideoPlacementInfo(String placementName){
		Placement placement = mMediationAgent.getRewardedVideoPlacementInfo(placementName);
		return placement2JSON(placement);
	}

	//// INTETRSTITIALS
	///////////////////////////////////////////////////////////////////////////

	public static void cacheInterstitial() {
		mMediationAgent.loadInterstitial();
	}

	public static boolean isInterstitialReady() {
		return mMediationAgent.isInterstitialReady();
	}
  
	public static void showInterstitial(String placementName) {
		mMediationAgent.showInterstitial(placementName);
	}

	//// APP LIFECICLE
	///////////////////////////////////////////////////////////////////////////

	@Override
	public void onResume() {
		super.onResume();
		if (mMediationAgent != null) {
			mMediationAgent.onResume(mainActivity);
		}
	}

	@Override
	public void onPause() {
		super.onPause();
		if (mMediationAgent != null) {
			mMediationAgent.onPause(mainActivity);
		}
	}

	/*
	@Override
	public void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
	}

	@Override
	public void onDestroy() {
		super.onDestroy();
	}
	*/

	public static String getGAID() {
		try {
			return AdvertisingIdClient.getAdvertisingIdInfo(mainActivity.getApplicationContext()).getId();
		} catch (Exception e) {
			Log.i(TAG,"Could not get GAID... using another way!");
			return "TEST";
		}
	}

}
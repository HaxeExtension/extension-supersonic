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

	public static void init(String appKey, HaxeObject callback){
		if(_callback!=null) return;
		Log.i(TAG,"init called!");
		_callback = callback;

		RewardedVideoListener mRewardedVideoListener = new RewardedVideoListener() {
			
			//Invoked when initialization of RewardedVideo has finished successfully.
			@Override
			public void onRewardedVideoInitSuccess() {
			}

			//Invoked when RewardedVideo initialization process has failed. 
			//SupersonicError contains the reason for the failure. 
			@Override
			public void onRewardedVideoInitFail(SupersonicError se) {
				//Retrieve details from a SupersonicError object.
				int errorCode =  se.getErrorCode();
				String errorMessage = se.getErrorMessage();
				if (errorCode == SupersonicError.ERROR_CODE_GENERIC){
					//Write a Handler for specific error's.
				}
			}

			//Invoked when RewardedVideo call to show a rewarded video has failed
			//SupersonicError contains the reason for the failure. 
			@Override
			public void onRewardedVideoShowFail(SupersonicError se) {
			}

			//Invoked when the RewardedVideo ad view has opened.
			//Your Activity will lose focus. Please avoid performing heavy 
			//tasks till the video ad will be closed.
			@Override
			public void onRewardedVideoAdOpened() {
			}  
			
			//Invoked when the RewardedVideo ad view is about to be closed.
			//Your activity will now regain its focus.
			@Override
			public void onRewardedVideoAdClosed() {
			}
			
			//Invoked when there is a change in the ad availability status.
			//@param - available - value will change to true when rewarded videos are available. 
			//You can then show the video by calling showRewardedVideo().
			//Value will change to false when no videos are available.
			@Override
			public void onVideoAvailabilityChanged(boolean available) {
				//Change the in-app 'Traffic Driver' state according to availability.
			}
			
			//Invoked when the video ad starts playing.
			@Override
			public void onVideoStart() {
			}

			//Invoked when the video ad finishes playing.
			@Override
			public void onVideoEnd() {
			}

			//Invoked when the user completed the video and should be rewarded. 
			//If using server-to-server callbacks you may ignore this events and wait for 
			//the callback from the Supersonic server.
			//@param - placement - the Placement the user completed a video from.
			@Override
			public void onRewardedVideoAdRewarded(Placement placement) {
				//TODO - here you can reward the user according to the given amount.
				String rewardName = placement.getRewardName();
				int rewardAmount = placement.getRewardAmount();
			}
		};

		//Get the mediation publisher instance 
		mMediationAgent = SupersonicFactory.getInstance();
		//Set the Rewarded Video Listener
		mMediationAgent.setRewardedVideoListener(mRewardedVideoListener);
		//Init Rewarded Video
		mMediationAgent.initRewardedVideo(mainActivity, appKey, getGAID());
		//
		mMediationAgent.shouldTrackNetworkState(true);
	}

	public static void showAd(final int size, final int halign, final int valign){
		
	}
	
	public static void hideAd() {
		Extension.mainActivity.runOnUiThread(new Runnable()
		{
			public void run()
			{
				
			}
		});
	}
	
	public static void cacheInterstitial() {
		Extension.mainActivity.runOnUiThread(new Runnable()
		{
			public void run()
			{
				
			}
		});
	}
  
	public static boolean showInterstitial() {
		Extension.mainActivity.runOnUiThread(new Runnable()
		{
			public void run()
			{
				
			}
		});
		return true;
	}

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
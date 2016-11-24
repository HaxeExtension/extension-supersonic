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

//Import the Supersonic Class
import com.supersonic.mediationsdk.logger.SupersonicError;
import com.supersonic.mediationsdk.model.Placement;
import com.supersonic.mediationsdk.sdk.RewardedVideoListener;
import com.supersonic.mediationsdk.sdk.Supersonic;
import com.supersonic.mediationsdk.sdk.SupersonicFactory;

public class MyRewardedVideoListener implements RewardedVideoListener {
	
	//Invoked when initialization of RewardedVideo has finished successfully.
	@Override
	public void onRewardedVideoInitSuccess() {
		SupersonicExtension.reportEvent("onRewardedVideoInitSuccess",null);
	}

	//Invoked when RewardedVideo initialization process has failed. 
	//error contains the reason for the failure. 
	@Override
	public void onRewardedVideoInitFail(SupersonicError error) {
		SupersonicExtension.reportEvent("onRewardedVideoInitFail","CODE: "+error.getErrorCode()+": "+error.getErrorMessage());		
	}

	//Invoked when RewardedVideo call to show a rewarded video has failed
	//error contains the reason for the failure. 
	@Override
	public void onRewardedVideoShowFail(SupersonicError error) {
		SupersonicExtension.reportEvent("onRewardedVideoShowFail","CODE: "+error.getErrorCode()+": "+error.getErrorMessage());		
	}

	//Invoked when the RewardedVideo ad view has opened.
	//Your Activity will lose focus. Please avoid performing heavy 
	//tasks till the video ad will be closed.
	@Override
	public void onRewardedVideoAdOpened() {
		SupersonicExtension.reportEvent("onRewardedVideoAdOpened",null);
	}
	
	//Invoked when the RewardedVideo ad view is about to be closed.
	//Your activity will now regain its focus.
	@Override
	public void onRewardedVideoAdClosed() {
		SupersonicExtension.reportEvent("onRewardedVideoAdClosed",null);
	}
	
	//Invoked when there is a change in the ad availability status.
	//@param - available - value will change to true when rewarded videos are available. 
	//You can then show the video by calling showRewardedVideo().
	//Value will change to false when no videos are available.
	@Override
	public void onVideoAvailabilityChanged(boolean available) {
		//Change the in-app "Traffic Driver" state according to availability.
		SupersonicExtension.reportEvent("onVideoAvailabilityChanged",available?"true":"false");
	}
	
	//Invoked when the video ad starts playing.
	@Override
	public void onVideoStart() {
		SupersonicExtension.reportEvent("onVideoStart",null);
	}

	//Invoked when the video ad finishes playing.
	@Override
	public void onVideoEnd() {
		SupersonicExtension.reportEvent("onVideoEnd",null);
	}

	//Invoked when the user completed the video and should be rewarded. 
	//If using server-to-server callbacks you may ignore this events and wait for 
	//the callback from the Supersonic server.
	//@param - placement - the Placement the user completed a video from.
	@Override
	public void onRewardedVideoAdRewarded(Placement placement) {
		SupersonicExtension.reportEvent("onRewardedVideoAdRewarded",SupersonicExtension.placement2JSON(placement));
	}
};

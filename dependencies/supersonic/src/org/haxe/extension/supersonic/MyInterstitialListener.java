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
import com.supersonic.mediationsdk.sdk.InterstitialListener;
import com.supersonic.mediationsdk.sdk.Supersonic;
import com.supersonic.mediationsdk.sdk.SupersonicFactory;

public class MyInterstitialListener implements InterstitialListener {

	/**
	 * Invoked when Interstitial initialization process completes successfully.
	 */
	public void onInterstitialInitSuccess(){
		SupersonicExtension.reportEvent("onInterstitialInitSuccess",null);
	}

	/**
	 * Invoked when Interstitial initialization process is failed.
	 * @param error - An Object which represents the reason of initialization failure.
	 */
	public void onInterstitialInitFailed(SupersonicError error){
		SupersonicExtension.reportEvent("onInterstitialInitFailed","CODE: "+error.getErrorCode()+": "+error.getErrorMessage());		
	}

	/**
	* Invoked when Interstitial Ad is ready to be shown after load function was called.
	*/
	public void onInterstitialReady(){
		SupersonicExtension.reportEvent("onInterstitialReady",null);
	}

	/**
	* invoked when there is no Interstitial Ad available after calling load function.
	*/
	public void onInterstitialLoadFailed(SupersonicError error){
		SupersonicExtension.reportEvent("onInterstitialLoadFailed","CODE: "+error.getErrorCode()+": "+error.getErrorMessage());		
	}

	/*
	 * Invoked when the ad was opened and shown successfully.
	 */
	public void onInterstitialShowSuccess(){
		SupersonicExtension.reportEvent("onInterstitialInitSuccess",null);
	}

	/**
	 * Invoked when Interstitial ad failed to show.
	 * @param error - An object which represents the reason of showInterstitial failure.
	 */
	public void onInterstitialShowFailed(SupersonicError error){
		SupersonicExtension.reportEvent("onInterstitialShowFailed","CODE: "+error.getErrorCode()+": "+error.getErrorMessage());		
	}

	/*
	 * Invoked when the end user clicked on the interstitial ad.
	 */
	public void onInterstitialClick(){
		SupersonicExtension.reportEvent("onInterstitialClick",null);
	}

	/*
	 * Invoked when the ad is closed and the user is about to return to the application.
	 */
	public void onInterstitialClose(){
		SupersonicExtension.reportEvent("onInterstitialClose",null);
	}

	/**
	* Invoked when the Interstitial Ad Unit is opened
	*/
	public void onInterstitialOpen(){
		SupersonicExtension.reportEvent("onInterstitialOpen",null);
	}

};


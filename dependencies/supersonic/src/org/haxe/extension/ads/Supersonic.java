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

package org.haxe.extension.ads.Supersonic;

import android.util.Log;
import android.view.ViewGroup;
import android.widget.RelativeLayout;
import org.haxe.extension.Extension;
import org.haxe.lime.HaxeObject;

//Import the Supersonic Class
import com.supersonic.mediationsdk.sdk.Supersonic;
import com.supersonic.mediationsdk.sdk.SupersonicFactory;

public class Supersonic extends Extension {

	protected static HaxeObject _callback = null;
	private Supersonic mMediationAgent;

	public static void init(String appID, HaxeObject callback){
		_callback = callback;
		//Declare the Supersonic Mediation Agent
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
		if(_interstitial == null) return false;
		Extension.mainActivity.runOnUiThread(new Runnable()
		{
			public void run()
			{
				if(_interstitial != null)
					_interstitial.showAd();
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
 
	@Override
	public void onCreate() {
		super.onCreate();
		mMediationAgent = SupersonicFactory.getInstance();
	}

	@Override
	public void onDestroy() {
		if(_adView != null) _adView.destroy();
		super.onDestroy();
	}
}
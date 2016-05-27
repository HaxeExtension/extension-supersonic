/* Copyright (c) 2016 Sempai Games
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

package extension.supersonic;

import openfl.events.EventDispatcher;
#if android
import openfl.utils.JNI;
#end

class Supersonic extends EventDispatcher{

	//// REWARDED VIDEO
	///////////////////////////////////////////////////////////////////////////

	public static var isRewardedVideoAvailable(default,null):Void->Bool = function() return false;
	public static var showRewardedVideo(default,null):String->Void = function(placementName:String) return;
	private static var _getRewardedVideoPlacementInfo(default,null):String->String = function(placementName:String) return null;

	//// INTERSTITIAL
	///////////////////////////////////////////////////////////////////////////

	public static var cacheInterstitial(default,null):Void->Void = function() return;
	public static var isInterstitialReady(default,null):Void->Bool = function() return false;
	public static var showInterstitial(default,null):String->Void = function(placementName:String) return;

	//// INITIALIZATION
	///////////////////////////////////////////////////////////////////////////

	private static inline var SUPERSONIC_PATH:String = "org.haxe.extension.supersonic.SupersonicExtension";
	private static var instance:Supersonic = null;

	public static function init(appKey:String) {
		if(instance!=null) return;
		instance = new Supersonic();

		#if android
			try{
				var _init:String->Supersonic->Void = openfl.utils.JNI.createStaticMethod(SUPERSONIC_PATH, "init", "(Ljava/lang/String;Lorg/haxe/lime/HaxeObject;)V");

				isRewardedVideoAvailable = openfl.utils.JNI.createStaticMethod(SUPERSONIC_PATH, "isRewardedVideoAvailable", "()Z");
				showRewardedVideo = openfl.utils.JNI.createStaticMethod(SUPERSONIC_PATH, "showRewardedVideo", "(Ljava/lang/String;)V");
				_getRewardedVideoPlacementInfo = openfl.utils.JNI.createStaticMethod(SUPERSONIC_PATH, "getRewardedVideoPlacementInfo", "(Ljava/lang/String;)Ljava/lang/String;");

				cacheInterstitial = openfl.utils.JNI.createStaticMethod(SUPERSONIC_PATH, "cacheInterstitial", "()V");
				isInterstitialReady = openfl.utils.JNI.createStaticMethod(SUPERSONIC_PATH, "isInterstitialReady", "()Z");
				showInterstitial = openfl.utils.JNI.createStaticMethod(SUPERSONIC_PATH, "showInterstitial", "(Ljava/lang/String;)V");

				_init(appKey, instance);
			}catch(e:Dynamic){
				trace("Android INIT Exception: "+e);
			}
		#elseif ios
			try{
				var _init:String->Dynamic->Void = cpp.Lib.load("SupersonicExtension","supersonicextension_init",2);

				showRewardedVideo = cpp.Lib.load("SupersonicExtension","supersonicextension_rewardedvideo_show",1);

				showInterstitial = cpp.Lib.load("SupersonicExtension","supersonicextension_interstitial_show",1);

				_init(appKey, instance._onEvent);
			}catch(e:Dynamic){
				trace("iOS INIT Exception: "+e);
			}
		#end
	}

	//// INDIRECT INVOKING FEATURES
	///////////////////////////////////////////////////////////////////////////

	public static function getRewardedVideoPlacementInfo(placementName:String):PlacementInfo {
		var pi = _getRewardedVideoPlacementInfo(placementName);
		if(pi==null) return null;
		return new PlacementInfo(pi);
	}

	//// EVENTS
	///////////////////////////////////////////////////////////////////////////

	public static var onEvent:SupersonicEvent->Void = null;

	public function _onEvent(type:String, data:String){
		if(onEvent==null){
			trace('Unchought Event: '+type+' -> Data: '+data);
			trace('you should assign your own onEvent function by doing ');
			trace('Supersonic.onEvent = function(e:SupersonicEvent) { ... };');
		}else{
			onEvent(new SupersonicEvent(type,data));
		}
	}

}
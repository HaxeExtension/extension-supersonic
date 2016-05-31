Introduction
Supersonic OpenFL Extension. (Android + iOS /under development/)

More info on Supersonic: http://developers.supersonic.com/



###How to Install

To install this library, you can simply get the library from haxelib like this:
```bash
haxelib git https://github.com/SempaiGames/extension-supersonic

(note that you do haxelib install extension-supersonic, you won't get the last version of the extension, since the extension is bigger than haxelib max allowed package).

```

Once this is done, you just need to add this to your project.xml
```xml
<android target-sdk-version="22" />

<!-- uncomment the lines defining the ad-network SDK that you want to include on your project-->
<!-- NOTE: You don't want to enable all of them: Your project will be weight too much and you
may end-up getting the Android 64K limit error -->

<set name="adcolony-supersonic" />
<set name="admob-supersonic" />
<set name="applovin-supersonic" />
<set name="chartboost-supersonic" />
<set name="facebook-supersonic" />
<!--
<set name="flurry-supersonic" />
<set name="hyprmx-supersonic" />
<set name="inmobi-supersonic" />
<set name="mediabrix-supersonic" />
<set name="nativex-supersonic" />
<set name="tapjoy-supersonic" />
<set name="unityads-supersonic" />
<set name="vungle-supersonic" />
-->

<haxelib name="extension-supersonic" />
```

###Simple use Example

```haxe
// This example show a simple example.

import extension.supersonic.Supersonic;
import extension.supersonic.SupersonicEvent;

class SimpleExample {

	function new(){
		Supersonic.onEvent = onSupersonicEvent;
		Supersonic.init('YOUR-APP-KEY'); // should be something like: 5c33ac32
	}

	public function onSupersonicEvent(e:SupersonicEvent){
		trace("Supersonic Event: type=" + e.type + " | data=" + e.data);
		if(e.type == SupersonicEvent.RewardedVideoAdRewarded){
			var pi = e.getPlacementInfo();
			if(pi!=null) pi.dump();
		}
	}

	function gameOver() {
		if(Supersonic.isInterstitialReady()){
			trace("Interstitial is ready!");
			Supersonic.showInterstitial("PLACEMENT-NAME");
			Supersonic.cacheInterstitial();
		}
	}

	function playRewardedVideo() {
		if(Supersonic.isRewardedVideoAvailable()){
			trace("Rewarded Video available");
			Supersonic.showRewardedVideo("PLACEMENT-NAME");
		}
	}
	
}

```

###License

The MIT License (MIT) - [LICENSE.md](LICENSE.md)

Copyright &copy; 2016 SempaiGames (http://www.sempaigames.com)

Author: Federico Bricker

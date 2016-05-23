package extension.supersonic;

class PlacementInfo {

	public var placementId(default,null):Int;
	public var placementName(default,null):String;
	public var rewardName(default,null):String;
	public var rewardAmount(default,null):Int;

	public function new(json:String){
		try{
			var aux = haxe.Json.parse(json);
			this.placementId = aux.placementId;
			this.placementName = aux.placementName;
			this.rewardName = aux.rewardName;
			this.rewardAmount = aux.rewardAmount;			
		}catch(e:Dynamic){
			trace("PlacementInfo Parse Exception: "+e);
		}
	}
}
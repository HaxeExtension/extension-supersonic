package extension.supersonic;

class PlacementInfo {

	public var placementName:String;
	public var rewardName:String;
	public var rewardAmount:Int;

	public function new(name:String, json:String){
		try{
			var aux = haxe.Json.parse(json);
			this.placementName = name;
			this.rewardName = aux.rewardName;
			this.rewardAmount = aux.rewardAmount;			
		}catch(e:Dynamic){
			trace("PlacementInfo Parse Exception: "+e);
		}
	}
}
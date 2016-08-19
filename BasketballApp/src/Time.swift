import ScadeKit

class Time: EObject {
	dynamic var time: String?
	dynamic var place: String?
	dynamic var type: String?
	
	init(time: String, place: String, type: String){
		self.time = time
		self.place = place
		self.type = type
	}
}

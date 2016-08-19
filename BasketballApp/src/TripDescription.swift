import ScadeKit

class TripDescription: EObject {
	
	dynamic var town: String?
	dynamic var place: String?
	dynamic var time: String?
	
	init(time: String, place: String, town: String){
		self.time = time
		self.place = place
		self.town = town
	}
	
}

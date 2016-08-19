import ScadeKit

class TripsDescriptionPageAdapter: SCDLatticePageAdapter {

	dynamic var descriptions: TripDescription?
	
	// page adapter initialization
	override func load(path: String) {		
		super.load(path)
		
		let backButton = self.page.getWidgetByName("backButton") as! SCDWidgetsButton
		backButton.OnClick.append(SCDWidgetsEventHandler{event in
			self.navigation.go("trips.page", transition: "BACKWARD_PUSH")
		})
		
		self.page.OnEnter.append(SCDWidgetsEnterEventHandler {event in
			let service: BasketService! = SCDRuntime.loadService("BasketService.service")
			let root = service.getTrip()
			
			//self.descriptions!.times.append(Time(time: String(root.practices[0].description[0].time), place: String(root.practices[0].description[0].place), type: String(root.practices[0].description[0].type)))
			
			let count = root.trips.count
			
    		let name = event.data as! String
    		print(name)
    		let count111 = root.trips[0].description
    		print(count111)
    		var a = 0
    		for i in 0...count-1 {
				if root.trips[i].date == name {
					break
				}
				a = a+1
			}
			self.descriptions = TripDescription(time: String(root.trips[a].description.time), place: String(root.trips[a].description.place), town: String(root.trips[a].description.town))
			//let count1 = root.trips[a].description.count
			//for j in 0...count1-1 {
			//self.descriptions!.tripDescription.append(TripDescription(time: String(root.trips[a].description[0].time), place: String(root.trips[a].description[0].place), town: String(root.trips[a].description[0].town)))
			//}
		})
	}
	}


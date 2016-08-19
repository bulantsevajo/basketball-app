import ScadeKit

class TripsPageAdapter: SCDLatticePageAdapter {

	dynamic var date: Dates?
	
	// page adapter initialization
	override func load(path: String) {		
		super.load(path)
		
		let service: BasketService! = SCDRuntime.loadService("BasketService.service")
		let root = service.getTrip()
		let count = root.trips.count
		
		self.date = Dates()
		
		for i in 0...count-1 {
			self.date!.dates.append(Date(date: String(root.trips[i].date)))
		}
		
		let list1 = self.page.getWidgetByName("list1") as! SCDWidgetsList
		list1.OnItemSelected.append(SCDWidgetsItemSelectedEventHandler{event in
			let obj = event.item as! EObject
			//print(event.item)
			self.navigation.goWith("tripsDescription.page", data: obj.eGet(featureName: "date"), transition: "FORWARD_PUSH")
		})
		
		let backButton = self.page.getWidgetByName("backButton") as! SCDWidgetsButton
		backButton.OnClick.append(SCDWidgetsEventHandler{event in
			self.navigation.go("main.page", transition: "BACKWARD_PUSH")
		})
	}
}

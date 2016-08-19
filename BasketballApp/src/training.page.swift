import ScadeKit

class TrainingPageAdapter: SCDLatticePageAdapter {
	
	dynamic var date: Dates?
	//dynamic var descriptions: Descriptions?
	
	// page adapter initialization
	override func load(path: String) {		
		super.load(path)
		
		let service: BasketService! = SCDRuntime.loadService("BasketService.service")
		let root = service.getSchedule()
		let count = root.practices.count
		
		self.date = Dates()
		//self.descriptions = Descriptions()
		for i in 0...count-1 {
			self.date!.dates.append(Date(date: String(root.practices[i].date)))
		}
		
		let list1 = self.page.getWidgetByName("list1") as! SCDWidgetsList
		list1.OnItemSelected.append(SCDWidgetsItemSelectedEventHandler{event in
			let obj = event.item as! EObject
			//print(event.item)
			self.navigation.goWith("trainingDescription.page", data: obj.eGet(featureName: "date"), transition: "FORWARD_PUSH")
		})
		
		let backButton = self.page.getWidgetByName("backButton") as! SCDWidgetsButton
		backButton.OnClick.append(SCDWidgetsEventHandler{event in
			self.navigation.go("main.page", transition: "BACKWARD_PUSH")
		})
		//self.date!.times.append(Time(time: String(root.practices[0].description[0].time)))
			
	}
}

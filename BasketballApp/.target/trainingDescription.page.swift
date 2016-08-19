import ScadeKit

class TrainingDescriptionPageAdapter: SCDLatticePageAdapter {

	dynamic var descriptions: Descriptions?
	// page adapter initialization
	override func load(path: String) {		
		super.load(path)
		
		//print(root.practices[0].description[0].time)
		//		
		let backButton = self.page.getWidgetByName("backButton") as! SCDWidgetsButton
		backButton.OnClick.append(SCDWidgetsEventHandler{event in
			self.navigation.go("training.page", transition: "BACKWARD_PUSH")
		})
	
		self.page.OnEnter.append(SCDWidgetsEnterEventHandler {event in
			let service: BasketService! = SCDRuntime.loadService("BasketService.service")
			let root = service.getSchedule()
			
			self.descriptions = Descriptions()
			//self.descriptions!.times.append(Time(time: String(root.practices[0].description[0].time), place: String(root.practices[0].description[0].place), type: String(root.practices[0].description[0].type)))
			
			let count = root.practices.count
			
    		let name = event.data as! String
    		print(name)
    		var a = 0
    		for i in 0...count-1 {
				if root.practices[i].date == name {
					break
				}
				a = a+1
			}
			let count1 = root.practices[a].description.count
			for j in 0...count1-1 {
				self.descriptions!.times.append(Time(time: String(root.practices[a].description[j].time), place: String(root.practices[a].description[j].place), type: String(root.practices[a].description[j].type)))
			}
		})
	}
}

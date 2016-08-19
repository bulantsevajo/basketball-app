import ScadeKit

class MainPageAdapter: SCDLatticePageAdapter {

	// page adapter initialization
	override func load(path: String) {		
		super.load(path)
		
		let button1 = self.page.getWidgetByName("button1") as! SCDWidgetsButton
		button1.OnClick.append(SCDWidgetsEventHandler{event in
			self.navigation.go("training.page", transition: "FORWARD_PUSH")
		})
		
		let button2 = self.page.getWidgetByName("button2") as! SCDWidgetsButton
		button2.OnClick.append(SCDWidgetsEventHandler{event in
			self.navigation.go("trips.page", transition: "FORWARD_PUSH")
		})
	}
}

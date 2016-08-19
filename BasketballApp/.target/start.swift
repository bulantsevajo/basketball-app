import Foundation
import ScadeKit

@objc class Main : NSObject, SCDApplication {

 	let moduleName  = "BasketballApp"
	var mainView: SCDLatticeView!
  	var mainAdapter: MainPageAdapter!
  	var trainingAdapter: TrainingPageAdapter!
  	var descriptionAdapter: TrainingDescriptionPageAdapter!
  	var tripsAdapter: TripsPageAdapter!
  	var tripsDescriptionAdapter: TripsDescriptionPageAdapter!
  	
	func main() {
		SCDRuntime.initRuntime(self)

		mainView = SCDLatticeView()
		mainAdapter = MainPageAdapter()
		
		mainAdapter.load("main.page")
		
		trainingAdapter = TrainingPageAdapter()		
		trainingAdapter.load("training.page")
		
		tripsAdapter = TripsPageAdapter()		
		tripsAdapter.load("trips.page")
		
		descriptionAdapter = TrainingDescriptionPageAdapter()		
		descriptionAdapter.load("trainingDescription.page")
		
		tripsDescriptionAdapter = TripsDescriptionPageAdapter()		
		tripsDescriptionAdapter.load("tripsDescription.page")
		
		mainAdapter.show(mainView)
	}
}

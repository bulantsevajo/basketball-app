import Foundation
import ScadeKit

@objc
protocol BasketService: EObjectProtocol {
  func getSchedule() -> ScheduleResponse!

  func getTrip() -> TripsResponse!
}

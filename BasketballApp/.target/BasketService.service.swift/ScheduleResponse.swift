import Foundation
import ScadeKit

@objc
protocol ScheduleResponse: EObjectProtocol {
  var practices: [Practices] { get }
}

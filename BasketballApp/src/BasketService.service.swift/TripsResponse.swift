import Foundation
import ScadeKit

@objc
protocol TripsResponse: EObjectProtocol {
  var trips: [Trips] { get }
}

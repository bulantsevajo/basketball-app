import Foundation
import ScadeKit

@objc
protocol Description: EObjectProtocol {
  var time: String { get }

  var place: String { get }

  var type: String { get }
}

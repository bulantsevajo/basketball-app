import Foundation
import ScadeKit

@objc
protocol Description1: EObjectProtocol {
  var town: String { get }

  var place: String { get }

  var time: String { get }
}

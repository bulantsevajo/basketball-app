import Foundation
import ScadeKit

@objc
protocol Practices: EObjectProtocol {
  var date: String { get }

  var description: [Description] { get }
}

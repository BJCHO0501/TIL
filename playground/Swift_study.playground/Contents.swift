import UIKit

let x: Int? = 10
let y: Int? = nil

func opBindingGuard() {
    guard let xx = x else {
        return print("x is nil")
    }
    print(xx)

    guard let yy = y else {
        return print("y is nil")
    }
    print(yy)
}

opBindingGuard()


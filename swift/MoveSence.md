# νλ©΄ μ΄λ π²



 ### Segue

- λ²νΌμ control λλ¬μ μνλ λ·°μ»¨μ μ°κ²°ν΄μ£Όλ©΄ μ°κ²°λλ€. 
- κ°λ¨ν΄μ μ’λ€.
- μ€ν λ¦¬ λ³΄λμ λ³μκ° μ³κΈ°λκ² μ΄λ ΅λ€.

### Modal

- μ¬μ©μκ° μλ λ³΄κ³ μλ νλ©΄μ λ€λ₯Έ νλ©΄ λμ°λ λ°©μμ λ§νλ€.

- νλ©΄μ μμ ν μ ννλ κ²μ΄ μλ νλ©΄μ λ€λ₯Έ νλ©΄ μλ‘ presentingνμ¬ λμ°λ λ°©μμ΄λ€.

- μ¬μ©μμ μ£Όμλ μ΄λͺ©μ λμ΄μΌν  λ λ§μ΄ μ¬μ©λλ κΈ°λ²

  ```swift
  @IBAction func ν¨μμ΄λ¦(_ button: UIButton) {
    let λ³μμ΄λ¦ = self.storyboard?.instantiateViewController(withIdentifier: "μ€ν λ¦¬λ³΄λID")
    self.present(λ³μμ΄λ¦!, animated: #true or #false)
  }
  ```

  - μ λͺλ Ήμ΄λ‘ λνλκ² ν  μ μλ€.

### Navigation

- last in first outμ κ·μΉμ λ°λ₯Έλ€.
- κ° μ€ν λ¦¬λ³΄λλ§λ€ λ³μκ°μ μ³κΈ°λκ² κ°λ₯νλ€.

```swift
//λ€λΉκ²μ΄μλ·° νΈμ
@IBAction func ν¨μμ΄λ¦(_ button: UIButton) {
  let λ³μμ΄λ¦ = self.storyboard?.instantiateViewController(withIdentifier: "μ€ν λ¦¬λ³΄λID")
  self.navigationController?.pushViewController(λ³μμ΄λ¦!, animated: #true or #false)
}

//λ€λΉκ²μ΄μλ·° ν
@IBAction func ν¨μμ΄λ¦(_ button: UIButton) {
  let λ³μμ΄λ¦ = self.storyboard?.instantiateViewController(withIdentifier: "μ€ν λ¦¬λ³΄λID")
  self.navigationController?.pushViewController(λ³μμ΄λ¦!, animated: #true or #false)
}
```




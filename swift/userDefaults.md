# UserDefaults π

+ λλ‘λ μ±μ λ§λ€μμλ κ·Έ μ±μ λ°μ΄ν°κ° μ±μ μ’λ£νλ€κ° λ€μ μ€ννμ¬λ κ·Έλλ‘ λ¨μμκ² ν΄μΌν λκ° μλ€.
+ κ·Έλ΄λ μ°λκ²μ΄ userDefalultsμ΄λ€.

### λ¬Έλ²

```swift
//μ μ₯ν λ
UserDefaults.standard.set(λ³μμ΄λ¦, forKey: "ν€μ΄λ¦")
UserDefaults.standard.synchronize()

//κΊΌλ΄μ¬λ
UserDefaults.standard.νμ(forKey: "ν€μ΄λ¦")
```

+ μ¬κΈ°μ μ΄ **UserDefaults.standard.synchronize()** λ₯Ό μ μ°λκ²μΈμ§ μλ¬Έμ΄ λ€κ²μ΄λ€.

  > synchronize() λ©μλλ UserDefaults μ κΈ°λ‘λ κ°μ νμΌμ μ°λ μ­νμ νλ€. λ°λΌμ μ¬λ¬ κ°μ λ³κ²½ν  κ²½μ° λ§€λ² synchronize() λ₯Ό νΈμΆν  νμ μμ΄ λ€ μ°κ³  λ λ€μμ λ§μ§λ§μ λ± νλ²λ§ synchronize() λ₯Ό νΈμΆνλ©΄ λλ€.

  λΌκ³  κ²μνλλ λμλ€.

  + μμ½νμλ©΄ synchronize()λ₯Ό μ¨μΌ νμΌμ μ μ₯μ νλ€λ κ²μ΄λ€. λ¨ μμ ν  λλ§λ€ μΈ νμλ μκ³  λ§μ§λ§μλ§ μ¨μ£Όλ©΄ λλ€.
  
    

### νμ© μμ

```swift
func setData(_ sender: String) {
  let data = sender
  UserDefaults.standard.set(data, forKey: "hello")
  UserDefaults.standard.synchronize()
}

func getData() {
  guard let data = UserDefalts.standard.object(forKey: "hello") as? String else {
    return
  }
  return data
}

func printFunction() {
  print(getData())
}

func endApplication() {
  setData("μλ!")
}
```

+ μ μ½λμμ **endApplication**ν¨μλ μ±μ΄ μ’λ£λ¬μλ μ€νλλ ν¨μλΌ μκ°νκ³ , **printFunction**μ μ±μ μμνμλ μΆλ ₯νλ ν¨μλΌκ³  μκ°ν΄λ³΄μ

+ μ±μ΄ μ€νλλ©΄ getDataν¨μκ° μ€νλκ³  getDataμ dataλ³μμ ν€κ° "hello"μΈ κ°μ Stringννλ‘ μ μ₯νλ€. 

+ νμ§λ§ μμ§ κ°μ μμΌλ―λ‘ μλ¬΄κ²λ μΆλ ₯λμ§ μλλ€.

+ μ±μ μ’λ£νλ©΄  setDataν¨μκ° μ€νλκ³  setDataμ dataλ³μλ "μλ!"μ΄ λκ³  "hello"λΌλ ν€λ‘ μ μ₯μ΄ λλ€. 

+ μ±μ μ€ννλ€λ©΄ μ΄λ²μλ "hello"λΌλ ν€μ κ°μ΄ μμΌλ―λ‘ "μλ!"μ΄ μΆλ ₯λλ€.

  `TMI: μ¬κΈ°μ UserDefalts.standard.object(forKey: "hello") as? Stringμ UserDefalts.standard.String(forKey: "hello")κ³Ό κ°μ μ­ν μ νλ€.`

  






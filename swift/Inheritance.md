# μμ π§²



### μ€μννΈμ μμ

- μμμ ν΄λμ€, νλ‘ν μ½ λ±μμ κ°λ₯νλ€.
- μ΄κ±°ν, κ΅¬μ‘°μ²΄λ μμμ΄ λΆκ°λ₯νλ€.
- μ€μννΈμ ν΄λμ€λ λ¨μΌμμμΌλ‘, λ€μ€μμμ μ§μνμ§ μλλ€.



## ν΄λμ€ μμ

---

### λ¬Έλ²

``` swift
class μ΄λ¦: μμλ°μ ν΄λμ€ μ΄λ¦ {
  // μ½λ
}
```



### μ¬μ©

- final ν€μλλ₯Ό μ¬μ©νλ©΄ μ¬μ μ(override)λ₯Ό λ°©μ§ν  μ μλ€.
- static ν€μλλ₯Ό μ¬μ©ν΄ νμ λ©μλλ₯Ό λ§λ€λ©΄ μ¬μ μκ° λΆκ°λ₯ νλ€.
- class ν€μλλ₯Ό μ¬μ©ν΄ νμ λ©μλλ₯Ό λ§λ€λ©΄ μ¬μ μκ° κ°λ₯νλ€.
- class μμ finalμ λΆμ΄λ©΄ static ν€μλλ₯Ό μ¬μ©νκ²κ³Ό λμΌνκ² λμνλ€.
- override ν€μλλ₯Ό μ¬μ©ν΄ λΆλͺ¨ ν΄λμ€μ λ©μλλ₯Ό μ¬μ μ ν  μ μλ€

``` swift
class Person {
    var name: String = ""
    
    func selfIntroduce() {
        print("μ λ \(name)μλλ€.")
    }
    
    //final ν€μλλ₯Ό μ¬μ©νμ¬ μ¬μ μλ₯Ό λ°©μ§ν  μ μμ΅λλ€.
    final func sayHello() {
        print("hello")
    }
    
    //νμ λ§€μλ
    //μ¬μ μ λΆκ° λ©μλ - static
    static func typeMethod() {
        print("type methode - static")
    }
    
    //μ¬μ μ κ°λ₯ νμ λ©μλ - class
    class func classMethod() {
        print("type method - class")
    }
    
    //μ¬μ μ κ°λ₯ν class λ©μλλΌλ final ν€μλλ₯Ό μ¬μ©νλ©΄ μ¬μ μ ν  μ μλ€
    //λ©μλ μμ `static`κ³Ό `final class`λ λκ°μ μ­ν μ νλ€
    final class func finalCalssMethod() {
        print("type method - final class")
    }
}

//personμ μμλ°λ Student
class Student: Person {
    var major: String = ""
    
    override func selfIntroduce() {
        print("μ λ \(name)μ΄κ³ , μ κ³΅μ \(major)μλλ€.")
    }
    
    override class func classMethod() {
        print("overriden type method - class")
    }
    
    //staticμ μ¬μ©ν νμ λ©μλλ μ¬μ μ ν  μ μμ΅λλ€
    //   override static func typeMethod() {    }
        
        //final ν€μλλ₯Ό μ¬μ©ν λ©μλ, νλ‘νΌν°λ μ¬μ μ ν  μ μμ΅λλ€
    //    override func sayHello() {    }
    //    override class func finalClassMethod() {    }
}
```



### κ΅¬λ

``` swift
let sam: Person = Person()
let kim: Student = Student()

yagom.name = "sam"
hana.name = "kim"
hana.major = "Swift"

yagom.selfIntroduce()
// μ λ samμλλ€

hana.selfIntroduce()
// μ λ kimμ΄κ³ , μ κ³΅μ Swiftμλλ€

Person.classMethod()
// type method - class

Person.typeMethod()
// type method - static

Person.finalCalssMethod()
// type method - final class


Student.classMethod()
// overriden type method - class

Student.typeMethod()
// type method - static

Student.finalCalssMethod()
// type method - final class
```


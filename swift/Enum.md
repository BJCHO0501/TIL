# ์ด๊ฑฐํ ๐



### ์ด๊ฑฐํ์ด๋?

- ์ ์ฌํ ์ข๋ฅ์ ์ฌ๋ฌ ๊ฐ์ ํ๊ณณ์ ๋ชจ์์ ์ ์ํ ๊ฒ์ด๋ค. ex) ์์ผ, ์, ๊ณ์ ๋ฑ
- enum์์ฒด๊ฐ ํ๋์ ๋ฐ์ดํฐ ํ์์ผ๋ก, ์นด๋ฉ์ผ์ด์ค๋ฅผ ์ฌ์ฉํ์ฌ ์ด๋ฆ์ ์ ์ํ๋ค.
- ๊ฐ case๋ ์๋ฌธ์ ์นด๋ฉ์ผ์ด์ค๋ก  ์ ์ํ๋ค.
- ๊ฐ case๋ ๊ทธ ์์ฒด๊ฐ ๊ณ ์ ๊ฐ์ด๋ค. (๊ฐ case์ ์๋์ผ๋ก ์ ์๊ฐ์ด ํ ๋น๋์ง ์์)
- ๊ฐ case๋ ํ์ค์ ๊ฐ๋ณ๋ก๋, ํ์ค์ ์ฌ๋ฌ๊ฐ๋ ์ ์ํ  ์ ์๋ค.

### ์ ์

~~~swift
enum ์ด๋ฆ {
  case ์ด๋ฆ1
  case ์ด๋ฆ2
  case ์ด๋ฆ3, ์ด๋ฆ4, ์ด๋ฆ5
  //...
}

//์์ 
enum Name {
  case ์ฒ ์
  case ์ํฌ
  case ์งฑ๊ตฌ, ์ด์ฌ
}
~~~



### ์ฌ์ฉ

``` swift
enum Weekday {
    case mon
    case tue
    case wed
    case thu, fri, sat, sun
}

// ์ด๊ฑฐํ ํ์๊ณผ ์ผ์ด์ค๋ฅผ ๋ชจ๋ ์ฌ์ฉํ์ฌ๋ ๋๋ค.
var day: Weekday = Weekday.mon

// ํ์์ด ๋ชํํ๋ค๋ฉด .์ผ์ด์ค ์ฒ๋ผ ํํํด๋ ๋ฌด๋ฐฉํ๋ค
day = .tue

print(day) //tue
```



### switch ๋ฌธ๊ณผ ํจ๊ป ์ฌ์ฉ

``` swift
enum Weekday {
    case mon
    case tue
    case wed
    case thu, fri, sat, sun
}

var day: Weekday = Weekday.mon

switch day {
case .mon, .tue, .wed, .thu:
    print("ํ์ผ์๋๋ค")
case Weekday.fri:
    print("๋ถ๊ธ ํํฐ!!")
case .sat, .sun:
    print("์ ๋๋ ์ฃผ๋ง!!")
}
```

- switch์ ๋น๊ต๊ฐ์ ์ด๊ฑฐํ ํ์์ด ์์น ํ ๋ ๋ชจ๋  ์ด๊ฑฐํ ์ผ์ด์ค๋ฅผ ํฌํจํ๋ค๋ฉด default๋ฅผ ์์ฑํ  ํ์๊ฐ ์๋ค.



### rawValue (์์๊ฐ)

- c์ธ์ด์ enum์ฒ๋ผ ์ ์๊ฐ์ ๊ฐ์ง ์ ์๋ค.
- rawValue๋ case๋ณ๋ก ๊ฐ๊ฐ ๋ค๋ฅธ ๊ฐ์ ๊ฐ์ ธ์ผํ๋ค.
- ์๋์ผ๋ก 1์ด ์ฆ๊ฐ๋ ๊ฐ์ด ํ ๋น๋๋ค.
- rawValue๋ฅผ ๋ฐ๋์ ์ง๋ ํ์๊ฐ ์๋ค๋ฉด ๊ตณ์ ๋ง๋ค์ง ์์๋ ๋๋ค.

``` swift
enum Fruit: Int {
    case apple = 0
    case grape = 1
    case peach
    
    // mango์ apple์ ์์๊ฐ์ด ๊ฐ์ผ๋ฏ๋ก 
    // mango ์ผ์ด์ค์ ์์๊ฐ์ 0์ผ๋ก ์ ์ํ  ์ ์๋ค
//    case mango = 0 ์ค๋ฅ
}

print("Fruit.peach.rawValue == \(Fruit.peach.rawValue)")
// Fruit.peach.rawValue == 2
//peach์ ๊ฐ์ ์ ํด์ฃผ์ง ์์๋ 2๊ฐ ๋์จ๋ค
```



- ์ ์ํ์ ๋ฟ๋ง ์๋๋ผ, Hashable ํ๋กํ ์ฝ์ ๋ฐ๋ฅด๋ ๋ชจ๋  ํ์์ ์์๊ฐ์ ํ์์ผ๋ก ์ง์ ํ  ์ ์๋ค.

``` swift
enum School: String {
    case elementary = "์ด๋ฑ"
    case middle = "์ค๋ฑ"
    case high = "๊ณ ๋ฑ"
    case university
}

print("School.middle.rawValue == \(School.middle.rawValue)")
// School.middle.rawValue == ์ค๋ฑ

// ์ด๊ฑฐํ์ ์์๊ฐ ํ์์ด String์ผ ๋, ์์๊ฐ์ด ์ง์ ๋์ง ์์๋ค๋ฉด
// case์ ์ด๋ฆ์ ์์๊ฐ์ผ๋ก ์ฌ์ฉํฉ๋๋ค
print("School.university.rawValue == \(School.university.rawValue)")
// School.middle.rawValue == university
```

- Stringํ์์ ๊ฒฝ์ฐ ์์๊ฐ์ด ์ค์ ๋์ง ์์๋ค๋ฉด case์ ์ด๋ฆ์ ์์๊ฐ์ผ๋ก ์ฌ์ฉํ๋ค.



### ์์๊ฐ์ ํตํ ์ด๊ธฐํ

``` swift
// rawValue๋ฅผ ํตํด ์ด๊ธฐํ ํ ์ด๊ฑฐํ ๊ฐ์ ์ต์๋ ํ์์ด๋ฏ๋ก Fruit ํ์์ด ์๋๋ค
//let apple: Fruit = Fruit(rawValue: 0)
let apple: Fruit? = Fruit(rawValue: 0)

// if let ๊ตฌ๋ฌธ์ ์ฌ์ฉํ๋ฉด rawValue์ ํด๋นํ๋ ์ผ์ด์ค๋ฅผ ๊ณง๋ฐ๋ก ์ฌ์ฉํ  ์ ์๋ค.
if let orange: Fruit = Fruit(rawValue: 5) {
    print("rawValue 5์ ํด๋นํ๋ ์ผ์ด์ค๋ \(orange)์๋๋ค")
} else {
    print("rawValue 5์ ํด๋นํ๋ ์ผ์ด์ค๊ฐ ์์ต๋๋ค")
} // rawValue 5์ ํด๋นํ๋ ์ผ์ด์ค๊ฐ ์์ต๋๋ค
```



### ๋ฉ์๋ 

- swift์ ์ด๊ฑฐํ์๋ ๋ฉ์๋๋ ์ถ๊ฐํ  ์ ์๋ค.

``` swift
enum Month {
    case dec, jan, feb
    case mar, apr, may
    case jun, jul, aug
    case sep, oct, nov
    
    func printMessage() {
        switch self {
        case .mar, .apr, .may:
            print("๋ฐ์คํ ๋ด~")
        case .jun, .jul, .aug:
            print("์ฌ๋ฆ ๋์์~")
        case .sep, .oct, .nov:
            print("๊ฐ์์ ๋์์ ๊ณ์ !")
        case .dec, .jan, .feb:
            print("์ถ์ด ๊ฒจ์ธ์๋๋ค")
        }
    }
}

Month.mar.printMessage()
```


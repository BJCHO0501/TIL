# Dictionary π



### νμ

- 'ν€'μ κ° μ μμΌλ‘ μ΄λ£¨μ΄μ§ μ»¬λ μ νμ
- κ°μ μ€λ³΅ κ°λ₯νμ§λ§, ν€λ μ€λ³΅νλ©΄ μ λλ€.

### μ μΈ 

``` swift
var anyDictionary:<String,Any> = [String:Any]()
//Keyκ° String νμμ΄κ³  valueκ° AnyνμμΈ λΉ dictionaryμμ±
```

- λΉ λμλλ¦¬λ₯Ό μ μΈν λλ `var Dictionary = [:] `κ³Ό κ°μ νμ μΆλ‘ μΌλ‘λ μ μΈν  μ μλ€.

``` swift
var anyDictionary: Dictionary <String, Any> = Dictionary<String, Any>()
var anyDictionary: Dictionary <String, Any> = [:]
var anyDictionary: [String: Any] = Dictionary<String, Any>()
var anyDictionary: [String: Any] = [String: Any]()
var anyDictionary: [String: Any] = [:]
var anyDictionary = [String: Any]()
```

- μ νν λͺ¨λ κ°μ ν¬νμ΄λ€.

### κ° μμ 

``` swift
//ν€μ ν΄λΉνλ κ° μμ 
var dic = ["ob1": "ππ»", "ob2": "hello"]
dic["ob1"] = "ππ»"
print(ob1) //["ob1": "ππ»", "ob2": "hello"]

//ν€μ ν΄μ₯νλ κ° μ κ±° 
dic.removeValue(forKey: "ob1")
dic["ob2"] = nil
print(dic) //μκ²λ μλμ΄
```

### λΆλ³ λμλλ¦¬

``` swift
let dic: [String:String] = [:]
let initalizedDic: [String:String] = ["name": "jin", "gender": "male"]
//κ°μ μμ νλ €κ³  νλ€λ©΄ μ€λ₯κ°λλ€.
```


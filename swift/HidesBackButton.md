# HidesBackButton ๐ซ

- NavigationController์ ์ฌ์ฉํ๊ณ  ํ๋ฉด ํธ์ฌ๋ฅผ ํ๊ฒ๋๋ฉด ๋ค์ ํ๋ฉด์์ **< Back**์ด๋ผ๋ ๋ฒํผ์ด ์๋์์ฑ ๋๋ค.
- ์ด๋ฐ ๋ฒํผ์ ์ง์์ผํ ๋ ์ฐ๋ ์ฝ๋๊ฐ **hidesBackButton**์ด๋ค

```swift
override func viewWillAppear(_ animated: Bool) {
    self.navigationItem.hidesBackButton = true
}
```

- ์ ์ฝ๋๋ฅผ ํด์ํด๋ณด์๋ฉด **viewWillAppear**์ฆ ๋ทฐ๊ฐ ๋ํ๋ฌ์๋ ์คํํ๋ ํจ์๋ก **self.navigationItem.hidesBackButton**์ true๋ก ํด์ค๋ค๋ฉด ๋ฒํผ์ด ์ฌ๋ผ์ง๊ณ  false๋ก ํด์ค๋ค๋ฉด ๋ฒํผ์ด ์๊ธด๋ค.
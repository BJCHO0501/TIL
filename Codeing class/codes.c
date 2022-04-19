//
//  main.c
//  codeup
//
//  Created by 조병진 on 2022/04/03.
//

#include <stdio.h>

int main() {
    
//    int cut = 0;
//    char sName[100], sNum[10];
//    printf("이름을 영어로 입력하세요 : ");
//    scanf("%s", sName);
//    printf("학번을 입력하세요 : ");
//    scanf("%s", sNum);
//
//    while (sName[cut] != '\0') {
//        cut++;
//    }
//
//    printf("당신의 이름은 %s(%d글자)이고 학번은 %s입니다.\n", sName, cut, sNum);
    
//    int arr[6];
//
//    for (int i = 0; i < 5; i++){
//        scanf(" %c", &arr[i]);
//    }
//
//    for (int i = 0; i < 5; i++){
//        printf("%c ", arr[i]);
//    }
    
//    char a[11];
//
//    for (int i = 0; i < 10; i++){
//        scanf(" %c", &a[i]);
//    }
//
//    for (int i = 0; i < 10; i++){
//        printf("%c", a[i]);
//    }

//    int num, sco = 1, alg;
//
//    scanf("%d", &num);
//
//    alg = 1 + ((num - 1) * 2);
//
//    for (int line = 0 ; line < num; line++){
//        for (int spa = 0; spa < alg - sco; spa++){
//            printf(" ");
//        }
//        for (int k = 0; k < sco; k++){
//            printf("*");
//        }
//        sco += 2;
//        printf("\n");
//    }

    
//    int num;
//
//    scanf("%d", &num);
//
//    for (int i = 1; i <= num - 1; i++){
//        for (int j = 0; j < i; j++){
//            printf("#");
//        }
//        printf("\n");
//    }
//
//    for (int i = num; i > 0; i--){
//        for (int s = 0; s < num - i; s++){
//            printf(" ");
//        }
//        for (int j = 0; j < i; j++){
//            printf("#");
//        }
//        printf("\n");
//    }
    
//    int num, al = 65, n = 0;
//
//    scanf("%d", &num);
//
//    for (int i = 0; i < num; i++){
//        for (int j = 0; j < num; j++){
//            if (j < num - i){
//                printf("%c", al++);
//            }
//            else{
//                printf("%d", n++);
//            }
//        }
//        printf("\n");
//    }
    
    
//    int num;
//
//    scanf("%d", &num);
//
//    for (int i = 1; i < num; i++){
//        for (int j = 0; j < i; j++){
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    for (int i = num; i > 0; i--){
//        for (int j = 0; j < i; j++){
//            printf("*");
//        }
//        printf("\n");
//    }
    
//    int num;
//
//    scanf("%d", &num);
//
//    for (int i = 1; ; i++){
//        if ((num * i) % 10 != 0){
//            printf("%d ", num * i);
//        }
//        else{
//            printf("%d ", (num * i));
//            break;
//        }
//    }
    
//    int in, al = 65, num = 1;
//
//    scanf("%d", &in);
//
//    for (int i = 0; i < in; i++){
//        for (int j = 0; j <= in; j++){
//            if (j < in - i){
//                printf("%d ", num++);
//            }
//            else{
//                printf("%c ", al++);
//            }
//        }
//        printf("\n");
//    }
    
//    int num, sco;
//
//    scanf("%d", &num);
//
//    sco = 1 + ((num - 1) * 2);
//
//    for (int line = num ; line > 0; line--){
//        for (int spa = 0; spa < num - line; spa++){
//            printf(" ");
//        }
//        for (int k = 0; k < sco; k++){
//            printf("*");
//        }
//        sco -= 2;
//        printf("\n");
//    }
    
//    int suger, bag = 0;
//
//    scanf("%d", &suger);
//
//    for (int i = suger / 5; i >= 0; i--){
//        if ((suger - (i * 5)) % 3 == 0){
//            bag = i + (suger - (i * 5)) / 3;
//            printf("%d\n", bag);
//            return 0;
//        }
//    }
//    bag = -1;
//    printf("%d\n", bag);
    
    
//    int in;
//
//    scanf("%d", &in);
//
//    for (int i = 1; i <= in; i++){
//        for (int s = 0; s < in - i; s++){
//            printf(" ");
//        }
//        for (int j = 0; j < i; j++){
//            printf("*");
//        }
//        printf("\n");
//    }
    
//    int num, sco;
//
//    scanf("%d", &num);
//
//    sco = num;
//
//    for (int line = (num + 1) / 2 ; line > 0; line--){
//        for (int spa = 0; spa < ((num + 1) / 2) - line; spa++){
//            printf(" ");
//        }
//        for (int k = 0; k < sco; k++){
//            printf("*");
//        }
//        sco -= 2;
//        printf("\n");
//    }
    
//    int num, sco = 1;
//
//    scanf("%d", &num);
//
//    for (int line = (num + 1) / 2 ; line > 0; line--){
//        for (int spa = 0; spa < line - 1; spa++){
//            printf(" ");
//        }
//        for (int k = 0; k < sco; k++){
//            printf("*");
//        }
//        sco += 2;
//        printf("\n");
//    }
    
//    int in;
//
//    scanf("%d", &in);
//
//    for (int i = in; i > 0; i--){
//        for (int s = 0; s < in - i; s++){
//            printf(" ");
//        }
//        for (int j = 0; j < i; j++){
//            printf("*");
//        }
//        printf("\n");
//    }
    
//    int in;
//
//    scanf("%d", &in);
//
//    for (int i = 0; i < in; i++){
//        for (int j = 0; j < in - i; j++){
//            printf("*");
//        }
//        printf("\n");
//    }
    
//    int in;
//
//    scanf("%d", &in);
//
//    for (int i = 1; i <= in; i++){
//        for (int j = 1; j <= i; j++){
//            printf("*");
//        }
//        printf("\n");
//    }
    
//    int in;
//
//    scanf("%d", &in);
//    for (int i = 0; i < in; i++){
//        for (int j = 0; j < in; j++){
//            printf("*");
//        }
//        printf("\n");
//    }
    
//    int count, input;
//
//    scanf("%d", &count);
//
//    for(int i = 1 ; i <= count; i++){
//        scanf("%d", &input);
//
//        if(i == 1 || i == (count + 1) / 2 || i == count){
//            printf("%d ", input);
//        }
//    }
    
//    int num;
//
//    scanf("%d", &num);
//
//    for (int i = 2; i < num; i++){
//        if(num % i == 0){
//            printf("소수아님\n");
//            return 0;
//        }
//    }
//    printf("소수!\n");
    
//    int count, limnum, inpnum;
//
//    scanf("%d %d", &count , &limnum);
//
//    for( ;count > 0; count--){
//        scanf("%d", &inpnum);
//        if(inpnum < limnum){
//            printf("%d ", inpnum);
//        }
//    }
    
//    int input;
//
//    while (1) {
//        printf("자연수를 입력하세요(종료는 0):");
//        scanf("%d", &input);
//        if(input != 0){
//            if(input % 2 == 0){
//                printf("%d 는 짝수\n", input);
//            }
//            else{
//                printf("%d 는 홀수\n", input);
//            }
//        }
//        else{
//            printf("종료합니다!\n");
//            break;
//        }
//    }
    
//    int numl, sum = 0, inp = 0;
//
//    scanf("%d", &numl);
//
//    while(sum + inp <= numl){
//        sum += inp;
//        inp++;
//    }
//
//    printf("%d %d\n", inp, sum + inp);
    
//    int a[11];
//
//    for(int i = 0; i < 10; i++){
//        scanf("%d", &a[i]);
//    }
//
//    printf("5의 배수: ");
//    for(int i = 0; i < 10; i++){
//        if(a[i] % 5 == 0){
//            printf("%d ", a[i]);
//        }
//    }
//    printf("\n");
//    printf("7의 배수: ");
//    for(int i = 0; i < 10; i++){
//        if(a[i] % 7 == 0){
//            printf("%d ", a[i]);
//        }
//    }
//    printf("\n");
    
//    int count, input ,max = 0;
//
//    scanf("%d", &count);
//
//    for( ; count > 0; count--){
//        scanf("%d", &input);
//
//        if(input > max){
//            max = input;
//        }
//    }
//    printf("%d\n", max);
        
//    int a, b, output = 0;
//
//    scanf("%d %d", &a, &b);
//
//    for(int i = a; i <= b; i++){
//        if(i % 4 == 0){
//            output += i;
//        }
//    }
//    printf("%d\n", output);
    
//    int num, out = 0;
//
//    scanf("%d", &num);
//
//    for(int i = 1; i <= num ; i++){
//        if(i % 2 == 0){
//            out += i;
//        }
//    }
//    printf("%d\n", out);
    
//    int inputnum;
//
//    scanf("%d", &inputnum);
//    if(inputnum <= 9 && inputnum >= 1){
//        for(int i = 1; i <= 9 ; i++){
//            printf("%d * %d = %d\n", inputnum, i, inputnum * i);
//        }
//    }
    
//    int num, out = 0;
//
//    scanf("%d", &num);
//
//    for(int i = 1; i <= num; i++){
//        out += i;
//    }
//    printf("%d\n", out);
    
//    int num, i;
//    scanf("%d", &num);
//
//    for(i = num; i >= 1; i--){
//        printf("%d ", i);
//    }
//    printf("\n프로그램 종료\n");
    return 0;
}

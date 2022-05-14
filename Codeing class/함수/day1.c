//
//  main.c
//  codeup
//
//  Created by 조병진 on 2022/04/03.
//

#include <stdio.h>

int max(int a, int b, int c){
    return (a > b ? a : b) > c ? (a > b ? a : b) : c;
}

int min(int a, int b, int c){
    return (a < b ? a : b) < c ? (a < b ? a : b) : c;
}

int main() {
    int num1, num2, num3;
    
    scanf("%d %d %d", &num1, &num2, &num3);
    
    printf("가장 큰 수 : %d\n", max(num1, num2, num3));
    printf("가장 작은 수 : %d\n", min(num1, num2, num3));
    
    return 0;
}

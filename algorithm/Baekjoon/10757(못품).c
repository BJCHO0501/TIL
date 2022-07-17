#include <stdio.h>
#include <string.h>

void makeSpace(char* big, char* small) {
    char tmp[50];
    int gap = strlen(big) - strlen(small);
//    printf("gap: %d\n", gap);
    for(int i = 0; i < strlen(small); i++) {
        tmp[i] = small[i];
    }
//    printf("tmp: %s\n", tmp);
    for(int g = 0; g < gap; g++) {
        small[g] = '0';
    }
    for(int j = gap ; j < strlen(big); j++) {
        small[j] = tmp[j - gap];
//        printf("for small: %c\n", small[j]);
    }
    
//    printf("small: %s\n", small);
}

int main() {
    char a[50], b[50], resurt[50];
    int upNum = 0, intadd;
    int len;
    
    scanf("%s %s", a, b);
    
    if(strlen(a) > strlen(b)) {
        len = strlen(a);
        makeSpace(a, b);
        
    } else {
        len = strlen(b);
        makeSpace(b, a);
    }
    
    for(int i = len - 1; i >= 0; i--) {
        intadd = ((int)a[i] - 48) + ((int)b[i] - 48);
        resurt[i + 1] = (intadd + upNum) % 10;
        upNum = (intadd + upNum) / 10;
        if(i == 0 && upNum != 0) resurt[0] = upNum;
        else {
            resurt[0] = 'n';
        }
    }
    
    for(int j = 0; j <= len; j++) {
        if(resurt[j] != 'n') {
            printf("%d", resurt[j]);
        }
    }
}

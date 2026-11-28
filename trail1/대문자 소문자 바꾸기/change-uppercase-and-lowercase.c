#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char a[101];
    scanf("%s", a);
    for(int i =0; i < strlen(a); i++){
        if(a[i] < 91){//대문자일때
           a[i] += 32;
        }
        else{//소문자일때
            a[i] -= 32;
        }
    }
    printf("%s", a);
    //printf("%d", 'a'); 아스키코드 32의 차이
    //printf("%d", 'A');
    return 0;
}
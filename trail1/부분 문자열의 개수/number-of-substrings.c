#include <stdio.h>
#include <string.h>

int main() {
    char a[1001], b[3];
    int temp = 0;
    scanf(" %s", a);
    scanf(" %s", b);

    for(int i = 1; i < strlen(a); i++){
        if(a[i-1] == b[0] && a[i] == b[1]){
            temp++;
        }
        //printf("%c == %c %c == %c\n", a[i-1], b[0], a[i], b[1]);
    }
    printf("%d", temp);
    return 0;
}
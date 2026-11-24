#include <stdio.h>
#include <string.h>

int main() {
    char a[101];
    scanf("%s", a);

    for(int i = strlen(a) - 1; i >= 0; i--){
        if(i % 2 != 0){
            printf("%c", a[i]);
        }
    }
    return 0;
}
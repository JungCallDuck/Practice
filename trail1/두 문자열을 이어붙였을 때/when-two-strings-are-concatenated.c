#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101];
    char ab[202] = {""}, ba[202] = {""};
    scanf("%s", a);scanf(" %s", b);
    strcat(ab, a);strcat(ab, b);
    strcat(ba, b);strcat(ba, a);

    if(strcmp(ab, ba) == 0){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}

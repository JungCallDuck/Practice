#include <stdio.h>

int main() {
    int a, b, temp;
    scanf("%d %d", &a, &b);
    if(a < b){
        temp = b - a;
    }
    else{
        temp = a - b;
    }
    printf("%d", temp);
    return 0;
}
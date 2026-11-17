#include <stdio.h>

int main() {
    int n, temp = 0;
    scanf("%d", &n);

    while(1){
        if(n >= 1000){
            break;
        }
        if(n % 2 == 0){
            n = n * 3 + 1;
        }
        else if(n % 2 != 0){
            n = n * 2 + 2;
        }
        temp++;
    }

    printf("%d", temp);
    return 0;
}
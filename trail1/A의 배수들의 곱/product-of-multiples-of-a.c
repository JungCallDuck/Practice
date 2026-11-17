#include <stdio.h>

int main() {
    int a, b;
    int temp = 1;
    scanf("%d %d", &a, &b);

    for(int i = 1; i <= b; i++){
        if(i % a == 0){
            temp *= i;
        }
    }

    printf("%d", temp);
    return 0;
}

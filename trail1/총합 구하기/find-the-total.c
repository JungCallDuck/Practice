#include <stdio.h>

int main() {
    int a, b, temp = 0;
    scanf("%d %d", &a, &b);
    while (a <= b) {
        if(a % 6 == 0 && a % 8 != 0){
            temp += a;
        }
        a++;
    }
    printf("%d", temp);
    return 0;
}
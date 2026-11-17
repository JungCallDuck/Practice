#include <stdio.h>

int main() {
    int a, b;
    int ans = 0;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++){
        if((1920 % i == 0) && (2880 % i == 0)){
            ans = 1;
            break;
        }
    }

    printf("%d", ans);
    return 0;
}
#include <stdio.h>

int main() {
    int a;
    int ans = 1;
    for(int i = 0; i < 5; i++){
        scanf("%d", &a);
        if(a % 3 != 0){
            ans = 0;
        }
    }
    printf("%d", ans);
    return 0;
}
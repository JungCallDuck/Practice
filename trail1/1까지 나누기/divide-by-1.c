#include <stdio.h>

int main() {
    int n, temp = 0;
    scanf("%d", &n);
    int m = n;
    for(int i = 1; i <= m; i++){
        n /= i;
        temp++;
        if(n <= 1){
            break;
        }
    }
    printf("%d", temp);
    return 0;
}
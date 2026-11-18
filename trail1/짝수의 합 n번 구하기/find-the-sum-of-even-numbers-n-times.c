#include <stdio.h>

int main() {
    int n, a, b, temp = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        for(int j = a; j <= b; j++){
            if(j % 2 == 0){
                temp += j;
            }
        }
        printf("%d\n", temp);
        temp = 0;
    }

    return 0;
}
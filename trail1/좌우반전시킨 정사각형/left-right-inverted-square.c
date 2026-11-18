#include <stdio.h>

int main() {
    int a, n = 1;
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        for(int j = a; j > 0; j--){
            printf("%d ", j * n);
        }
        printf("\n");
        n++;
    }
    return 0;
}

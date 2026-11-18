#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < a; j++){
            for(int t = 0; t < a; t++){
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

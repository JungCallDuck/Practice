#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i = 0; i < a * 2; i++) {
        if (i % 2 != 0) { //홀수
            for (int j = 0; j < (i / 2) + 1; j++) {
                printf("* ");
            }
        }
        else { //짝수
            for (int j = a; j > (i+1) / 2 ; j--) {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}

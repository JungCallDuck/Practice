#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i = 0; i < a * 2; i++) {
        if (i % 2 != 0) {
            for (int j = 0; j < a - (i - 1) / 2; j++) {
                printf("* ");
            }
        }
        else {
            for (int j = 0; j < 1 + (i / 2); j++) {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}

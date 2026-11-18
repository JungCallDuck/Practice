#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a + 1; i++) {
        for (int j = 1; j <= a - i + 1; j++) {
            if (j != 1) {
                printf(" / ");
            }
            printf("%d * %d = %d", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}

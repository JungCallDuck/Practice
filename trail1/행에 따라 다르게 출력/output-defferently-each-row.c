#include <stdio.h>

int main() {
    int a, cnt = 0;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        for (int j = 0; j < a; j++) {
            if (i % 2 != 0) {
                cnt++;
                printf("%d ", cnt);
            }
            else {
                cnt += 2;
                printf("%d ", cnt);
            }
        }
        printf("\n");
    }
    return 0;
}

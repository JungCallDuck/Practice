#include <stdio.h>

int main() {
    int n;
    int asd[101];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &asd[i]);
    }

    for (int i = n-1; i >= 0; i--) {
        if (asd[i] % 2 == 0) {
            printf("%d ", asd[i]);
        }
    }

    return 0;
}

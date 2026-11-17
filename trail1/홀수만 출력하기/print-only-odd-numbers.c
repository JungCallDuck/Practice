#include <stdio.h>

int main() {
    int n, temp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        if (temp % 2 != 0 && temp % 3 == 0) {
            printf("%d\n", temp);
        }
    }
    return 0;
}

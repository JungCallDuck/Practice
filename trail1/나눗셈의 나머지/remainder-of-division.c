#include <stdio.h>

int main() {
    int a, b, hap = 0, cnt[10] = {0,};
    scanf("%d %d", &a, &b);

    while (1) {
        cnt[a % b]++;
        a /= b;
        if (a <= 1) {
            break;
        }
    }

    for (int i = 0; i < 10; i++) {
        hap += cnt[i] * cnt[i];
    }
    printf("%d", hap);
    return 0;
}

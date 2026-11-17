#include <stdio.h>

int main() {
    int a, b, c, d, e;
    scanf("%d", &a);
    scanf("%d %d %d %d", &b, &c, &d, &e);

    printf("%d\n%d\n%d\n%d", a > b, a > c, a > d, a > e);

    return 0;
}
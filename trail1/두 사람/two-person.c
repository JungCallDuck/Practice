#include <stdio.h>

int main() {
    int a, b;
    char s, e;

    scanf("%d %c", &a, &s);
    scanf("%d %c", &b, &e);

    printf("%d", (a >= 19 && s == 'M') || (b >= 19 && e == 'M'));
    return 0;
}
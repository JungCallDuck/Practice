#include <stdio.h>

int main() {
    double a, b;
    char c;
    scanf("%c\n%lf\n%lf", &c, &a, &b);
    printf("%c\n%.2lf\n%.2lf", c, a, b);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[9], b[9];
    int aa, bb;
    scanf("%s %s", a, b);

    printf("%d", atoi(a) + atoi(b));
    return 0;
}
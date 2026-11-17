#include <stdio.h>

int main() {
    int i = 0, a;
    scanf("%d", &a);

    while (i < a) {
        printf("*\n");
        i++;
    }
    return 0;
}
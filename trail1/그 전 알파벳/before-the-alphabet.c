#include <stdio.h>

int main() {
    char a;

    scanf("%c", &a);
    if (a == 'a') {
        a = 'z';
    }
    else {
        a -= 1;
    }
    printf("%c", a);
    return 0;
}

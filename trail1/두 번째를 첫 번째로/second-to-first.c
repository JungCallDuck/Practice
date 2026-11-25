#include <stdio.h>
#include <string.h>

int main() {
    char a[101];
    scanf("%s", a);
    char fi = a[0];
    char sec = a[1];

    for (int i = 1; i < strlen(a); i++) {
        if (a[i] == sec) {
            a[i] = fi;
        }
    }
    printf("%s", a);
    return 0;
}

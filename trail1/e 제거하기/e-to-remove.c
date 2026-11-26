#include <stdio.h>
#include <string.h>

int main() {
    char a[101];
    int temp;
    scanf("%s", a);
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == 'e') {
            temp = i;
            break;
        }
    }

    for (int i = temp; i < strlen(a); i++) {
        a[i] = a[i+1];
    }

    printf("%s", a);

    return 0;
}

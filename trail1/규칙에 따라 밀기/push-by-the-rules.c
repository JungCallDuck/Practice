#include <stdio.h>
#include <string.h>

int main() {
    char a[101], comd[101];
    char temp;
    scanf("%s", a);
    scanf(" %s", comd);
    for (int i = 0; i < strlen(comd); i++) {
        if (comd[i] == 'L') {
            temp = a[0];
            for (int j = 0; j <= strlen(a); j++) {
                a[j] = a[j + 1];
            }
            a[strlen(a)] = temp;
        }

        if (comd[i] == 'R') {
            temp = a[strlen(a)-1];
            for (int j = strlen(a) - 1; j > 0; j--) {
                a[j] = a[j - 1];
            }
            a[0] = temp;
        }
    }

    printf("%s", a);

    return 0;
}

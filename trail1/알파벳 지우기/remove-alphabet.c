#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char a[9], b[9];
    char qa[9] = {0,}, qb[9] = {0,};
    scanf(" %s", a);
    scanf(" %s", b);

    int cnt = 0;
    for (int i = 0; i < strlen(a); i++) {
        if ('0' <= a[i] && a[i] <= '9') {
            qa[cnt] = a[i];
            cnt++;
        }
    }

    cnt = 0;
    for (int i = 0; i < strlen(b); i++) {
        if ('0' <= b[i] && b[i] <= '9') {
            qb[cnt] = b[i];
            cnt++;
        }
    }
    //printf("%d", atoi(qa));
    //printf("\n%d", atoi(qb));
    printf("%d", atoi(qa) + atoi(qb));
    return 0;
}

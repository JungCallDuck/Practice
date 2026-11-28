#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char a[1001], b[1001], temp1[1000001], temp2[1000001];
    scanf("%s %s", a, b);
    strcat(temp1, a); strcat(temp1, b);
    strcat(temp2, b); strcat(temp2, a);

    printf("%d", atoi(temp1) + atoi(temp2));

    
    return 0;
}
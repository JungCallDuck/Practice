#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, temp;
    scanf("%d %d %d", &a, &b, &c);

    if((b < a && a < c) || (c < a && a < b)){
        printf("%d", a);
    }
    else if((a < b && b < c) || (c < b && b < a)){
        printf("%d", b);
    }
    else{
        printf("%d", c);
    }
    return 0;
}
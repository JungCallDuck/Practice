#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int W = N * N;
    printf("%d", W);
    if(N < 5){
        printf("\ntiny");
    }
    return 0;
}
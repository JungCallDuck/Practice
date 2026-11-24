#include <stdio.h>
#include <string.h>

int main() {
    int n, count = 0, avg = 0;
    char find;
    char arr[21][21];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }
    scanf(" %c", &find);

    for (int i = 0; i < n; i++) {
        if(arr[i][0] == find){
            avg += strlen(arr[i]);
            count++;
        }
    }

    printf("%d %.2lf", count, (double)avg / count);
    return 0;
}

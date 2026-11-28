#include <stdio.h>
#include <string.h>

int main() {
    int n, arr, temp = 0;
    char change[100001], ans[100001], tem;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr);
        temp += arr;
    }
    //printf("%d\n", temp);
    sprintf(change, "%d", temp);

    tem = change[0];
    for (int i = 1; i < strlen(change); i++) {
        ans[i-1] = change[i]; 
    }
    ans[strlen(change)-1] = tem;

    printf("%s", ans);

    return 0;
}

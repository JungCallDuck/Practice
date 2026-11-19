#include <stdio.h>

int main() {
    int n, arr[101], cnt = 0, temp;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf(" %d", &arr[i]);
        if(arr[i] == 2){
            cnt++;
            if(cnt == 3){
                temp = i;
            }
        }
    }

    printf("%d", temp);

    return 0;
}

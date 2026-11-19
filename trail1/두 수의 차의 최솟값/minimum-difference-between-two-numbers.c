#include <stdio.h>

int main() {
    int n, arr[101], min = 1000;
    scanf(" %d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if((arr[j] - arr[i]) < min && (arr[j] - arr[i]) > 0){
                min = arr[j] - arr[i];
            }
        }
    }
    printf("%d", min);
    return 0;
}

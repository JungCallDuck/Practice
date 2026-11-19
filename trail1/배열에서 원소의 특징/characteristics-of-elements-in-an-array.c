#include <stdio.h>

int main() {
    int temp = 0, arr[11];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        if(arr[i] % 3 == 0){
            temp = arr[i-1];
            break;
        }
    }
    printf("%d", temp);

    return 0;
}

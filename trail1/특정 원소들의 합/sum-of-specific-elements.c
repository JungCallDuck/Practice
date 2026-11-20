#include <stdio.h>

int main() {
    int arr[5][5], temp = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
            if(i >= j){
                temp += arr[i][j];
            }
        }
    }

    printf("%d", temp);
    return 0;
}

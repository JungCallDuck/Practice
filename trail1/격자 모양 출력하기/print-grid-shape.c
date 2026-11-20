#include <stdio.h>

int main() {
    int n, m, temp1, temp2;
    int arr[11][11] = {0,};
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {
        scanf(" %d %d", &temp1, &temp2);
        arr[temp1-1][temp2-1] = temp1 * temp2;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

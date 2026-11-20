#include <stdio.h>

int main() {
    int n, m, arr1[11][11], arr2[11][11], ans[11][11] = {0, };
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf(" %d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf(" %d", &arr2[i][j]);

            if (arr2[i][j] == arr1[i][j]) {
                ans[i][j] = 0;
            }
            else{
                ans[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}

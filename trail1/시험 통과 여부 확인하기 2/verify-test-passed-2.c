#include <stdio.h>

int main() {
    int n, point = 0, temp = 0;
    int student[4];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < 4; j++){
            scanf("%d", &student[j]);
            point += student[j];
        }
        if((point / 4) >= 60){
            printf("pass\n");
            temp++;
            point = 0;
        }
        else{
            printf("fail\n");
            point = 0;
        }
    }

    printf("%d", temp);
    return 0;
}
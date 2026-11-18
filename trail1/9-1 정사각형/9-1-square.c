#include <stdio.h>

int main() {
    int a, cnt = 9;
    scanf("%d", &a);

    for(int i = 0 ; i < a; i++){
        for(int j = 0 ; j < a; j++){
            if(cnt == 0){
                cnt = 9;
            }

            printf("%d", cnt);
            cnt--;
        } 
        printf("\n");
    } 
    return 0;
}
#include <stdio.h>

int main() {
    int a, asc = 65;
    scanf("%d", &a);

    for(int i = 0; i < a; i++){
        for(int j = 1; j <= i; j++){
            printf("  ");
        }
        for(int j = a; j > i; j--){
            printf("%c ", asc);
            if(asc == 90){
                asc = 65;
            }
            else{
                asc++;
            }
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char arr[21];
    int sh = 100, lo = 0;

    for(int i =0; i < 3; i++){
        scanf("%s", arr);
        if(strlen(arr) > lo){
            lo = strlen(arr);
        }

        if(strlen(arr) < sh){
            sh = strlen(arr);
        }
    }
    //printf("%d\n", sh);printf("%d\n", lo);
    printf("%d", lo - sh);
    return 0;
}

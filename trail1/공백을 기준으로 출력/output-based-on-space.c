#include <stdio.h>
#include <string.h>

int main() {
    char arr1[101], arr2[101];
    fgets(arr1, 101, stdin);
    fgets(arr2, 101, stdin);

    for(int i = 0; i < strlen(arr1)-1; i++){
        if(arr1[i] != ' '){
            printf("%c", arr1[i]);
        }
    }
    for(int i = 0; i < strlen(arr2)-1; i++){
        if(arr2[i] != ' '){
            printf("%c", arr2[i]);
        }
    }

    return 0;
}
#include <stdio.h>

int main() {
    int age, temp = 0, arr = 0;

    while (1) {
        scanf("%d", &age);
        if(20 > age || age > 29){
            break;
        }
        temp += age;
        arr++;
    }
    printf("%.2lf", (double)temp / arr);
    return 0;
}
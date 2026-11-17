#include <stdio.h>

int main() {
    int h, w, bmi;
    scanf("%d %d", &h, &w);
    bmi = (10000 * w) / (h * h);
    printf("%d", bmi);
    if(bmi >= 25){
        printf("\nObesity");
    }
    return 0;
}
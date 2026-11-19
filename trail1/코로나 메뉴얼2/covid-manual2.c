#include <stdio.h>

int main() {
    char cold;
    int tem, cnt[5] = {0,};
    for(int i = 0; i < 3; i++){
        scanf(" %c %d", &cold, &tem);

        if (cold == 'Y' && tem >= 37) {
            cnt[0]++;
        }
        else if(tem >= 37){
            cnt[1]++;
        }
        else if(cold == 'Y'){
            cnt[2]++;
        }
        else{
            cnt[3]++;
        }
    }

    for(int i = 0; i < 4; i++){
        printf("%d ", cnt[i]);
    }
    if(cnt[0] >= 2){
        printf("E");
    }
    
    return 0;
}

/*****
744041 綾本 公平
*****/

#include <stdio.h>

int main() {

    int min;
    int max;

    printf("最小値: ");
    scanf("%d",&min);

    printf("最大値: ");
    scanf("%d",&max);

    int num;
    
    for (;;) {
        printf("判定値: ");
        scanf("%d",&num);
        if (max < num || min > num) break;
    }

    printf("終了\n");
    
    return 0;
}

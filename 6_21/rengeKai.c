/*****
744041 綾本 公平
*****/

#include <stdio.h>

int main() {

    int num_01;
    int num_02;

    printf("一つ目の範囲値: ");
    scanf("%d",&num_01);

    printf("二つ目の範囲値: ");
    scanf("%d",&num_02);

    int max;
    int min;
    
    if (num_01 > num_02) {
        max = num_01;
        min = num_02;
    } else if (num_02 > num_01) {
        max = num_02;
        min = num_01;
    }
    
    int hardstyle;
    
    for (;;) {
        printf("判定値: ");
        scanf("%d",&hardstyle);
        if (max < hardstyle || min > hardstyle) break;
    }

    printf("終了\n");
    
    return 0;
}

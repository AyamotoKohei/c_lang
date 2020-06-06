/*****
744041 綾本 公平
*****/

#include <stdio.h>

int main() {

    int number;
    int sum = 0;
    int ave = 0;
    int hardstyle = 1;
    
    for (;;) {
        printf("数値を入力してください（0を入力で計算を終了）: ");
        scanf("%d",&number);
        if (number != 0) {
            sum = sum + number;
            ave = sum / hardstyle;
            hardstyle++;
        } else if (number == 0) break;
    }

    printf("平均は%d\n",ave);
    
    return 0;
}

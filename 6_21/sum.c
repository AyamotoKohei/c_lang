/*****
744041 綾本 公平
*****/

#include <stdio.h>

int main() {

    int number;
    int sum = 0;

    for (;;) {
        printf("数値を入力してください（0を入力で計算を終了）: ");
        scanf("%d",&number);
        if (number != 0) {
            sum = sum + number;
        } else if (number == 0) break;
    }

    printf("合計は%d\n",sum);
    
    return 0;
}

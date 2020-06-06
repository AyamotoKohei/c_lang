/*****
 入力された2つの変数の和を表示する
 g1744041 Kohei Ayamoto
*****/

#include <stdio.h>

int main() {
    int value_01;
    printf("input 1st number:");
    scanf("%d", &value_01);
    printf("%d\n", value_01);

    int value_02;
    printf("input 2nd number:");
    scanf("%d", &value_02);
    printf("%d\n", value_02);

    printf("%d + %d = %d\n",value_01, value_02,  value_01+value_02);
    printf("%d - %d = %d\n",value_01, value_02,  value_01-value_02);
    printf("%d * %d = %d\n",value_01, value_02,  value_01*value_02);
    printf("%d / %d = %d\n",value_01, value_02,  value_01/value_02);

    
    return 0;
}

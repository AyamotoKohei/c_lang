/*****
 入力された2つの変数の和を表示する
 g1744041 Kohei Ayamoto
*****/

#include <stdio.h>

int main() {
    int value_01;
    printf("1st number:");
    scanf("%d", &value_01);
    printf("%d\n", value_01);

    int value_02;
    printf("2nd number:");
    scanf("%d", &value_02);
    printf("%d\n", value_02);

    int value_03;
    printf("3rd number:");
    scanf("%d", &value_03);
    printf("%d\n", value_03);

    int answer;
    answer = (value_01+value_02)*value_03;
    
    printf("answer = %d\n" , answer);
      
    return 0;
}

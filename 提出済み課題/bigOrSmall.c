/*****
    treasure.c
    宝箱を開けてみる
    Kohei Ayamoto 
*****/

#include <stdio.h>

int main() {
    int number_1st;
    int number_2nd;

    printf("１つ目の値: ");
    scanf("%d", &number_1st);

    printf("２つ目の値: ");
    scanf("%d", &number_2nd);
    
    if (number_1st > number_2nd) {
        printf("%dは%dより大きい\n", number_1st, number_2nd);
    } else if (number_1st == number_2nd) {
        printf("%dと%dは等しい\n", number_1st, number_2nd);
    } else {
        printf("%dは%dより小さい\n", number_1st, number_2nd);
    }
    return 0;
}


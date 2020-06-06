/*****
    treasure.c
    宝箱を開けてみる
    Kohei Ayamoto 
*****/

#include <stdio.h>

int main() {
    int number;

    printf("input number: ");
    scanf("%d", &number);

    if (number%2 == 1) {
        printf("odd\n");
    } else {
        printf("even\n");
            }
    return 0;
}

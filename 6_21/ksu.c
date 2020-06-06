/*****
744041 綾本 公平
*****/

#include <stdio.h>

int main() {

    int num;

    printf("回数を入力してください: ");
    scanf("%d",&num);

    int outer = 0;
    int inner = 0;

    for (;;) {
        while (inner < num) {
            printf("KSU ");
            inner++;
        }
        printf("\n");
        outer++;
        if  (outer >=  num) break;
        inner = 0;
    }

    return 0;
}

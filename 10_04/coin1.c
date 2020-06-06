/***
744041 綾本 公平
***/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, total;
    int n[6] = {500, 100, 50, 10, 5, 1}; //硬貨の種類
    int x[] = {};                        //硬化の数

    scanf("%d", &total);

    for (i = 0; i <= 5; i++)
    {
        //printf("%d\n", n[i]);
        x[i] = total / n[i];
        total = total % n[i];
        //printf("n = %d\n", n[i]);
    }

    int y[6] = {500, 100, 50, 10, 5, 1};

    for (i = 0; i <= 5; i++)
    {
        printf("%d:%d ", y[i], x[i]);
    }
    printf("\n");
    exit(0); //プログラムを終了
}
/*****
744041 綾本 公平
*****/

#include <stdio.h>

int main()
{

    int max[100] = {};
    int num;
    int x;

    printf("データの個数を入力してください: ");
    scanf("%d", &num);
    for (x = 0; x < num; x++)
    {
        printf("整数値を入力してください: ");
        scanf("%d", &max[x]);
    }

    int a = max[0];

    for (x = 1; x < num; x++)
    {
        if (max[x] > a)
        {
            a = max[x];
        }
    }

    printf("最大値は%dです。\n", a);

    return 0;
}
/*****
744041 綾本 公平
*****/

#include <stdio.h>

int main()
{

    int num[5] = {163, 157, 176, 180, 166};
    int i = -1;

    while (0 > i || i > 4)
    {
        printf("番号？: ");
        scanf("%d", &i);
    }

    printf("%d番の身長は%dcmです。\n", i, num[i]);

    return 0;
}

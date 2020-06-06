/***
744041 綾本 公平
***/
#include <stdio.h>
#define NUM 5
int main()
{
    int i;
    int date1[NUM], date2[100];

    for (i = 0; i < 100; i++)
    {
        date2[i] = 0;
    }

    for (i = 0; i < NUM; i++)
    {
        scanf("%d", &date1[i]);
    }

    for (i = 0; i < NUM; i++)
    {
        date2[date1[i]] = 1;
    }

    for (i = 0; i < 100; i++)
    {
        if (date2[i] == 1)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
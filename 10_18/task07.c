/***
744041 綾本 公平
***/
#include <stdio.h>
#define NUM 5
int main()
{
    int i, max = 0, n = 0;
    int date1[NUM], date2[NUM];

    for (i = 0; i < NUM; i++)
    {
        scanf("%d", &date1[i]);
    }

    for (i = 0; i < NUM; i++)
    {
        if (date1[i] > max)
        {
            max = date1[i];
        }
    }

    for (i = 4; i >= 0; i--)
    {
        if (date1[i] < max)
        {
            date2[n] = date1[i];
            n++;
        }
    }
   
    printf("max : %d\n", max);
    for (i = 0; i < n; i++)
    {
        printf("date2[%d] : %d\n", i, date2[i]);
    }

    return 0;
}
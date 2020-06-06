/***
744041 綾本 公平
***/
#include <stdio.h>
#define NUM 5
int main()
{
    int i, n = 1;
    int date1[NUM], date2[NUM];

    for (i = 0; i < NUM; i++)
    {
        scanf("%d", &date1[i]);
    }

    for (i = 0; i < NUM; i++)
    {
       date2[i] = date1[NUM-n];
       n++;
    }
    
    for (i = 0; i < NUM; i++)
    {
        printf("date2[%d] : %d\n",i, date2[i]);
    }

    return 0;
}
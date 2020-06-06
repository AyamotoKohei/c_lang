/***
744041 綾本 公平
***/
#include <stdio.h>

int main()
{
    int i;
    int date[5];

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &date[i]);
    }
    
    for (i = 4; i >= 0; i--)
    {
        printf("date[%d] : %d\n",i, date[i]);
    }

    return 0;
}

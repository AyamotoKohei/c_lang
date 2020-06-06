/***
744041 綾本 公平
***/
#include <stdio.h>

int main()
{
    int i, max = 0;
    int date[5];

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &date[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (date[i] > max)
        {
            max = date[i];
        }
    }

    printf("max : %d\n", max);
    return 0;
}

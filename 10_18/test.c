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
    
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", date[i]);
    }

    return 0;
}

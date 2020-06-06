/***
744041 綾本 公平
***/
#include <stdio.h>

int main()
{
    int i, max = 0, numb;
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
            numb = 1;
        }
        else if (date[i] == max)
        {
            numb++;
        }
    }

    printf("max : %d ( %d 個)\n", max, numb);
    return 0;
}

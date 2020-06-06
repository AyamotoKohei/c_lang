/***
744041 綾本 公平
***/
#include <stdio.h>
#define VER 3
#define SID 5
int main()
{
    int date [VER][SID];
    int v, s, sum = 0;

    for (v = 0; v < VER; v++)
    {
        for (s = 0; s < SID; s++)
        {
            scanf("%d\n", &date[v][s]);
            //printf("%d\s", date[v][s]);
        }
    }

    for (v = 0; v < VER; v++)
    {
        for (s = 0; s < SID; s++)
        {
            printf("%d ", date[v][s]);
            sum = sum + date[v][s];
        }
        printf(": %d\n", sum);
        sum = 0;
    }
    printf("-- -- -- -- -- \n");
    
    for (s = 0; s < SID; s++)
    {
        for (v = 0; v < VER; v++)
        {
            sum = sum + date[v][s];
        }
        printf("%d ", sum);
        sum = 0;
    }

    printf("\n");
    
    return 0;
}
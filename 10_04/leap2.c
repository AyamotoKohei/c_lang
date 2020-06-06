/***
744041 綾本 公平
***/
#include <stdio.h>
int main()
{
    int year, leapflag = 0;
    scanf("%d", &year);
    printf("%d", year);

    if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))){
        leapflag = 1;
    }

    if (leapflag == 1)
    {
        printf(" leap");
    }
    printf("\n");
    return 0;
}
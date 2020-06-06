#include <stdio.h>
int main()
{
    int year, leapflag = 0;
    scanf("%d", &year);
    printf("%d", year);

    if (year % 4 == 0){
        if (year % 100 != 0){
            leapflag = 1;
        }else{
            if (year % 400 == 0){
                leapflag = 1;
            }
        }
    }

    if (leapflag == 1)
        printf(" leap");
    printf("\n");
    return 0;
}
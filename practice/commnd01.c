#include <stdio.h>
#include <math.h>

int main()
{
    int kekka = 1;
    double i;

    for (i = 1; i <= 11; i++)
    {
        printf("2の%f乗は%fです。\n", i, pow(2,i));
    }
    return 0;
}

//kekka = kekka * i;

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, number;

    scanf("%d", &number);
    //printf("%d\n", number);

    for (i = 2; i < number; i++)
    {
        if (number % i == 0) //割り切れた
        {
            printf("%d is not prime\n", number);
            exit(0); //プログラムを終了
        }
    }
    
    //ループを回りきった
    printf("%d is prime\n", number);
    exit(0); //プログラムを終了
}
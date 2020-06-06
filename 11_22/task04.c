/***
744041 綾本 公平
***/
#include <stdio.h>
#include <string.h>

int factorial (int n1, double n2){
    int f = n1 * n2;
    return f;
}

int main()
{
int n1, fac;
double n2;

printf("価格 = ");
scanf("%d", &n1);
printf("消費税率 = ");
scanf("%lf", &n2);

fac = factorial(n1, n2);

printf("税込価格 = %d\n", fac);

    return 0;
}
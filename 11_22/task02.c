/***
744041 綾本 公平
***/
#include <stdio.h>
#include <string.h>

int factorial (int s1, int s2){
    int f;

    if(s1 <= s2){
        f = s2;
    }else{
        f = s1;
    }
    return f;
}

int main()
{
int n1, n2, fac;

printf("n1 = ");
scanf("%d", &n1);
printf("n2 = ");
scanf("%d", &n2);

fac = factorial(n1, n2);

printf("max = %d\n", fac);

    return 0;
}
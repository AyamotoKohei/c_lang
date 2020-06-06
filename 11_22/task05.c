/***
744041 綾本 公平
***/
#include <stdio.h>
#include <string.h>

int factorial (int n1, int n2){
    int s[2] = {n1, n2};
    int f, i, n;

for(n = 0; n < 2; n++){
    for(i = s[n] - 1; i > 1; i--){
    s[n] *= i;
    }
}
    f = s[0] + s[1];
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

printf("factorial = %d\n", fac);

return 0;
}
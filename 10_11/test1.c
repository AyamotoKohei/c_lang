/***
744041 綾本 公平
***/
#include <stdio.h>
int main()
{
    double d, e;
    
    e = 0.1e-12;
    d = 0.0;

    while (1)
    {
        if ((d > 10.0-e)&&(d < 10.0+e)) break;
        printf("%f\n", d);
        d += 0.1;

    }
    return 0;
}
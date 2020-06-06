/***
744041 綾本 公平
***/
#include <stdio.h>
#include <string.h>

int main()
{
    // 数列の宣言
    int data1[100];
    int data2[100];
    int n, x;

    scanf("%d", &x);
    
    for(n = 0; n < x; n++){
    scanf("%d", &data1[n]);
    }

    for(n = 0; n < x; n++){
    data2[n] = data1[x - (n + 1)];
    }
    
    for(n = 0; n < x; n++){
    printf("%d ", data2[n]);
    }

    printf("\n");

    return 0;
}
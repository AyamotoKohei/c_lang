/***
744041 綾本 公平
***/
#include <stdio.h>
#include <string.h>

int main()
{
    // 文字列の宣言
    int data1[4];
    int n;

    for(n = 0; n < 4; n++){
    scanf("%d", &data1[n]);
    }
    
    for(n = 3; n >= 0; n--){
    printf("%d", data1[n]);
    }

    return 0;
}
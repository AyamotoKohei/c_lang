/***
744041 綾本 公平
***/
#include <stdio.h>

int main()
{
    //　文字列の宣言
    char date[100];
    int n;
    
    // 代入
    scanf("%s", date);

    n  = 0;
    while(date[n] != '\0'){
        n ++;
    }
    // 変換文字は %c
    // 変換行列は %s
    printf("%d\n", n);

    return 0;
}
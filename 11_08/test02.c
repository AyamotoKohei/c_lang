/***
744041 綾本 公平
***/
#include <stdio.h>

int main()
{
    //　文字列の宣言
    char date[5];
    
    // 代入
    date[0] = 'H';
    date[1] = 'e';
    date[2] = 'l';
    date[3] = 'l';
    date[4] = 'o';
    //date[5] = '\0';
    
    // 変換文字は %c
    // 変換行列は %s
    printf("%s\n", date);

    return 0;
}
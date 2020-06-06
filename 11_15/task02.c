/***
744041 綾本 公平
***/
#include <stdio.h>
#include <math.h>
#include <handy.h>
#include <string.h>

int main()
{
    // 変数を定義
    int x, n;
    double y, a, b;
    // 文字列を定義
    char data1[100];
    char data2[2] = " ";

    scanf("%s", data1);
    // サイズ指定
    HgOpen(400.0, 400.0);
    HgSetFont(HG_T, 40);

    a = 1.3;
    b = 5.0;
    n = 0;
    data2[1] = '\0';
    
    for(x = -100; x < 100; x = x + 20){
        y = a * x + b;
        data2[0] = data1[n];
        HgText(x + 200.0, y + 200.0, data2);
        n++;
        if (data1[n] == '\0'){
                break;
        }
        data2[0] = '\0'; 
    }

    HgGetChar();
    HgClose();

    return 0;
}
/***
744041 綾本 公平
***/
#include <stdio.h>
#include <math.h>
#include <handy.h>
#include <string.h>

#define X 50
#define Y 200

int main()
{
    // 変数を定義
    int n, i, s;
    int x[10];
    int y[10];
    // 文字列を定義
    char data[100];
    char data0[10][2];

    scanf("%s", data);
    // サイズ指定
    HgOpen(400.0, 400.0);
    HgSetFont(HG_T, 40);
    
    for(n = 0; n < 10; n++){
        data0[n][0] = data[n];
        data0[n][1] = '\0'; 
        x[n] = X + (n * 30);
        y[n] = Y;
        if (data[n] == '\0'){           
            break;
        } 
    }

    for(n = 0; n < 9; n++){
        for(i = 0; i < 100; i = i + 1){
            HgClear();
            y[n] = y[n] - 1;
            for(s = 0; s < 9; s++){
                HgText(x[s], y[s], &data0[s][0]);
            }
            HgSleep(0.02);
        }
    }

    HgGetChar();
    HgClose();

    return 0;
}
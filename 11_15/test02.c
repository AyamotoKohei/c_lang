/***
744041 綾本 公平
***/
#include <stdio.h>
#include <string.h>

int main()
{
    // 文字列の宣言
    char outdata[100] = "";
    char indata1[100] = "";
    char indata2[100] = "";
    char enddata[4] = "end";
    int n;

    for (;;)
    {
        // outdateの先頭に空白を挿入
        strcat(outdata, " ");
        // indateに文字列を入れる
        scanf("%s", indata1);
        // end判定
        if (strcmp(indata1, enddata) == 0){
            break;
            }

        for (n = 0; n < strlen(indata1); n++){
            indata2[n] = indata1[strlen(indata1) - (n + 1)];
            //printf("%s\n", indata2);
        }

        indata2[strlen(indata2)+ 1] = '\0';

        // indateの文字列をoutdateに入れる
        strcat(outdata, indata2);
        // indateの中を初期化
        for(n = 0; n < 100; n++){
            if (indata1[n] == '\0'){
                break;
            }
            indata1[n] = '\0';
        }

        for(n = 0; n < 100; n++){
            if (indata2[n] == '\0'){
                break;
            }
            indata2[n] = '\0';
        }

        //printf("%s\n", indata2);
    }

    printf("%s\n", outdata);

    return 0;
}
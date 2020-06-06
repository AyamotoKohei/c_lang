/***
744041 綾本 公平
***/
#include <stdio.h>
#include <string.h>

int main()
{
    //　文字列の宣言
    char outdate[21] = "";
    char indate[21] = "";
    char enddate[4] = "end";
    int n, x1, x2;

    for(;;){
        // outdateの先頭に空白を挿入
        strcat(outdate," ");
        // indateに文字列を入れる
        scanf("%s", indate);
        // end判定
        if(strcmp(indate,enddate) == 0){
            break;
        }
        // 文字が20バイトを超えるか判定
        x1 = strlen(indate);
        x2 = strlen(outdate);
        if (x1 + x2 >= 20){
            printf("#%s#\n", outdate);
            // outdateの中を初期化
            for(n = 0; n < 20; n++){
                if (outdate[n] == '\0'){
                    break;
                }
                outdate[n] = '\0';
            }
        }        
        // indateの文字列をoutdateに入れる
        strcat(outdate,indate);
        // indateの中を初期化
        for(n = 0; n < 20; n++){
            if (indate[n] == '\0'){
                break;
            }
            indate[n] = '\0';
        }

    }

    printf("#%s#\n", outdate);

    return 0;
}
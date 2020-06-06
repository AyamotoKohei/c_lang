/***
744041 綾本 公平
***/
#include <stdio.h>
#include <string.h>

int main()
{
    // 文字列の宣言
    char outdate[100] = "";
    char indate[100] = "";
    char enddate[4] = "end";
    int n;

    for(;;){
        // indateに文字列を入れる
        scanf("%s", indate);
        // end判定
        if(strcmp(indate,enddate) == 0){
            break;
        }
        // indateの文字列をoutdateに入れる
        strcat(outdate,indate);
        // indateの中を初期化
        for(n =0; n < 100; n++){
            if (indate[n] == '\0'){
                break;
            }
            indate[n] = '\0';
        }
    }

    printf("%s\n", outdate);

    return 0;
}
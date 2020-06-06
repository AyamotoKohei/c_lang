/***
744041 綾本 公平
***/
#include <stdio.h>
#include <ctype.h>

int main()
{
    //　文字列の宣言
    char date[100];
    int alp = 0, num = 0, el = 0, x; 
    
    scanf("%s", date);

    for(x = 0; x < 100; x ++){
        //文字判定
        if(isalpha(date[x]) != 0){
            alp++;
        //数値判定
        }else if(isdigit(date[x]) != 0){
            num++;
        //他の制御文字と区別、NULL文字でループを終了
        }else if (date[x] == '\0'){ 
            break;
        //他の文字を判定
        }else{
            el++;
        }  
    }

    printf("Alpha=%d Nunmber=%d Else=%d\n", alp, num, el);

    return 0;
}
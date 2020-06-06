/*****
744041 綾本 公平
*****/

#include <stdio.h>

int main() {

    int num[5] = {163, 157, 176, 180, 166};
    int a;
    int i = -1;

    while (0 > i || i > 4) { 
    printf ("学籍番号を入力してください: ");
    scanf ("%d",&a);
    i = a - 54400;
    }
    
    printf ("%d番の身長は%dcmです。\n",a, num[i]);
    
    return 0;
}

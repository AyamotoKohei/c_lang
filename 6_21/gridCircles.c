/*****
744041 綾本 公平
*****/

#include <stdio.h>
#include <handy.h>

int main() {

    int x;
    int y;
    int r;
    int d;
    int num;

    printf("整数値を入力してください; ");
    scanf("%d",&num);

    d = 480 / num;
    r = d /2;
    x = r;
    y = r;
    
    HgOpen (480,480);
    
    for (;;) {
        while (480 > x) {
            HgCircle (x, y, r);
            x = x + d;
        }

        y = y + d;
        x = r;
        
        if (y > 480) break;
    }
    
    HgGetChar();
    HgClose();

    return 0;
}

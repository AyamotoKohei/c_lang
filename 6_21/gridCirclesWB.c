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
    int cir = 1;
    
    printf("整数値を入力してください; ");
    scanf("%d",&num);

    d = 480 / num;
    r = d /2;
    x = r;
    y = r;
    
    HgOpen (480,480);
    
    for (;;) {
        while (480 > x) {
            if (cir % 2 == 0) {
                HgSetFillColor (HG_BLACK);
                HgCircleFill (x, y, r, 1);
            } else {
                HgCircle (x, y, r);
            }
            x = x + d;
            cir++;
        }

        y = y + d;
        x = r;
        cir = 1;
        if (y > 480) break;
    }
    
    HgGetChar();
    HgClose();

    return 0;
}

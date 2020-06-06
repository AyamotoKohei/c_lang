/*****
744041 綾本 公平
*****/

#include <stdio.h>
#include <handy.h>

int main() {

    int x;
    int y;

    printf("x: ");
    scanf("%d",&x);

    printf("y: ");
    scanf("%d",&y);
    
    HgOpen (600,400);

    HgBox (150, 100, 300, 200);
    
    if (150 < x && x < 450 && 100 < y && y < 300) {
        HgSetFillColor (HG_RED);
    } else {
        HgSetFillColor (HG_BLUE);
    }

    HgCircleFill (x, y, 50, 1);
    
    HgGetChar();
    HgClose();

    return 0;
}

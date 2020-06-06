/*****
744041 Kohei Ayamoto
*****/

#include <stdio.h>
#include <handy.h>

int main() {
    int sx;
    int sy;
    int sr;

    printf("x座標: ");
    scanf("%d",&sx);
    printf("y座標: ");
    scanf("%d",&sy);
    printf("半径: ");
    scanf("%d",&sr);

    int X_1;
    X_1 = 200 - sr;
    int X_2;
    X_2 = X_1 * X_1;
    int Y_1;
    Y_1 = 200 - sy;
    int Y_2;
    Y_2 = Y_1 * Y_1;
    int main;
    main = X_2 + Y_2;
    int sub;
    sub = (150*sr)*(150*sr);

    HgOpen(400, 400);
    HgCircle(200, 200, 150);

    if (main < sub) {
        HgSetFillColor(HG_RED);
    } else if (main >= sub) {
        HgSetFillColor(HG_BLUE);
    }

    HgCircleFill(sx, sy, sr, 1);
        
    HgGetChar();
    HgClose();
    return 0;
}

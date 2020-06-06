/***
744041 綾本 公平
***/
#include <stdio.h>
#include <stdlib.h>
#include <handy.h>
int main()
{

    int i, total;
    int n[6] = {500, 100, 50, 10, 5, 1}; //硬貨の種類
    int x[6] = {};
    int z[6] = {335, 250, 175, 115, 60, 15};

    scanf("%d", &total);

    for (i = 0; i <= 5; i++)
    {
        x[i] = total / n[i];
        total = total % n[i];
        //printf("n = %d\n", n[i]);
    }

    int y[6] = {500, 100, 50, 10, 5, 1};

    HgOpen(400, 400);

    //500円玉
    HgSetFillColor(HG_YELLOW);
    HgCircleFill(50, 350, 40, 0);

    //100円玉
    HgSetFillColor(HG_LGRAY);
    HgCircleFill(50, 265, 35, 0);

    //50円玉
    HgSetFillColor(HG_LGRAY);
    HgCircleFill(50, 190, 30, 0);
    HgSetFillColor(HG_WHITE);
    HgCircleFill(50, 190, 10, 0);

    //10円玉
    HgSetFillColor(HG_BROWN);
    HgCircleFill(50, 130, 25, 0);

    //5円玉
    HgSetFillColor(HG_YELLOW);
    HgCircleFill(50, 75, 20, 0);
    HgSetFillColor(HG_WHITE);
    HgCircleFill(50, 75, 5, 0);

    //１円玉
    HgSetFillColor(HG_LGRAY);
    HgCircleFill(50, 30, 10, 0);

    HgSetColor(HG_BLACK);
    HgSetFont(HG_G, 20);

    for (i = 0; i <= 6; i++)
    {
        HgText(100, z[i], "%d円玉は%d枚です。", y[i], x[i]);
    }

    HgGetChar();
    HgClose();
    return 0; //プログラムを終了
}
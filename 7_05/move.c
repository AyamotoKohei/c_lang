/*****
    move.c
    円を動かしてみる
    M.Minakuchi
*****/
#include <stdio.h>
#include <handy.h>

#define WINDOWSIZE 400
#define RADIUS 50

int main()
{
    int x; // 中心のx座標

    HgOpen(WINDOWSIZE, WINDOWSIZE);

    for (x = 0; x < WINDOWSIZE; x += 1)
    {
        HgClear(); // ウィンドウを消去する
        HgCircle(x, WINDOWSIZE / 2, RADIUS);
        HgSleep(0.05);
    }

    HgGetChar();
    HgClose();
    return 0;
}
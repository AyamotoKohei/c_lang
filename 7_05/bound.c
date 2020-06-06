/*****
744041 綾本 公平 
*****/
#include <stdio.h>
#include <handy.h>

#define WINDOWSIZE 400
#define RADIUS 50

int main()
{
    int x = 0; // 中心のx座標
    int y = 0; // 中心のy座標
    int vx;
    int vy;

    HgOpen(WINDOWSIZE, WINDOWSIZE);

    vx = 5;
    vy = 3;

    for (;;)
    {
        HgClear();
        HgCircle(x, y, RADIUS);
        HgSleep(0.05);
        x = x + vx;
        y = y + vy;
        if (x >= WINDOWSIZE)
        {
            vx = -5;
            vy = -3;
        }
        if (x == 0)
        {
            vx = 5;
            vy = 3;
        }
    }

    HgGetChar();
    HgClose();
    return 0;
}
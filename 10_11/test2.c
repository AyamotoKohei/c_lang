/***
744041 綾本 公平
***/
#include <stdio.h>
#include <math.h>
#include <handy.h>
int main()
{
    int x;
    double y, a, b; // y = ax + b

    HgOpen(400.0, 400.0);
    HgSetWidth(1.0);
    HgSetColor(HG_BLACK);

    HgSetFillColor(HG_WHITE);
    HgLine(5.0, 200.0, 395.0, 200.0);
    HgLine(200.0, 5.0, 200.0, 395.0);

    a = 0.3;
    b = 20.0;
    HgSetColor(HG_RED);
    for (x = -190; x < 190; x++)
    {
        y = a * x + b;
        HgBox(x + 200.0, y + 200.0, 1.0, 1.0);
    }

    HgGetChar();
    HgClose();
    return 0;
}
/***
744041 綾本 公平
***/
#include <stdio.h>
#include <math.h>
#include <handy.h>
int main()
{
    double θ;
    double x = 10, y;

    HgOpen(400.0, 400.0);
    HgSetWidth(1.0);
    HgSetColor(HG_BLACK);

    HgSetFillColor(HG_WHITE);
    HgLine(5.0, 200.0, 395.0, 200.0);
    HgLine(200.0, 5.0, 200.0, 395.0);

    for (int n = 0; n < 100; n++)
    {
        if (n % 9 == 0)
        {
            HgSetColor(HG_RED);
        }
        if (n % 9 == 1)
        {
            HgSetColor(HG_GREEN);
        }
        if (n % 9 == 2)
        {
            HgSetColor(HG_BLUE);
        }
        if (n % 9 == 3)
        {
            HgSetColor(HG_YELLOW);
        }
        if (n % 9 == 4)
        {
            HgSetColor(HG_PINK);
        }
        if (n % 9 == 5)
        {
            HgSetColor(HG_PURPLE);
        }
        if (n % 9 == 6)
        {
            HgSetColor(HG_ORANGE);
        }
        if (n % 9 == 7)
        {
            HgSetColor(HG_SKYBLUE);
        }
        if (n % 9 == 8)
        {
            HgSetColor(HG_MAGENTA);
        }
        for (θ = -3.14; θ < 3.14; θ += 0.01)
        {
            x = θ / 3.14 * 200;
            y = sin(θ + n);
            HgBox(x + 200, y * 200.0 + 200, 1.0, 1.0);
        }
    }

    HgGetChar();
    HgClose();
    return 0;
}
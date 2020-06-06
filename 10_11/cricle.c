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

    HgSetColor(HG_RED);
    for (θ = -3.14; θ < 3.14; θ += 0.01)
    {
        x = cos (θ);
        y = sin (θ);
        HgBox(x * 200 + 200, y * 200.0 + 200, 1.0, 1.0);
    }

    HgGetChar();
    HgClose();
    return 0;
}
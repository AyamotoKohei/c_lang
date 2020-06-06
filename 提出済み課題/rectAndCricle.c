/*****
Kohei Ayamoto
*****/

#include <stdio.h>
#include <handy.h>

int main() {
    HgOpen(600, 400);

    HgSetFillColor(HG_BLUE);
    HgBoxFill(600/2 - 300/2, 400/2 - 300/2, 300, 300, 1);

    HgSetFillColor(HG_YELLOW);
    HgCircleFill(600/2, 400/2, 300/2, 1);

    HgGetChar();
    HgClose();
    return 0;
}

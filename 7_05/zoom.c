/*****
744041 綾本 公平
*****/
#include <stdio.h>
#include <handy.h>

#define WINDOWSIZE 400

int main()
{
    int x = 200;
    int y = 200;
    int r;

    HgOpen(WINDOWSIZE,WINDOWSIZE);

    for (r = 0; r < 300; r += 5)
    {
        HgClear(); 
        HgCircle(x, y, r);
        HgSleep(0.05);
    }

    HgGetChar();
    HgClose();
    return 0;
}
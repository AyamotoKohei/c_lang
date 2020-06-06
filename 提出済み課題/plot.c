/*****
744041 Kohei Ayamoto
*****/

#include <stdio.h>
#include <handy.h>

int main() {
    HgOpen(600, 400);

    int x;
    int y;
    
    for (x = 0; x <= 600; x = x + 10) {
        y = x / 2 + 30;
        HgCircle (x, y, 1);
    }

    
    HgGetChar();
    HgClose();
    return 0;
}

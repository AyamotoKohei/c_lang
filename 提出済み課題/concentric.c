/*****
744041 Kohei Ayamoto
*****/

#include <stdio.h>
#include <handy.h>

int main() {
    HgOpen(600, 600);

    int x = 300;
    int y = 300;
    int r;
    for (r = 50; r <= 250; r = r + 50) {
        HgCircle (x, y, r);
    }

    
    HgGetChar();
    HgClose();
    return 0;
}

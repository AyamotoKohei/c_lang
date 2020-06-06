/*****
744041 綾本 公平
*****/

#include <stdio.h>
#include <handy.h>

int main() {

    int x = 300;
    int y = 300;
    int r;

    HgOpen (600,600);
    
    for (r = 50; r <= 250; r = r + 50) {
        if (r % 100 == 0) {
            HgSetColor(HG_RED);
            HgCircle (x, y, r);
        } else {
            HgSetColor(HG_BLUE);
            HgCircle (x, y, r);
        }
    }
    
    HgGetChar();
    HgClose();

    return 0;
}

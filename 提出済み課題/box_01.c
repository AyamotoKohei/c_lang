#include <stdio.h>
#include <handy.h>

int main() {
    HgOpen(600, 400);
    HgBox(100, 100, 450 - 100, 270 - 100);
    HgGetChar();
    HgClose();
    return 0;
}

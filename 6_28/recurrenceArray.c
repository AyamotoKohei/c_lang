/*****
744041 綾本 公平
*****/

#include <stdio.h>

int main() {

    int num[15] = {};
    int x = 0;
    int y = 14;
    int a = 1;

    for (;;) {
        num[x] = a;
        a = a * 3 + 2;
        x++;
        if (x == 15) break;
    }

    while (y >= 0) {
        printf("%d\n",num[y]);
        y--;
    }
    
    return 0;
}

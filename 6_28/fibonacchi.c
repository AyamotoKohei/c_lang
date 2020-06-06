/*****
744041 綾本 公平
*****/

#include <stdio.h>

int main() {

    int num[20] = {};
    int x = 2;
    int y = 0;
    
    num[0] = 1;
    num[1] = 1;
    
    for (;;) {
        num[x] = num[x-1] + num[x-2];
        x++;
        if (x == 20) break;
    }

    while (y <= 19) {
        printf("%d\n",num[y]);
        y++;
    }
    
    return 0;
}

    //num[0] = 1;
    //num[1] = num[0];
    //num[2] = num[1] + num[0];


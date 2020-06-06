/*****
744041 綾本 公平
*****/

#include <stdio.h>
#include <handy.h>

int main() {

    int x;
    int y;
    int r;
    int d;
    int num;
    int a;
    int b;
    
    printf("整数値を入力してください: ");
    scanf("%d",&num);
    
    HgOpen (600,600);

    d = 600 / num;
    r = d / 2;
    b = 0;
    
    for (;;) {
        while (b < num) {
            a = 0;
            x = r;
            y = 600 - r - (b * d);
            while (a <= b) {
                HgCircle (x, y, r);
                a++;
                x = r + d * a;
            }
            b++; 
        }
        if (b == num) break;
    }
    
    HgGetChar();
    HgClose();

    return 0;
}

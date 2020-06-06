/*****
744041 Kohei Ayamoto
*****/

#include <stdio.h>
#include <handy.h>

int main() {
    int value_x0;
    printf("input_x0: ");
    scanf("%d", &value_x0);

    int value_y0;
    printf("input_y0: ");
    scanf("%d", &value_y0);

    int value_x1;
    printf("input_x1: ");
    scanf("%d", &value_x1);

    int value_y1;
    printf("input_y1: ");
    scanf("%d", &value_y1);
    
    int value_left_x;
    value_left_x = value_x1 - value_x0;

    int value_left_y;
    value_left_y = value_y1 - value_y0;

    HgOpen(600, 600);

    HgBox(value_x0, value_y0, value_left_x , value_left_y);

    HgLine(value_x0/2, value_y0+value_left_y/2, value_x0+value_left_x/2, value_y1+value_left_y*1/2);

    HgLine(value_x0+value_left_x/2, value_y1+value_left_y*1/2, value_x0+(value_left_x/2)*3, value_y0+value_left_y/2);

    HgLine(value_x0/2, value_y0+value_left_y/2, value_x0+value_left_x/2, value_y0-value_left_y/2);

    HgLine(value_x0+value_left_x/2, value_y0-value_left_y/2,value_x0+(value_left_x/2)*3, value_y0+value_left_y/2);
    
    HgBox(value_x0/2, value_y0-value_left_y/2, value_left_x*2, value_left_y*2);

    HgGetChar();
    HgClose();
    return 0;
}


/*****
744041 Kohei Ayamoto
*****/

#include <stdio.h>
#include <handy.h>

int main() {
    int value_x;
    printf("中心のx座標: ");
    scanf("%d", &value_x);

    int value_y;
    printf("中心のy座標: ");
    scanf("%d", &value_y);

    int value_z;
    printf("半径: ");
    scanf("%d", &value_z);

    int value_left_x;
    value_left_x = value_x - value_z;

    int value_left_y;
    value_left_y = value_y - value_z;
    printf("正方形の左下の座標は(%d,%d)\n",value_left_x, value_left_y);

    HgOpen(400, 400);

    HgCircle(value_x, value_y, value_z);

    HgBox(value_left_x, value_left_y, value_z*2, value_z*2);

    HgLine(value_left_x, value_left_y, value_left_x+value_z*2, value_left_y+value_z*2);

    HgLine(value_left_x+value_z*2, value_left_y, value_left_x, value_left_y+value_z*2);

    HgGetChar();
    HgClose();
    return 0;
}

/*****
    744041
    Kohei Ayamoto 
*****/

#include <stdio.h>

int main() {
    int number;

    printf("点数を入力してください: ");
    scanf("%d", &number);
    
    if (number >= 90) {
        printf("秀\n");
    } else if (number >= 80) {
        printf("優\n");
    } else if (number >= 70) {
        printf("良\n");
    } else if (number >= 60) {
        printf("可\n");
    } else {
        printf("不可\n");
    }
    return 0;
}


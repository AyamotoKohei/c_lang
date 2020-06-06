/*
744041 Kohei Ayamoto
*/

#include <stdio.h>

int main() {
    int number;
    number = 0;
    int count;
    count = 1;
    while (number<7) {
        printf("Hello World! %d回目\n",count);
        number = number + 1;
        count = count + 1;
    }

    return 0;
}


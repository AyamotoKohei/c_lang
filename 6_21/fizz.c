/*****
744041 綾本 公平
*****/

#include <stdio.h>

int main() {

    int number;

    printf("input number: ");
    scanf("%d",&number);

    int x = 1;

    while (number >= x) {
        if (x % 3 == 0) {
            printf("fizz\n");
        } else {
            printf("%d\n", x);
        }
        x++;
    }

    return 0;
}

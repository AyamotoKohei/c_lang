/*
744041 Kohei Ayamoto
*/

#include <stdio.h>

int main() {
    int number;
    number=0;
    
    while (number <= 0) {
         printf("input number: ");
         scanf("%d",&number); //数字指定
    }

    int sum;
    sum = 0;
    int count;
    count = 0;

    while (number>count) {
        count = count + 1;
        sum = sum + count;
    }
    
    printf("sum = %d\n",sum);
    return 0;
}


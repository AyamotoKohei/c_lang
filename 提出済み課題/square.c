/*
744041 Kohei Ayamoto
*/

#include <stdio.h>

int main() {
    int number;
    printf("input number: ");
    scanf("%d",&number); //数字指定

    int count;
    count = 1;
    
    while (number>0 && number >= count) {
        printf("%d * %d = %d\n", count, count, count*count);
        count = count+1;
    }
    
    return 0;
}


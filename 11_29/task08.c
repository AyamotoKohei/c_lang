/***
744041 綾本 公平
***/
#include <stdio.h>

int prime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;

    printf("number : ");
    scanf("%d", &n);
    printf("%d ", n);

    if(prime(n) == 0){
        printf("is not prime\n");
    }else{
        printf("is prime\n");
    }

    return 0; //プログラムを終了
}
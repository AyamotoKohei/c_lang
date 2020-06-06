#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, N;

    scanf("%d", &N);
    //printf("%d\n", N); //デバック

    for (n = 2; n <= N; n++){
        for (i = 2; i <= n; i++){
            if (n == i) {
                printf("%d is prime\n", n);
                break;
            }else{
                printf("%d is not prime\n", n);
                break;
            }
        }
    }
    exit(0); //プログラムを終了
}
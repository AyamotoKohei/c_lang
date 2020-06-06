/***
744041 綾本 公平
***/
#include <stdio.h>
#define X 3
#define Y 3
int main()
{
    int date[X][Y];
    int x, y;

    for (x = 0; x < X; x++){
        for (y = 0; y < Y; y++){
            scanf("%d\n", &date[x][y]);
        }
    }

    printf("before\n");  
    
    for (x = 0; x < X; x++){
        for (y = 0; y < Y; y++){
            if (date[x][y] == 1){
                printf("■ ");
            } else {
                printf("□ ");
            }
        }
        printf("\n");
    }

    printf("after\n");

    for (y = 0; y < Y; y++){
        for (x = 0; x < X; x++){
            if (date[y][2 - x] == 1){
                printf("■ ");
            } else {
                printf("□ ");
            }
        }
        printf("\n");
    }

        
    return 0;
}
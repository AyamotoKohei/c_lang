/***
744041 綾本 公平
***/
#include <stdio.h>
#define VER 3
#define SID 3
int main()
{
    int date1[VER][SID];
    int big[5] = {};
    int v, s, n;

    for (v = 0; v < VER; v++){
        for (s = 0; s < SID; s++){
            scanf("%d\n", &date1[v][s]);
        }
    }
    
    for (n = 0; n < 5; n++){
        scanf("%d\n", &big[n]);
    }
    
    for (v = 0; v < VER; v++){
        for (s = 0; s < SID; s++){
            printf(" %d ", date1[v][s]);
        }
        printf("\n");
    }
    
    printf("-- -- -- \n");

    for (v = 0; v < VER; v++){
        for (s = 0; s < SID; s++){
            if (date1[v][s] == big[0] || date1[v][s] == big[1] || date1[v][s] == big[2] || date1[v][s] == big[3] || date1[v][s] == big[4]){
                date1[v][s] = 0;
                printf(" . ");
            }
            else{
                printf(" %d ", date1[v][s]);
            }
        }
        printf("\n");
    }
    printf("-- -- -- \n");
    if ((date1[0][0] == 0 && date1[0][1] == 0 && date1[0][2] == 0) || 
    (date1[1][0] == 0 && date1[1][1] == 0 && date1[1][2] == 0) ||
    (date1[2][0] == 0 && date1[2][1] == 0 && date1[2][2] == 0) ||
    (date1[0][0] == 0 && date1[1][0] == 0 && date1[1][0] == 0) ||
    (date1[0][1] == 0 && date1[1][1] == 0 && date1[2][1] == 0) ||
    (date1[0][2] == 0 && date1[1][2] == 0 && date1[2][2] == 0) ||
    (date1[0][0] == 0 && date1[1][1] == 0 && date1[2][2] == 0) ||
    (date1[0][2] == 0 && date1[1][1] == 0 && date1[2][0] == 0)){
        printf("Bingo\n");
    }
    else{
        printf("Not Bingo\n");
    }
    
    return 0;
}
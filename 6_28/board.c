/*****
744041 綾本 公平
*****/

#include <stdio.h>

int main() {
    int board[9][9];  
    int i ;
    int j ;

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {  
            if (i == j) {
                board[i][j] = 1;
            }
            else {
                board[i][j] = 0;
            }
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/***
744041 綾本　公平
***/

#include <stdio.h>

int janken(int user, int enemy){
    if(user == enemy){
        return 0; //even
    }else if(user % 3 == enemy - 1){
        return 1; //win
    }else{
        return -1; //lose
    }

}

int main()
{
    int user, enemy;
    printf("user : ");
    scanf("%d", &user);
    printf("enemy : ");
    scanf("%d", &enemy);

    int result = janken(user, enemy);

    if(result == 0){
        printf("even\n");
    }else if(result == 1){
        printf("win\n");
    }else{
        printf("lose\n");
    }

    return 0;
}